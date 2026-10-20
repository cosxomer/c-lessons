#include <stdio.h>
#include <stdlib.h>

int main()
{

 while (1)
 
        /* code */
 
 

        {
        int mynumber,bolum,kalan,sum;
        sum=0;
        printf("Enter 4-digit number:");
        scanf("%d",&mynumber);
        //4.basamak
        bolum=mynumber/1000;
        sum+=bolum;
        kalan=mynumber%1000;
        //3.basamak
        bolum=kalan/100;
        sum+=bolum;
        kalan=kalan%100;
        //2.basamak
        bolum=kalan/10;
        sum+=bolum;
        kalan=kalan%10;
        //1.basamak
        bolum=kalan;
        sum+=bolum;
        kalan=kalan%1;
        printf("Sum of the 4-digit numbers:%d\n",sum);
        }



        return 0;
}