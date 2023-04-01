//ARQAGD.CPP (Autor: Miguel Teixeira)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream.h>
#include<dos.h>

 void Criar_Arq();
 void Cadastrar_Reg();
 void Exibir_Reg();
 FILE *Agenda;

 char Id[3], Nome[41], Tel[15], Email[25]; // variaveis globais

 void main()
 {
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
     cout<<"\nAguardar o Fim";
     delay(1000);
     break;
     default:
     cout<<"\nOp invalido!!!";
     }
     }

 // SubRotinas

 void Criar_Arq()
 {
  clrscr();
  cout<<"\nCriando Arquivo txt no C: ....";
  delay(1000);
  Agenda=fopen("C:\\TURBOC3\\Agenda.txt","w");
  cout<<"\n\nArquivo Agenda.txt criado no C:";
  cout<<"\n\nTecle algo para sair";
  getch();
  fclose(Agenda);
  }
 void Cadastrar_Reg ()
 {
 clrscr();
 cout<<"\nCadastrando Registro\n";
 Agenda = fopen("C:\\TURBOC3\\Agenda.txt","a");

 cout<<"Digite Id: ";
 gets(Id);
 fputs(Id,Agenda);
 fputs("   ",Agenda);
 cout<<"\nDigite Nome: ";
 gets(Nome);
 fputs(Nome,Agenda);
 fputs("   ",Agenda);
 cout<<"\nDigite Tel: ";
 gets(Tel);
 fputs(Tel,Agenda);
 fputs("   ",Agenda);
 cout<<"\nDigite Email: ";
  gets(Email);
  fputs(Email,Agenda);
  fputs("\n",Agenda);
  cout<<"\nTecle algo para sair";
  getch();
  fclose(Agenda);
	};
 void Exibir_Reg()
 {
 int L=4;
 clrscr();
 cout<<"\nExibindo Registro:\n\n ";
 Agenda=fopen("C:\\TURBOC3\\Agenda.txt", "r");
 while(fgets(Nome,75,Agenda)!=NULL)
 {
  gotoxy(5,L);
  cout<<Id<<"   "<<Nome<<"   "<<Email<<"\n";
  L=L+1;
  }
  cout<<"\n\nTecle algo para sair";
  getch();
  fclose(Agenda);
  }
