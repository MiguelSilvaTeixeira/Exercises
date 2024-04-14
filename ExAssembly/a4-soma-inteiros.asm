#Assembly MIPS - Aula 4 - Soma de Inteiros (add e addi)
.text
	li $t0, 75 #t0 = 75
	li $t1, 25 #t1 = 25
	add $s0, $t0, $t1 #s0 = t0 + t1
	addi $s1, $s0, 13 #s1 = s0 + 13