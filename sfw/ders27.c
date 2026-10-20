#include <stdio.h>
#include <stdlib.h>

int main()


{

char letter;
printf("Enter a letter:");
scanf("%c",&letter);


if (letter>='a' && letter<='z' || letter>='A' && letter<='Z')
{

switch (letter=='a' || letter=='e' || letter=='ı' || letter=='i' || letter=='o' || letter=='u')
{
case 1:
    printf("Bu bir sesli harf\n");
    break;

case 0:
    printf("Bu bir sessiz harf\n");
    break;
   
}


}

else{


    printf("This is not letter\n");
}









    return 0;
}