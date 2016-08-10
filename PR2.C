#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
  float principle,rateofinterest,interest;
  int years;
  clrscr();
  printf("\n\t........Practical 2. Program to Find Simple Interest.........\n");
  printf("\n\n\t Enter Principle Amount....\n");
  scanf("%f",&principle);
  printf("\t Enter Rate of Interest.....\n");
  scanf("%f",&rateofinterest);
  printf("\t Enter Number of Year......\n");
  scanf("%d",&years);
  interest=(principle*rateofinterest*years)/100;
  printf("\n\n\t Interest  is Counting  Please Wailt.");
  //delay(1000);
  printf(".");
  //delay(1000);
  printf("..");
  //delay(1000);
  printf("...");
  printf("....");
  printf("..\n\n\tSimple Interest is = RS.%f ",interest);
  printf("\n\n\n\t\t\t\t........Submittted By.......\n");
  printf(" \t\t\t\t\tMr. Vikas Desale\n");
  printf("\t\t\t\t\tSE CSE\n");
  printf(" \t\t\t\t\tE. No.BE14S05F005\n");
  printf("\t\t\t\t\tSubject: Programming Language\n");
  getch();


}