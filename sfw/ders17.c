#include<stdio.h>
#include<stdlib.h>

int main()


{

int konusma;
float sabit,sum,extra;
printf("Konusma dakikasi girin:");
scanf("%d",&konusma);
sabit=0.30 ;


if (konusma<=4)
{
   sum=sabit;
}

else 


{
sum=sabit+(konusma-4)*0.07;
}


printf("Odemeniz gereken ucret:%.3f\n",sum);








    return 0;
}