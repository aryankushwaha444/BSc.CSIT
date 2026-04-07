 .model small 
.stack 100h 
.data 
.code 
main proc 
mov ah, 1
int 21h 
mov dl, al; content of accumulator is moved into dl register 
mov ah, 2; used for output 
int 21h 
main endp 
end main