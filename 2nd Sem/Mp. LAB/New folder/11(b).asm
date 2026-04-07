;include``emux86.inc''
org 100h 
.model small 
.stack 100h 
.data 
.code 
main proc 
mov cx,0
;print ''Enter String :'' 
j: mov ah,01
int 21h 
mov bl,al 
inc cx 
cmp bl,0Dh ; ASCII value of Enter 
je rev  
push bx
jmp j
rev: 
mov dl, 0Ah ; read The String
mov ah, 02h 
int 21h
l:         
pop dx 
mov ah,02h 
int 21h 
loop l
 
main endp 
end main 
ret 
