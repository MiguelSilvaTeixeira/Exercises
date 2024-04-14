#Assembly MIPS - Aula 3 - Impressão de Inteiros (int)
.data
	idade: .word 18 #valor inteiro na memória RAM
.text
	li $v0, 1
	lw $a0, idade
	syscall