#include <stdio.h>
#include<stdlib.h>


int main()

{

int bookprice,orderquantity;
float discountprice,nodiscountprice,discountrate,sum;
while (1)
{
    /* code */


bookprice=20;
orderquantity=0;

printf("Kac adet kitap siparis etmek istiyorsunuz?");
scanf("%d",&orderquantity);

if (orderquantity>=60)
{
    discountrate=0.30;
}

else {
 if (orderquantity>=30  && orderquantity <60)
 {
    discountrate=0.20;
 }
 else if (orderquantity>=10  && orderquantity <30)
 {
    discountrate=0.12;
 }
 else 
 {
 discountrate=0.01;
}
}
nodiscountprice=bookprice*orderquantity;
discountprice=nodiscountprice*discountrate;
sum=nodiscountprice-discountprice;

printf("indirimsiz fiyatin:%f\n",nodiscountprice);
printf("indirim miktari:%f\n",discountprice);
printf("indirimli fiyatin:%.2f\n",sum);
printf("odenecek toplam tutar%.2f:\n",sum);

}








    return 0;
}