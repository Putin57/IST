.model small
.stack 100h
.data
    evenMsg db 0dh,0ah,'Even$'
    oddMsg  db 0dh,0ah,'Odd$'
.code
main proc
    mov ax,@data
    mov ds,ax

    mov ah,1
    int 21h
    sub al,'0'

    test al,1
    mov dx,offset evenMsg
    jz print
    mov dx,offset oddMsg
    print:
        mov ah,9
        int 21h
    
        mov ah,4ch
        int 21h
        main endp          
end main
