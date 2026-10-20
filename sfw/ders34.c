#include <stdio.h>
#include <stdlib.h>

int main()

{
long long number,control,i;
int isasal;
while (1)
{
    /* code */

isasal=1;
printf("Enter a number :");
scanf("%lld",&number);

if (number<=1)
{
    printf("Bu sayi asal degildir\n\n");
    continue;
}


control=number/2;
i=2;
while (i<=control)
{

    if (number%i==0)
    {
        printf("%lld %lld'a bolunur.Bu sayi asal degildir\n",number,i);
        isasal=0;
        break;
    }
    i++;
   
   
}
if (isasal==1)
{
    printf("Bu sayi asaldir\n");
}





}




    return 0;
}