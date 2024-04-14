#Assembly MIPS - Aula 8 - Leitura de Inteiros
.data
	saudacao: .asciiz "Ol�. Por favor, forne�a sua idade: "
	saida: .asciiz "Sua idade � "
.text
	li $v0, 4 #imprimir uma string
	la $a0, saudacao
	syscall
	
	li $v0, 5 #leitura de inteiros
	syscall
	
	move $t0, $v0 #valor fornecido está em t0
	
	li $v0, 4 #imprimir uma string
	la $a0, saida
	syscall
	
	li $v0, 1 #imprimir inteiro
	move $a0, $t0 #valor fornecido está em a0
	syscall