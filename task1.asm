[org 0x0100]
jmp start
data : dw 5
output : dw 1
start:
mov bx,[data]
push bx
call factorial

factorial:
push bp
mov bp,sp
push ax
push cx

call v1
call pooploop
pop cx
pop ax 
pop bp

v1:
push bx
sub bx,1
cmp bx,1
jne v1

v2:
mov ax, [output]
mul ax
mov [output],ax
cmp sp,5
jne v2
mov ax,0x4c00
int 0x21