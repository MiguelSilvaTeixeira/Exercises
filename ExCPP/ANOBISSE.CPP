//AnoBissexto.CPP (Autor: Miguel Teixeira)
#include<iostream.h>
#include<conio.h>
#include<ctype.h>

void main () {
do {
clrscr();
int ano;
cout<<"\n Digite o ano: ";
cin>>ano;
if (ano%400==0 || ano%4==0 && ano%100!=0){
cout<<"\n O ano "<<ano<<" é bissexto";
}
else{
cout<<"\n O ano "<<ano<<" não é bissexto";
}
cout<<"\n\n Quer rodar o APP de novo <s/n>:";
} while(tolower(getch()=='s'));
}
