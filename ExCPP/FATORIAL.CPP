//FATORIAL.CPP.CPP (Autor: Miguel Teixeira)
//Esse programa faz o FATORIAL de um NÚMERO Inteiro positivo inserido pelo usuário.
#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void main() {
do {
clrscr();
long int N, R, X=1;
cout<<"\n Digite um n£mero int: ";
cin>>N;
R=N;
if (N>=0) {
	while (N>1) {
		X=X*N;
		N=N-1;}
		cout<<"\n "<<R<<"! = "<<X;
	}
else { cout<<"\n Favor digitar N positivo";}
cout<<"\n\n Quer rodar o APP de novo <s/n>: ";
} while(tolower(getch()=='s'));
}
