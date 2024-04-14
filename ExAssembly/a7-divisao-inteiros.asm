#Aula 7 - Divisão de Inteiros (div e srl) - SHIFT RIGHT
.text
	li $t0, 64
	li $t1, 13
	
	srl $s2, $t0, 2 #divide por 2^2 = 4 (s2 = t0 / 2^4)
	
	div $t0, $t1 #divide $t0 por $t1 e guarda a parte inteira em "lo" e o resto em "hi"
		
	#move a parte inteira para $s0
	mflo $s0
	
	#move o resto para $s1
	mfhi $s1