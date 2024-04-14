#Assembly MIPS - Aula 6 - Multiplicação de Inteiros (mul e sll) -  SHIFT LEFT
.text
	li $t0, 12 #t0 = 12
	addi $t1, $zero, 10 #t1 = 10
	
	sll $s1, $t1, 10 #multiplicar por 2^10 = 1024 (s1 = t1 * 2^10)
	
	#$s0 terá o resultado da multiplição
	mul $s0, $t0, $t1 #s0 = t0 * t1
	
	li $v0, 1 #instrução para impressão de inteiro
	move $a0, $s0 #indicar o endereço em que está o número int
	syscall
