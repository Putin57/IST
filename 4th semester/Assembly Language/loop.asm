.MODEL SMALL
.STACK 100H
.DATA DB
    TEXT DB "IST","$"
.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX
    MOV CL, 5
    MOV AH, 09
    LEA DX, TEXT
    LOOP:
    INT 21H
    DEC CL
    JNZ LOOP
    MOV AH, 4CH
    INT 21H
   MAIN ENDP
END MAIN
 
