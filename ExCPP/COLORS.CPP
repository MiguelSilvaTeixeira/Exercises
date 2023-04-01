//COLORS.CPP (Autor: Miguel Teixeira)
//Esse programa mostra a cor dos valores numéricos da função "textcolor" em C/C++.
#include<conio.h>
#include<iostream.h>
#include<dos.h>

void main () {
//int Time=0;
//textbackground(0);
clrscr();
//do {
//delay(500);
//textbackground(Time);
 textcolor(0); gotoxy(28, 8);cprintf(" N£mero  0");//textbackground(15);
 textcolor(1); gotoxy(28, 9);cprintf(" N£mero  1");//textbackground(14);
 textcolor(2); gotoxy(28,10);cprintf(" N£mero  2");//textbackground(13);
 textcolor(3); gotoxy(28,11);cprintf(" N£mero  3");//textbackground(12);
 textcolor(4); gotoxy(28,12);cprintf(" N£mero  4");//textbackground(11);
 textcolor(5); gotoxy(28,13);cprintf(" N£mero  5");//textbackground(10);
 textcolor(6); gotoxy(28,14);cprintf(" N£mero  6");//textbackground(9);
 textcolor(7); gotoxy(28,15);cprintf(" N£mero  7");//textbackground(8);
 textcolor(8); gotoxy(43, 8);cprintf(" N£mero  8");//textbackground(7);
 textcolor(9); gotoxy(43, 9);cprintf(" N£mero  9");//textbackground(6);
 textcolor(10);gotoxy(43,10);cprintf(" N£mero 10");//textbackground(5);
 textcolor(11);gotoxy(43,11);cprintf(" N£mero 11");//textbackground(4);
 textcolor(12);gotoxy(43,12);cprintf(" N£mero 12");//textbackground(3);
 textcolor(13);gotoxy(43,13);cprintf(" N£mero 13");//textbackground(2);
 textcolor(14);gotoxy(43,14);cprintf(" N£mero 14");//textbackground(1);
 textcolor(15);gotoxy(43,15);cprintf(" N£mero 15");//textbackground(0);
 //cout<<"\n "<<Time;
 // Time=Time+1;
 //if (Time==16)
 //	Time=0;
//} while(Time<16);
getch();
}
