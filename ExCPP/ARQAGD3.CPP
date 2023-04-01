//ARQAGD3.CPP (Autor: Miguel Teixeira)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream.h>
#include<dos.h>
#include<ctype.h>

 void Criar_Arq();
 void Cadastrar_Reg();
 void Exibir_Reg();
 FILE *Agenda;

 char Cod[3], Nome[41], Tel[15]; // variaveis globais

 void main()
 {
  do {
	clrscr();
	int Op;
	cout<<"\n Menu Principal!";
	cout<<"\n 1_Criar Arquivo no C:";
	cout<<"\n 2_Cadastrar Registro";
	cout<<"\n 3_Exibir Registro";
	cout<<"\n 4_Sair";
	cout<<"\n Qual op‡ao deseja===>"; cin>>Op;
	fflush(stdin);
	switch(Op)
	 {
	  case 1:
	  Criar_Arq();
	  break;
	  case 2:
	  Cadastrar_Reg();
	  break;
	  case 3:
	  Exibir_Reg();
	  break;
	  case 4:
	  cout<<"\n Aguardar o Fim...";
	  delay(1000);
	  exit(4);
	  break;
	  default:
	  cout<<"\nOp invalido!!!";
     }
    cout<<"\n\n Quer voltar ao MENU <s/n>: ";
  } while(tolower(getch()=='s'));
 }

 // SubRotinas

 void Criar_Arq()
 {
  clrscr();
  cout<<"\n Criando Arquivo txt no C: ....";
  delay(1000);
  Agenda=fopen("C:\\TURBOC3\\Agenda3.txt","w");
  cout<<"\n\n Arquivo Agenda3.txt criado no C:";
  cout<<"\n\n Aperte qualquer tecla para continuar...";
  getch();
  fclose(Agenda);
  }

 void Cadastrar_Reg ()
 {
 clrscr();
 cout<<"\nCadastrando Registro";
 Agenda = fopen("C:\\TURBOC3\\Agenda3.txt","a");

 cout<<"\n Digite Cod: ";
 gets(Cod);
 fputs(Cod,Agenda);
 fputs("   ",Agenda);
 cout<<"\n Digite Tel: ";
 gets(Tel);
 fputs(Tel,Agenda);
 fputs("   ",Agenda);
 cout<<"\n Digite Nome: ";
 gets(Nome);
 fputs(Nome,Agenda);
 fputs("\n",Agenda);

  cout<<"\n\n Aperte qualquer tecla para continuar...";
  getch();
  fclose(Agenda);

	};

 void Exibir_Reg()
 {
 int L=4;
 clrscr();
 cout<<"\n Exibindo Registro:\n\n ";
 Agenda=fopen("C:\\TURBOC3\\Agenda3.txt", "r");
 while(fgets(Nome,75,Agenda)!=NULL)
 {
  gotoxy(5,L);
  cout<<Nome;
  L=L+1;
  }
  cout<<"\n Aperte qualquer tecla para continuar...";
  getch();
  fclose(Agenda);
  }
