#include <stdio.h>
#include <stdlib.h>
#define price 100

int main()

{

    char name[30];
    double kumas_meter;
    int sum;



    printf("Enter ur name:");
    scanf("%s",name);
    printf("Enter kumas meter:");
    scanf("%lf",&kumas_meter);
    sum=price*kumas_meter;
    printf("%s ",name);
    printf("%.2lf metre kumas aldi ",kumas_meter);
    printf(" fiyati %d TL",sum);




    return 0 ;
}










