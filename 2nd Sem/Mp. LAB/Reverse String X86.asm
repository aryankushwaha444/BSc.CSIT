include 'emu8086.inc'
.model samll
.stack 100h

.data
string db 'This is Microprocessor'

.code

main proc
    mov ax,@data
    mov ds,ax
    mov si ,  offset string
    mov cx,22
    
    loop1:
    mov bx,[si]
    push bx
    inc si
    loop loop1
    mov cx,22
    
    loop2:
    pop dx ;
    mov ah,02h
    int 21h
    loop loop2
    main endp
end main