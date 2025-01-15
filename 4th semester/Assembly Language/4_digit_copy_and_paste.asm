.MODEL SMALL
.STACK 100H
.DATA
.CODE

MAIN PROC
    MOV AH, 01  ; INPUT
    INT 21H     ; VALUE STORED IN AL  
    MOV BL, AL 
    INT 21H
    MOV BH, AL
    INT 21H
    MOV CL, AL
    INT 21H
    MOV CH, AL      
    
    MOV AH, 02 ; OUTPUT WITH NEWLLINE  
    MOV DL,10
    INT 21H  
    MOV DL, 13
    INT 21H 
    
    
    
    MOV DL, BL  ; DL = AL
    INT 21H      
    MOV DL,BH   ; DL = BH
    INT 21H   
    MOV DL, CL
    INT 21H
    MOV DL, CH
    INT 21H
    MOV AH, 4CH
    INT 21H
    MAIN ENDP
END MAIN
