#Assembly MIPS
.data
	#área para dados na memória principal
	msg: .asciiz "Hello Word!" #mensagem a ser exibida para o usuário

.text
	#Área para instruções do programa	
	
	li $v0, 4 #instrução para impressão de String
	la $a0, msg #indicar o endereço em que está a mensagem
	syscall #faça! Imprima