org 100h 
.model small
.stack 100h 
.data 
.code 
main proc 
mov cx,0
j: mov ah,01 
int 21h 
mov bl,al 
inc cx 
cmp bl,0Dh
je rev 
push bx
jmp j
rev: 
mov dl, 0Ah 
mov ah, 02
int 21h  
mov dl,0Dh
mov ah,02 
int 21h 
l: pop dx 
mov ah,02 
int 21h 
loop l 
main endp 
end main 
ret 
