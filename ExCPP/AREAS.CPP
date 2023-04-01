//(Autor: Miguel Teixeira)
//Obs: Neste código foi utilizado uma biblioteca criada por MIM (Miguel Teixeira). Essa BIBLIOTECA (Areas.h) não será divulgada. 
#include<iostream.h>
#include<conio.h>
#include<Areas.h>
#include<ctype.h>
#include<string.h>


//Beep()
#include<dos.h>
void Beep() {
sound(300); delay(500); nosound(); sound(500); nosound();
}

//App para calcular area
void main() {
do{
clrscr();
int op;
float x, y, r;
cout<<"\n Opçoes de  áreas:";
cout<<"\n 1-Círculo";
cout<<"\n 2-Quadrado";
cout<<"\n 3-Retângulo";
cout<<"\n 4-Triângulo";
cout<<"\n 5-Sair";
cout<<"\n\n Digite o número da opção: ";
cin>>op;

switch(op) {
	case 1:
	  cout<<"\n Digite o raio:";
	  cin>>r;
	  cout<<"\n A  rea do círculo é: "<<ACirculo;
	 break;

	case 2:
	  cout<<"\n Digite o lado:";
	  cin>>x;
	  cout<<"\n A  rea do quadrado é: "<<AQuadrado;
	 break;

	case 3:
	  cout<<"\n Digite a base:";
	  cin>>x;
	  cout<<"\n Digite a altura:";
	  cin>>y;
	  cout<<"\n A  rea do retangulo é: "<<ARetangulo;
	 break;

	case 4:
	  cout<<"\n Digite a base:";
	  cin>>x;
	  cout<<"\n Digite a altura:";
	  cin>>y;
	  cout<<"\n A área do triângulo é: "<<ATriangulo;
	 break;

	case 5:
	 cout<<"\n Aguarde o fim....";
	 delay(1000);
	 return;
	break;
		
	default:
	  cout<<"\n Opção Invalida";
	  }
	  Beep();
cout<<"\n\n Quer rodar o APP de novo <s/n>: ";
} while(tolower(getch()=='s'));
}
