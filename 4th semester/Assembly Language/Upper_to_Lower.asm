.MODEL SMALL
.STACK 100H
.DATA 
NUM1 DB ?
.CODE
MAIN PROC 
    MOV AX, @DATA
    MOV DS, AX
 
    ;INPUT 
    MOV AH, 01
    INT 21H
    MOV NUM1, AL 
 
    ; LOWER TO UPPER
    MOV DL, NUM1
    add DL, 32         
    MOV AH, 02
    INT 21h
 
 
    ;OUTPUT
    ;MOV DL, NUM1
    ;MOV AH, 02
    ;INT 21H
 
 
 
    MOV AH, 4CH
    INT 21H
   MAIN ENDP
END MAIN
 