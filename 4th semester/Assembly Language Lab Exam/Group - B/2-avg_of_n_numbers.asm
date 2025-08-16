.model small
.code
start:
    mov al, 1+2+3
    mov bl, 3
    div bl
    add al, 30h
    mov dl, al
    mov ah, 2
    int 21h
    mov ah, 4ch
    int 21h
end start
