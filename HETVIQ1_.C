#include<stdio.h>
#include<conio.h>

void main(){
int First_number,Second_number,Third_number;
clrscr();
printf("Enter the first number: ");
scanf("%d",&First_number);
printf("Enter the second number: ");
scanf("%d",&Second_number);
printf("Enter the third number: ");
scanf("%d",&Third_number);
if(First_number<Second_number){
  if(First_number<Third_number){
  printf("first number is min...");
  }else{
  printf("third number is min...");
  }
}else{
  if(Second_number<Third_number){
  printf("second number is min...");
  }else{
  printf("third number is min...");
  }
}
getch();
}