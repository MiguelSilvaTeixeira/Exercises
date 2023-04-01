//DESAFIO.CPP (Autor: Miguel Teixeira)
//Esse programa foi desenvolvido para cumprir um desafio que o meu professor Kao fez para mim.
//Colocar um carro dentro de uma moldura tendo cores deferentes.
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void main(){
clrscr();
//==========================================================================
textcolor(RED);
cprintf("\n Desafio");
cout<<"\n";
cprintf("\n Coloque um carro dentro de uma moldura, pinte a moldura de uma cor e o carro de outra cor");
cout<<"\n";
//===========================================================================
//===========================================================================
textcolor(1);
gotoxy(2,6);cprintf("\n\xC9\xCD\xCD\xCD\xCd\xCD\xCD\xCD\xCD\xCD\xCD\xBB");
gotoxy(2,7);cprintf("\n\xBA");
textcolor(2);
cprintf(" \xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC");
textcolor(1);
cprintf(" \xBA");
gotoxy(2,8);cprintf("\n\xBA");
textcolor(2);
cprintf(" \xDFO\xDF\xDF\xDF\xDFO\xDF");
textcolor(1);
cprintf(" \xBA");
gotoxy(2,9);cprintf("\n\xC8\xCD\xCD\xCD\xCd\xCD\xCD\xCD\xCD\xCD\xCD\xBC");
//===========================================================================
//===========================================================================
cout<<"\n\xC9\xCD\xCD\xCD\xCd\xCD\xCD\xCD\xCD\xCD\xCD\xBB";
cout<<"\n\xBA";
cout<<" \xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC";
cout<<" \xBA";
cout<<"\n\xBA";
cout<<" \xDFO\xDF\xDF\xDF\xDFO\xDF";
cout<<" \xBA";
cout<<"\n\xC8\xCD\xCD\xCD\xCd\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
//==========================================================================
cout<<"\n\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCd\xCD\xCD\xCD\xCD\xCD\xCD\xBB";
cout<<"\n\xBA \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDC\xDC \xBA";
cout<<"\n\xBA \xDF\xDFOO\xDF\xDF\xDF\xDF\xDFO\xDF \xBA";
cout<<"\n\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCd\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
getch();
}
