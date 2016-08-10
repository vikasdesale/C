#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
  int number;
  clrscr();
  printf("\n\t........Practical 4. Program to Find the Number is Even or Odd.........\n");
  printf("\n\n\t Enter Any Number....\n\t");
  scanf("  %d",&number);
  printf("\n\n\t Finding Number is Even or Odd Please Wait.");
  //delay(1000);
  printf(".");
  //delay(1000);
  printf("..");
  //delay(1000);
  printf("...");
  printf("....");
  if(number%2==0)
  {
	printf("\n\n\t %d  is Even Number",number);
  }else{
	printf("\n\n\t %d  is Odd Number",number);
  }
  printf("\n\n\n\n\n\t\t\t********........Submittted By........*********\n");
  printf(" \t\t\t\t\tMr. Vikas RAMESH Desale\n");
  printf("\t\t\t\t\tSE CSE\n");
  printf(" \t\t\t\t\tE. No.BE14S05F005\n");
  printf("\t\t\t\t\tSubject: Programming Language\n");
  getch();


}