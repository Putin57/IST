.model small
.stack 100h
.code
start:
    mov ah,1
    int 21h
    sub al,'0'
    mov bl,al

    mov ah,1
    int 21h
    sub al,'0'

    mov dl,al
    cmp al,bl
    jc done
    mov dl,bl
    done:
        add dl,'0'
        mov ah,2
        int 21h
    
        mov ah,9
        int 21h
    
        mov ah,4ch
        int 21h
end start
