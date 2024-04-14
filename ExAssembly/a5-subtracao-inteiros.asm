#Assembly MIPS - Aula 5 - Subtração de Inteiros (sub e subi)
.text
	li $t0, 75 #t0 = 75
	li $t1, 25 #t1 = 25
	sub $t2, $t0, $t1 #t2 = t0 - t1
	subi $t3, $t2, 40 #t3 = t2 - 40