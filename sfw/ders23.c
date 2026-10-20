#include <stdio.h>
#include <stdlib.h>

int main()

{

int day;

printf("Bir hafta gun sayisini girin 1-7 :");
scanf("%d",&day);

switch (day)
{
case 1:
    printf("Monday\n");
    
case 2:
    printf("tuesday\n");
    
case 3:
    printf("wednesday\n");
    
case 4:
    printf("thursday\n");
    break;
case 5:
    printf("friday\n");
    break;
case 6:
    printf("saturday\n");
    break;
case 7:
    printf("sunday\n");
    break;

default:printf("There is no such a day\n");
    break;
}












    return 0;
}