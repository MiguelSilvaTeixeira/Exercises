//EXPARIMP.CPP (Autor: Miguel Teixeira)
//Esse programa verifica se o número inserido pelo usuário é par ou impar.
#include<conio.h>
#include<stdio.h>
void main () {
clrscr();
int N, Resto;
printf ("\n\n Verificar se um número é par ou impar.");
printf ("\n\n Digite um número int: ");
scanf ("%i",&N);
Resto=N%2;
if (Resto==0){
printf ("\n é um número par");}
else{
printf ("\n é um número impar");}
getch();
}
