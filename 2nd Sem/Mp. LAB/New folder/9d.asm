.model small 
.stack 100h 
.data    
string db 'This is the first assembly language program.','$'
.code 
main proc
    mov ax,@data;
    mov ds,ax
    mov ah,09h
    mov dx,offset string
    int 21h
    mov ax,4c00h
    int 21h
    
MAIN ENDP 
END MAIN 