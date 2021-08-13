	.file	"amoswapTest.c"
	.option nopic
	.text
	.section	.rodata
	.align	3
.LC0:
	.string	"tutorialspoint"
	.align	3
.LC1:
	.string	"String = %s,  Address = %u\n"
	.text
	.align	1
	.globl	main
	.type	main, @function
main:
	addi	sp,sp,-32
	sd	ra,24(sp)
	sd	s0,16(sp)
	addi	s0,sp,32
	li	a0,15
	call	malloc
	mv	a5,a0
	sd	a5,-24(s0)
	ld	a4,-24(s0)
	lui	a5,%hi(.LC0)
	addi	a5,a5,%lo(.LC0)
	mv	a3,a5
	li	a5,15
	mv	a2,a5
	mv	a1,a3
	mv	a0,a4
	call	memcpy
	ld	a2,-24(s0)
	ld	a1,-24(s0)
	lui	a5,%hi(.LC1)
	addi	a0,a5,%lo(.LC1)
	call	printf
	li	a5,0
	mv	a0,a5
	ld	ra,24(sp)
	ld	s0,16(sp)
	addi	sp,sp,32
	jr	ra
	.size	main, .-main
	.ident	"GCC: (GNU) 10.3.1 20210422 (Red Hat 10.3.1-1)"
	.section	.note.GNU-stack,"",@progbits
