.MODEL SMALL
.STACK 100H
.DATA
    STRING DB 20 DUP(?) 
    TEXT DB "ENTER THE STRING: $"
    TXT DB 10,13, "REVERSE STRING: $"
.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX
    MOV CX, 13           ;13 for my full name length 
    MOV SI, OFFSET STRING
    
    MOV AH, 09
    LEA DX, TEXT
    INT 21H
    
    INPUT:
    MOV AH, 01
    INT 21H
    MOV [SI], AL
    PUSH [SI]
    INC SI
    LOOP INPUT
    
    MOV AH, 09
    LEA DX, TXT
    INT 21H
    
     
    MOV CX, 13
    MOV SI, OFFSET STRING
    
    OUTPUT:
    POP [SI]
    MOV DL, [SI]
    MOV AH, 02
    INT 21H
    INC SI
    LOOP OUTPUT
    
    MOV AH, 4CH
    INT 21H
    MAIN ENDP
END MAIN
