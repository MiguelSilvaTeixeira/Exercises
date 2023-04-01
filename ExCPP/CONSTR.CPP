//CONSTR.CPP (Autor: Miguel Teixeira)
//Esse programa faz a concatenação das Strings inseridas pelo usuário.
#include<iostream.h>
#include<conio.h>
#include<string.h>

void main () {
clrscr();
char Nome1[10], Nome2[10], Nome3[10];
char N1[30], N2[30], N3[30], N4[30];
cout<<"\n Digite o seu primeiro nome: ";
cin>>Nome1;
cout<<"\n Digite o seu nome do meio: ";
cin>>Nome2;
cout<<"\n Digite o seu sobrenome: ";
cin>>Nome3;
strcpy(N1,Nome1); //Nome1 = N1
strcpy(N2,Nome2); //Nome2 = N2
strcpy(N3,Nome3); //Nome3 = N3
strcpy(N4," ");   //N4    = espa‡o

strcat(N1,N4);//N1 + espa‡o = N1	-> N1 + " "
strcat(N1,N2);//N1 + Nome2  = N1	-> N1 + " " + N2
strcat(N1,N4);//N1 + espa‡o = N1	-> N1 + " " + N2 + " "
strcat(N1,N3);//N1 + Nome3  = N1	-> N1 + " " + N2 + " " + N3

cout<<"\n Nome: "<<N1; //N1 = Nome1 + Nome2 + nome3
getch();
}
