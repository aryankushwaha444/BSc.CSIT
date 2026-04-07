include 'emu8086.inc'
.model samll
.stack 100h

.data
string db 'This is Microprocessor','$'

.code

main proc
    mov ax,@data
    mov ds,ax
    mov ah,09h
    lea dx,string
    int 21h
    mov ax,4c00h
    int 21h
    
    main endp
end main