//CalcHPCP.CPP (Autor: Miguel Teixeira)
//Programa em C++
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

void main () {
do {
clrscr();
float X, Y, Z;
char Op;
cout<<"\n Op‡oes: ";
cout<<"\n 1- Soma ";
cout<<"\n 2- Subtra‡ao ";
cout<<"\n 3- Multiplica‡ao ";
cout<<"\n 4- Divisao ";
cout<<"\n 5- Sair ";
cout<<"\n\n Digite o n£mero da op‡ao: ";
cin>>Op;

switch (Op) {
	case '1':
		cout<<"\n Digite o n£mero X: ";
		cin>>X;
		cout<<"\n Digite o n£mero Y: ";
		cin>>Y;
		Z = X + Y;
		cout<<"\n "<<X<<" + "<<Y<<" = "<<Z;
		cout<<"\n\n Resultado = "<<Z;
		break;

	case '2':
		cout<<"\n Digite o n£mero X: ";
		cin>>X;
		cout<<"\n Digite o n£mero Y: ";
		cin>>Y;
		Z = X - Y;
		cout<<"\n "<<X<<" - "<<Y<<" = "<<Z;
		cout<<"\n\n Resultado = "<<Z;
		break;

	case '3':
		cout<<"\n Digite o n£mero X: ";
		cin>>X;
		cout<<"\n Digite o n£mero Y: ";
		cin>>Y;
		Z = X * Y;
		cout<<"\n "<<X<<" * "<<Y<<" = "<<Z;
		cout<<"\n\n Resultado = "<<Z;
		break;

	case '4':
		cout<<"\n Digite o n£mero X: ";
		cin>>X;
		cout<<"\n Digite o n£mero Y: ";
		cin>>Y;
		if (Y==0) {
		cout<<"\n Erro! Y==0 ";}
		else {
		Z = X / Y;
		cout<<"\n "<<X<<" / "<<Y<<" = "<<Z;
		cout<<"\n\n Resultado = "<<Z;}
		break;

	case '5':
		exit(5);
		break;

	default:
	cout<<"\n Op‡ao invalida";
}
cout<<"\n\n Quer voltar ao MENU <s/n>:";
} while(tolower(getch()=='s'));
}