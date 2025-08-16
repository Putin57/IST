; Short 8086 program to toggle case of a letter
.model small
.stack 100h
.code
main proc
    mov ah, 1        ; read char
    int 21h  
    
    xor al, 20h      ; toggle case
    mov dl, al   
    
    mov ah, 2        ; print char
    int 21h       
    
    mov ah, 4ch      ; exit
    int 21h
    main endp
end main
