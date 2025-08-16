.model small
.stack 100h
.code
start:
    mov ah, 1        ; read char
    int 21h  
    xor al, 20h      ; toggle case
    mov dl, al     
    mov ah, 2        ; print char
    int 21h       
    mov ah, 4ch      ; exit
    int 21h
end start
