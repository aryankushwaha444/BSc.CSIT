.model small
.stack 100h
.data
mg1 db "Enter your character : $"
mg2 db 10,13, "The Character is $"

.code
mov ax,@data
mov ds,ax
mov dx,offset mg1
mov ah,09h
int 21h
mov ah,1h
int 21h
mov bl,al
mov dx,offset mg2
mov ah,09h
int 21h
mov dl,bl
mov ah,02h
int 21h
mov ah,4ch
