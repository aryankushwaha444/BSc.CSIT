.model small 
.stack 100h 
.data 
var1 db "HELLO$" 
var2 db 10,13, "WORLD$" 
.code 
main proc 
mov ax, @data 
mov ds, ax  
mov dx, offset var1
mov ah, 9 
int 21h 
lea dx, var2
mov ah,9
int 21h 
mov ah, 4ch 
int 21h 
main endp 
end main 