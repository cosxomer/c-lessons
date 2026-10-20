#include <stdio.h>
#include <stdlib.h>


int main()

{

/*

HızlıKargo, gönderen adını (tek kelime), takip numarasını (tam sayı), paket ağırlığını (kg, gerçek sayı) ve
mesafeyi (km, gerçek sayı) okuyup fiş yazdıran bir C programı istiyor.
● Sabitler (#define): BASE_FEE = 25.00, PRICE_PER_KG = 6.50, PRICE_PER_KM = 0.40, VAT_RATE
= 0.20.
● weightCost, distanceCost, subtotal (= BASE_FEE + weightCost + distanceCost), vat ve total değerlerini
hesaplayın.
● branch adlı bir char değişkeni tanımlayıp 'S' karakter sabitiyle başlatın.
● En başta bir belgelendirme yorumu yazın; anlamlı camelCase adlar kullanın; yalnızca int, float, char ile +
ve * operatörlerini kullanın; if veya döngü yok.
● Fişi \n, \t ve \" ile yazdırın (HizliKargo çift tırnak içinde olsun), %c, %s, %d ve %.2f kullanın. Açılış
ücretini ayrı bir satırda gösterin.
● printf metinlerinde ç, ğ, ı, ö, ş, ü kullanmayın (C karakter kümesi)
*/


int takipno;
char gonderenadi[50];
float paketagirlik,mesafe,price_per_kg,price_per_km,vat_rate,sum;
const int base_fee=25.00;

printf("Gonderen adini giriniz:");
scanf("%s",gonderenadi);
printf("Takip numarasini giriniz:");
scanf("%d",&takipno);
printf("Paket agirligini giriniz(kg cinsinden):");
scanf("%f",&paketagirlik);
printf("Mesafeyi giriniz(km cinsinden):");
scanf("%f",&mesafe);


price_per_kg=6.50;
price_per_km=0.40;


sum=base_fee+price_per_kg*paketagirlik+price_per_km*mesafe;
vat_rate=sum*0.20;

sum=sum=base_fee+price_per_kg*paketagirlik+price_per_km*mesafe+vat_rate;


printf("\t\t \"Hizli Kargo\"\n\n\n ");
printf("Gonderen adi:%s\t\t",gonderenadi);

printf("//////");
printf("Takip numarasi:%d\t\t",takipno);
printf("//////");
printf("Odenecek tutar:%f\t\t",sum);



    return 0;
}