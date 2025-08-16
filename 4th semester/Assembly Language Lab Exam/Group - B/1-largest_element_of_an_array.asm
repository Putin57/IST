.model small
.stack 100h
.data
    arr db 5 dup(?)
.code
main proc
    mov ax,@data
    mov ds,ax
    lea di,arr
    mov cx,5
    inp: mov ah,1
        int 21h
        sub al,30h
        mov [di],al
        inc di
        loop inp
        lea si,arr
        mov bl,[si]
        mov cx,4
    mx: inc si
        cmp bl,[si]
        jae nxt
        mov bl,[si]
    nxt: loop mx
        mov dl,bl
        add dl,30h
        mov ah,2
        int 21h
        mov ah,4ch
        int 21h
        main endp
end main
