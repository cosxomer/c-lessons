#include <stdio.h>
#include <stdlib.h>

int main()

{
float n,t,v,p;
const float R=22.4/273.0;
printf("mol sayisini girin:");
scanf("%f",&n);
printf("Sicaklik girin:");
scanf("%f",&t);
printf("Hacim girin:");
scanf("%f",&v);
p=(n*R*t)/v;
printf("Kabin basinci:%f",p);






    return 0 ;

}