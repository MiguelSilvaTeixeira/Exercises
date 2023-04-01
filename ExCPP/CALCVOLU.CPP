//CalcVolu.cpp (Autor: Miguel Teixeira)
//Obs: Neste código foi utilizado uma biblioteca criada por MIM (Miguel Teixeira). Essa BIBLIOTECA (volume.h) não será divulgada.
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<ctype.h>
#include<stdio.h>
#include<volume.h>
#include<stdlib.h>

SubEsfera();
SubCubo();
SubCilindro();
SubCone();

float V,h,r;
int Color=15, Background=0;
//int Color=14, Background=0;

void main ()
{
  do {
	 int Op;
	 textbackground(Background);
	 textcolor(Color);
	 clrscr();
	 gotoxy( 1, 1);cout<<" "<<Color<<" | "<<Background;
	 gotoxy(29, 2);cout<<"       Menu";
	 gotoxy(28, 3);cout<<" ---------------------";
	 gotoxy(29, 4);cout<<" 1_Volume da Esfera";
	 gotoxy(29, 5);cout<<" 2_Volume do Cubo";
	 gotoxy(29, 6);cout<<" 3_Volume do Cilindro";
	 gotoxy(29, 7);cout<<" 4_Volume do Cone";
	 gotoxy(29, 8);cout<<" 5_Sair";
	 gotoxy(28, 9);cout<<" ---------------------";
	 gotoxy(26,10);cout<<" Digite o número da opção: ";
	 cin>>Op;
	  switch (Op)
	   {
	    case 1:
	     SubEsfera();
	    break;
	    case 2:
	     SubCubo();
	    break;
	    case 3:
	     SubCilindro();
	    break;
	    case 4:
	     SubCone();
	    break;
	    case 5:
	     gotoxy(30,14);cout<<" Aguardar o Fim...";
	     delay(1000);
	     return;
	    //break;
	    default:
	     gotoxy(30,14);textcolor(4);cprintf(" Opção invalida!!!");
	}
   /*if (Color>0)
	Color=Color-1;
   if (Color==9)
	Color=Color-2;
   if (Color==1)
	Color=Color+14;*/


   if (Color>0)
	Color=Color-1;
   if (Color==0)
	Color=Color+15;

   if (Background>=0)
	Background=Background+1;
   if (Background==15)
	Background=Background-15;


   gotoxy(27,20);cout<<" Quer voltar ao MENU <s/n>: ";
 } while(tolower(getch()=='s'));
}
	SubEsfera() {
	 gotoxy(32,13);cout<<" Digite o raio:";
	 cin>>r;
	 Esfera();
	 gotoxy(23,15);cout<<" O volume da Esfera é aproximadamente: ";
	 gotoxy(37,16);cout<<V;
	 return(0);
	}

	SubCubo() {
	 gotoxy(30,13);cout<<" Digite a altura: ";
	 cin>>h;
	 Cubo();
	 gotoxy(29,15);cout<<" O volume do cubo é: "<<V;
	 return(0);
	}

	SubCilindro() {
	 gotoxy(32,13);cout<<" Digite o raio: ";
	 cin>>r;
	 gotoxy(31,14);cout<<" Digite a altura: ";
	 cin>>h;
	 Cilindro();
	 gotoxy(21,15);cout<<" O volume do cilindro é aproximadamente: ";
	 gotoxy(36,16);cout<<V;
	 return(0);
	}

	SubCone() {
	 gotoxy(32,13);cout<<" Digite o raio: ";
	 cin>>r;
	 gotoxy(32,14);cout<<" Digite a altura: ";
	 cin>>h;
	 Cone();
	 gotoxy(23,15);cout<<" O volume do Cone é aproximadamente:";
	 gotoxy(36,16);cout<<V;
	 return(0);
	}
