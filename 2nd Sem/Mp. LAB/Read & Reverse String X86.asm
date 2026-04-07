;include 'emu8086.inc'
.model samll
.stack 100h

.data
inpt db 0ah,0dh,"Enter Your String :$" 
msg db 60 dup(?)
outt db 0ah,0dh,"Your String is : $"

.code

main proc
    mov ax,@data
    mov ds,ax 
    
    lea dx,inpt
    mov ah,09
    int 21h
    
    mov si,offset msg
    
    input :
    mov ah,1
    int 21h
    cmp al,13
    je display
    mov [si],al
    inc si
    jmp input
    
    display:
    lea dx,outt
    mov ah,89
    int 21h
    
    mov [si] , '$'
    mov di,offset msg
    mov dl,13
    int 21h
    mov dl,10
    mov ah,2
    int 21h
    
    again :
    cmp [di],'$'
    je last
    cmp [di] ,32
    je next
    mov dl,[di]
    mov ah,2
    int 21h
    inc di
    jmp again
    
    next :
    mov dl,13
    int 21h
    mov ah,2
    int 21h
    inc di
    jmp again
    
    last :
    mov ah,4ch
    int 21h
    
    
    main endp
end main