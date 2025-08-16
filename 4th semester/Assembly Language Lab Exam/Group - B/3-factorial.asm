.model small
.code
start:   
    mov ah,01
    int 21h
    sub al,30h
    mov bl,al    
    mov ax,1
    fact:
    mul bl
    dec bl
    jnz fact
    add al,30h  
    mov dl,al
    mov ah,02
    int 21h
    mov ah,4ch
    int 21h
end start
