.MODEL SMALL
.STACK 100H
.DATA
    NUM1 DB ?
    NUM2 DB ?
    NUM3 DB 3
    AVG DB ?
    MSG1 DB "THREE NUMBERS: ","$"
    MSG2 DB "AVG: ","$"
    NEWLINE DB 10, 13, "$"
.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX
    MOV AH, 09
    LEA DX, MSG1
    INT 21H
    
    ;INPUT
    MOV AH,01
    INT 21H
    SUB AL, 30H
    MOV NUM1, AL
    INT 21H
    SUB AL, 30H
    MOV NUM2, AL
    INT 21H
    SUB AL, 30H
    MOV BL, AL
    
    ; ADDITION
    ADD BL, NUM1
    ADD BL, NUM2
    
    ; DIVISION
    MOV AX, 0
    MOV AL, BL
    DIV NUM3
    MOV BL, AL
    MOV AH, 09
    LEA DX, NEWLINE
    INT 21H
    
    ; OUTPUT
    MOV AH, 02
    ADD BL, 30H
    MOV DL, BL
    INT 21H
    
    MOV AH, 4CH
    INT 21H
    MAIN ENDP
END MAIN
