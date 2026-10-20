#include <stdio.h>
#include <stdlib.h>

int main()


{


int number,kalan;

printf("Enter a number:");
scanf("%d",&number);
kalan=number%2;

switch (kalan)
{
case 0:
    printf("Bu sayi cifttir\n");
    break;

default:
printf("Bu sayi tektir\n");
    break;
}


















    return 0;
}