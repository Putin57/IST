.model small
.stack 100h
.code
start:
    mov ah, 1
    int 21h
    
    cmp al, 'y'
    je print
    cmp al, 'Y'
    jne exit
    
    print:
        mov ah,2
        mov dl, al
        int 21h
    exit:
        mov ah, 4ch
        int 21h
end start
    
