.MODEL SMALL
.STACK 100H
.DATA
   NUM1 DB ?
   MSG1 DB 'ENTER TWO NUMBERS:','$'
   MSG2 DB 'SMALLEST:','$'
.CODE
MAIN PROC
    MOV AX,@DATA
    MOV DS,AX 
    
    ;INPUT
    MOV AH,09
    LEA DX,MSG1
    INT 21H
    MOV AH,01 
    INT 21H
    MOV NUM1,AL 
    INT 21H
    MOV BL,AL 
               
    ;NEW LINE,MSG2 PRINT
    MOV AH,02
    MOV DL,10
    INT 21H
    MOV DL,13
    INT 21H 
    MOV AH,09
    LEA DX,MSG2
    INT 21H    
               
    ;CONDITION
    CMP NUM1,BL
    JG TO_NUM2
    JlE TO_NUM1 
    
    ;NUM1 SMALLEST 
    TO_NUM1:
    MOV AH,02
    MOV DL,NUM1 
    INT 21H
    JMP ENDS  

     
    ;NUM2 SMALLEST 
    TO_NUM2:
    MOV AH,02
    MOV DL,BL
    INT 21H
     
    ;END
    ENDS: 
    MOV AH,4CH
    INT 21H
    
    MAIN ENDP
END MAIN 


