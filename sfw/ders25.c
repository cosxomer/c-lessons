#include<stdio.h>
#include<stdlib.h>

int main()
{

 
float sonuc,number1,number2;
char islem;
while (1)
{


printf("hangi islemi yaptirmak istiyorsunuz(sembol girin):\n");
scanf(" %c",&islem);
if (islem!='+' && islem!='-' && islem!='*' && islem!='/')
{
    printf("!!!   Lutfen bir 4 islem sembolu girin   !!!\n\n\n");
    continue;
}


printf("Enter two number:");
scanf("%f%f",&number1,&number2);
if (number2==0)
{
    printf("Bir sayiyi 0'a bolmek tanimsizdir\n\n");
    continue;
}

switch (islem)
{
case '/' :
    sonuc=number1/number2;    
    break;
case '*' :
    sonuc=number1*number2;
    break;
case '+':
    sonuc=number1+number2;
        break;
case '-':
 sonuc=number1-number2;
 break;
}


printf("isleminizin sonucu %.2f\n",sonuc);
printf("%f %c %f =%f",number1,islem,number2,sonuc);
 
}
return 0;

}