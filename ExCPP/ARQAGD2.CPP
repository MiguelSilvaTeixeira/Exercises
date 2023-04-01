//ARQAGD.CPP (Autor: Miguel Teixeira)
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream.h>
#include <dos.h>

void criar_arq();
void cadastrar();
void exibir();
     FILE *AGENDA; //criando o ponteiro de arquivo de nome AGENDA
     char ID[3], NOME[41],EMAIL[25];//declarando os campos do registro AGENDA

void main()
     {
     int OPCAO;
     clrscr();
     gotoxy(33, 1);cout<< " MENU PRINCIPAL: ";
     gotoxy(33, 2);cout<< " --------------- ";
     gotoxy(29, 5);cout<< " CRIAR ARQUIVO......: [1]";
     gotoxy(29, 7);cout<< " CADASTRAR REGISTROS: [2]";
     gotoxy(29, 9);cout<< " EXIBIR REGISTRO....: [3]";
     gotoxy(29,11);cout<< " FINALIZAR..........: [4]";
     gotoxy(29,13);cout<< " ENTRE COM A OPCAO ---->";
     cin>>OPCAO;
     fflush(stdin);//fflush() funcao que limpa buffer do teclado
	switch(OPCAO)
	 {
	 case 1:
	   criar_arq();
	   break;
	 case 2:
	   cadastrar();
	   break;
	 case 3:
	   exibir();
	   break;
	 case 4:
	   cout<<"Aguarde...";
	   delay(1000);
	   break;
	 default:
	    cout <<"\nOPCAO INVALIDA - TENTE NOVAMENTE !!!";
	 getch();
  } }

 //subrotina  criar arquivo
 void criar_arq()
  {
  clrscr();
  gotoxy(31,1);cout<<"Criando Arquivo Texto:  ";
  AGENDA=fopen("C:\\TURBOC3\\ArqAgd.txt", "w");// abre o arquivo ArqAgd  p/w=regravacao
  gotoxy(31,12);cout<<"Arquivo Criado: ArqAgd.txt no drive C:";
  gotoxy(25,24);cout<<"Tecle algo para sair:  ";
  getch();
  fclose(AGENDA);// fecha o ponteiro de arquivo AGENDA
    }

 //subrotina de cadastramento
 void cadastrar()
  {
  clrscr();
	  gotoxy(27,1);cout<<"CADASTRAMENTO DE REGISTROS:  ";
  AGENDA=fopen("C:\\TURBOC3\\ArqAgd.txt", "a");//abre o arquivo ArqAgd   p/   a=gravacao

  gotoxy(10,5);cout<<"Entre com o ID [3].....:";gets(ID);
     fputs(ID, AGENDA);// grava dados do campo ID
     fputs("   ", AGENDA);// grava " " no registo
  gotoxy(10,7);cout<<"Entre com o NOME [max 41 digitos]:  ";gets(NOME);
     fputs(NOME, AGENDA);// grava dados do campo NOME
     fputs("   ", AGENDA);// grava " " no registro
   gotoxy(10,9);cout<<"Entre com o EMAIL [max 25 digitos]:  ";gets(EMAIL);
     fputs(EMAIL, AGENDA);// grava dados do campo EMAIL
     fputs("\n", AGENDA);// grava "\n" no registro
  gotoxy(25,20); cout<<"Para exibir os registros cadastrados organizados";
  gotoxy(25,21); cout<<"deve sair do programa e rodar novamente!!!!";
  gotoxy(25,24);cout<<"Tecle algo para voltar ao menu:  ";
  getch();
  fclose(AGENDA);// fecha o ponteiro de arquivo AGENDA
    }
//subrotina  exibir
 void exibir()
  {
  clrscr();
  int LINHA=5;
  gotoxy(27,1);cout<<"Exibindo os Registros:  ";
AGENDA=fopen("C:\\TURBOC3\\ArqAgd.txt", "r");//abre o arquivo de dados ArqAgd  p/ r=leitura
  while (fgets(NOME, 75,AGENDA) !=NULL)//fgets() leitura dos dados do campo NOME gravado
    {
    gotoxy(5,LINHA); cout<<ID<<"   "<<NOME<<"   "<<EMAIL;
    LINHA +=1;
    }
   gotoxy(25,24);cout<<"Tecle algo para voltar ao menu:  ";
   getch();
   fclose(AGENDA);//fecha o ponteriro de arquivo AGENDA
    }
