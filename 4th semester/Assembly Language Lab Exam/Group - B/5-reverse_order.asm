.model small
.code
start:
    mov cx, 5            
    input:
        mov ah, 1
        int 21h
        push ax         
        loop input
        mov cx, 5
    output:
        pop dx           
        mov ah, 2
        int 21h
        loop output
        mov ah, 4ch
        int 21h
END START


; TAKE INPUT: 12345
