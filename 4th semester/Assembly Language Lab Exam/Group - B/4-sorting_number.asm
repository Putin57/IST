.MODEL SMALL
.DATA
    arr DB 5 DUP(?)
.CODE
START:
    MOV AX,@DATA
    MOV DS,AX

    ; input 5 numbers
    LEA DI,arr
    MOV CX,5
in1: MOV AH,1
    INT 21h
    SUB AL,30h
    MOV [DI],AL
    INC DI
    LOOP in1

    ; bubble sort
    MOV CX,4
out: LEA SI,arr
    MOV DX,CX
in2: MOV AL,[SI]
    CMP AL,[SI+1]
    JBE ns
    XCHG AL,[SI+1]
    MOV [SI],AL
ns: INC SI
    DEC DX
    JNZ in2
    LOOP out

    ; print sorted numbers
    LEA SI,arr
    MOV CX,5
pr: MOV DL,[SI]
    ADD DL,30h
    MOV AH,2
    INT 21h
    INC SI
    LOOP pr

    MOV AH,4Ch
    INT 21h
END START
