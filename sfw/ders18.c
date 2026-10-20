#include <stdio.h>
#include <stdlib.h>


int main()

{

/*
Bir kütüphane, geç iade edilen kitaplar için gün başına 2 ceza uygular. Gecikme 7 günden fazlaysa cezaya 10 ek
ücret eklenir. Toplam ceza hiçbir zaman 50'yi geçemez. Görevli gecikme gün sayısını girer; cezayı ekrana
yazdırın. Kurallar:
● Ceza = gün sayısı × 2.
● Gün sayısı 7'den büyükse ceza = ceza + 10.
● Ceza 50'den büyükse ceza = 50 yapılır

*/

int gunsayisi,ceza ;

while (1)
{
    /* code */



printf("Gecikme gun sayisini girin:");
scanf("%d",&gunsayisi);
ceza=gunsayisi*2;

if (gunsayisi>7)
{
    ceza=ceza+10;
}
if (ceza>50)
{
    ceza=50;
}
printf("Cezan:%d\n",ceza);
}
    return 0;
}