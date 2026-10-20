#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 int numberbox,pay,tamkg,gram,boxWeight,lastprice,yuvarlanan,A,B,C,D,E,yirmilik,beslik,birlik,heavyWeight,oncelik,takipno,nextfollow,bolgeNoInt;
 float priceOfBox,totalWeight,totalPrice,thelastprice,paraustu,discountCard,kdv,indirim;
 char bolgeno;
 heavyWeight=0;
 printf("Bolge numarasi girin (A-E): ");
 scanf(" %c",&bolgeno);
 printf("Enter a price of box: ");
 scanf("%f",&priceOfBox);
 printf("Enter ur pay: ");
 scanf("%d",&pay);
 printf("Enter a box weight: ");
 scanf("%d",&boxWeight);
 printf("How much box do u want:");
 scanf("%d",&numberbox);
 printf("Do u have discountCard 1/0?");
 scanf("%f",&discountCard);

 switch (bolgeno)
 {
    case 'A':
     bolgeNoInt=1;
    break;
    case 'B':
     bolgeNoInt=2;
     break;
     case 'C':
     bolgeNoInt=3;
     break;
     case 'D':
     bolgeNoInt=4;
     break;
     case 'E':
     bolgeNoInt=5;
     break;
 
 }

 totalWeight=numberbox*boxWeight;
 gram = (int)totalWeight % 1000;
 tamkg=totalWeight/1000;
 totalPrice=((float)totalWeight/1000)*priceOfBox;
 if(totalWeight<500)
 {
 totalPrice=0;
 }
 if(discountCard==1) {
 indirim=totalPrice/10;
 }
 if(discountCard==0)
 {
 indirim=0;
 }
 lastprice=totalPrice-indirim;
 kdv=lastprice/5;
 thelastprice=lastprice+kdv;
 yuvarlanan=roundf(thelastprice);
 paraustu=pay-yuvarlanan;
yirmilik=paraustu/20;
beslik=(paraustu-(yirmilik*20))/5;
birlik=paraustu-(yirmilik*20+beslik*5)/1;

if (totalWeight>5000)
{
    heavyWeight=1;
}

if (heavyWeight==1 || discountCard==1)
{
    oncelik=1;
}
else{
oncelik=0;
}

takipno=5000;
nextfollow=5001;



printf("Bolge (A-E):%c\n",bolgeno);
printf("Koli adedi:%d\n",numberbox);
printf("Bir kolinin agirligi (gram):%d\n",boxWeight);
printf("Kilogram ucreti: %.2f\n",priceOfBox);
printf("Kampanya karti (1/0):%.2f\n",discountCard);
printf("Odenen nakit:%d\n\n\n",pay);
printf("===== KARGO FISI =====\n");
printf("Takip No\t:%d\n",takipno);
printf("Bolge no\t:%d\n",bolgeNoInt);
printf("Toplam agirlik\t:%dkg %dg\n",tamkg,gram);
printf("Temel ucret\t:%.2f\n",totalPrice);
printf("Indirim\t\t:%.2f\n",indirim);
printf("KDV\t\t:%.2f\n",kdv);
printf("Toplam\t\t:%.2f\n",thelastprice);
printf("Yuvarlanan\t:%d\n",yuvarlanan);
printf("Odenen nakit\t:%d\n",pay);
printf("Para ustu\t:%.2f, (20'lik:%d  5'lik:%d  1'lik:%d)\n",paraustu,yirmilik,beslik,birlik);
if (heavyWeight==1)
{
    printf("Agir koli\t:1\n");
}
if (heavyWeight==0)
{
   printf("Agir koli\t:0\n");
}

if (oncelik==1)
{
   printf("Oncelikli\t:1\n");
}

if (oncelik==0)
{
    printf("Oncelikli\t:0\n");
}

printf("Sonraki takip : 5001\n");

 return 0;
}