//CARACTER.CPP (Autor: Miguel Teixeira)
//Esse programa faz a leitura dos CARACTERES inseridos pelo usuário e o retorna ao mesmo.
#include<iostream.h>
#include<conio.h>
void main()
{
int i;
char Caracter[10];
clrscr();
cout<<"\n Digite os caracteres:\n";
for(i=1;i<=10;i++)
{ cout<<" Caracter["<<i<<"]= ";
cin>>Caracter[i];
}
cout<<"\n Os caracteres que digitou:  ";
for(i=1;i<=10;i++)
{ cout<<Caracter[i]<<" ";
}
getch();
}
