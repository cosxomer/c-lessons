#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()

{

int squareroot,number;

while (1)
{
    /* code */


printf("Enter a positive number:");
scanf("%d",&number);

if (number<0)
{
    printf("Bro do not do this again ok?");
    return 0;

}
else {
    squareroot=sqrt(number);
if(squareroot*squareroot==number)
{   squareroot=sqrt(number);
    printf("%d sayisi tam kare bir sayidir \n",number);
    printf("%d sayisinin karekoku ise",number);
    printf(" budur:%d\n",squareroot);
 }
else{

    printf("%d sayisi tam kare bir sayi degildir\n",number);
}

}


}

    return 0;

}