#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
  int number,rem,sum=0;
  clrscr();
  printf("\n\t........Practical 3. Program to Find Sum of Five Digit Number.........\n");
  printf("\n\n\t Enter Any Five Digit Number....\n\t");
  scanf("  %d",&number);
  printf("\n\n\t Finding Sum of Digit Please Wait.");
  //delay(1000);
  printf(".");
  //delay(1000);
  printf("..");
  //delay(1000);
  printf("...");
  printf("....");
  while(number>0){
   rem=number%10;
   sum=sum+rem;
   number=number/10;
  }
  printf("\n\n\n\t Sum Of Digit is = %d",sum);
  printf("\n\n\n\n\n\t\t\t********........Submittted By........*********\n");
  printf(" \t\t\t\t\tMr. Vikas RAMESH Desale\n");
  printf("\t\t\t\t\tSE CSE\n");
  printf(" \t\t\t\t\tE. No.BE14S05F005\n");
  printf("\t\t\t\t\tSubject: Programming Language\n");
  getch();


}