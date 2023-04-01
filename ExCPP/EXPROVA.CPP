//ExProva (Autor: Miguel Teixeira)
//Esse programa diz a quantidade de caracteres na frase: "Boa Prova de LP e de Logica".
#include<iostream.h>
#include<conio.h>
#include<string.h>
char word1;

void main (){
clrscr();
int N;
char word1[100];
strcpy(word1,"Boa Prova");
strcat(word1," de LP");
strcat(word1," e de Logica");
N=strlen(word1);
cout<<"\n A frase ("<<word1<<") tem "<<N<<" caracteres";
getch();
}
