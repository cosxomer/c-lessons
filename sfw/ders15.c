#include<stdio.h>
#include<stdlib.h>

int main ()

{

int a,b,c;
char longestside ;
while (1)
{
    /* code */



printf("Enter 3 side:");
scanf("%d%d%d",&a,&b,&c);
if (a+b<=c || a+c<=b || b+c<=a)
{
    printf("Bu kenar uzunluklari bir ucgen olusturmaz!\n");
    return 0;
}
   

if (a>b  && a>c)
{
    longestside=a ;

    if (a*a==b*b+c*c)
    {
      printf("Bu bir dik ucgendir");
    }
    else if (a*a>b*b+c*c)
    {
        printf("Bu bir genis acili ucgendir");
    }
    else if (a*a<b*b+c*c)
    {
        printf("Bu bir dar acili ucgendir");
    }
    else
    {
      printf("Bu bir ucgen degildir");
    }
}

else if (b>a  && b>c)
{
    longestside=b;
if (b*b==a*a+c*c)
{
    printf("Bu bir dik ucgendir");
}
else if (b*b>a*a+c*c)
{
   printf("Bu bir genis acili ucgendir");
}
else if (b*b<a*a+c*c)
{
    printf("Bu bir dar acili ucgendir");
}
else
{
    printf("Bu bir ucgen degildir");
}
}


else
{
    longestside=c;
if (c*c==a*a+b*b)
{
    printf("Bu bir dik acili ucgendir");
}

else if (c*c>a*a+b*b)
{
    printf("Bu bir genis acili ucgendir");
}

else if (c*c<a*a+b*b)
{
    printf("Bu bir dar acili ucgendir");
}
else
 {

     printf("Bu bir ucgen degildir");
}
}


}







    return 0;
}