assume cs:code
extrn _f2:far

data segment

	db 128 dup (0)
	
data ends




code segment


  start:
	mov ax,data
	mov ds,ax
	mov ss,ax
	mov sp,128 
	
	call _f2
	
	mov ax,4c00h
	int 21h



code ends

end start



