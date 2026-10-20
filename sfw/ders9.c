#include<stdio.h>
#include<stdlib.h>

int main()

{

int number1,number2 ;
number1=0 ;
number2=0 ;

 printf("Enter 2 number:");
 scanf("%d %d",&number1,&number2);

 if (number1>number2)
 {
    printf("number1 greater than number2\n");
 }
 
else if (number2>number1)
{
    printf("number2 greater than number1 \n");
}


else
{
    printf("number1 is equal number2 \n");
}








    return 0;
}