.model small 
.stack 100h 
.data 
var1 db "HELLOS" 
var2 db " WORLDS" 
;var2 db 10,13, "WORLD$" 
.code 
main proc 
mov ax, @data 
mov ds, ax 
;To print in new line 
; address of data segment is moved into register AX 
;address of ax register is moved into ds 
mov dx, offset varl ; address of varl is moved to dx register 
mov ah, 9 
;To show the string 
int 21h 
lea dx, var2; address of varl is moved to dx register 
mov ah, 
9 
;To show the string 
int 21h 
mov ah, 4ch 
int 21h 
main endp 
end main