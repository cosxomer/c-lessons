
#include <stdio.h>
#include <locale.h>
 
void yem_hesapla() {
    // Kuşun günlük sağlıklı yem tüketim sınırı
    const double GUNLUK_LIMIT = 15.0;
    double mevcut_yem;
 
    printf("Bugün kafese koyduğunuz yem miktarını girin (gram): ");
 
    // Sayısal değer girilip girilmediğinin kontrolü
    if (scanf("%lf", &mevcut_yem) != 1) {
        printf("Lütfen geçerli bir sayısal değer girin.\n");
        return;
    }
 
    // Negatif değer kontrolü
    if (mevcut_yem < 0) {
        printf("Yem miktarı negatif bir değer olamaz!\n");
    }
    // Günlük limitin aşılıp aşılmadığının kontrolü
    else if (mevcut_yem >= GUNLUK_LIMIT) {
        printf("Günlük sağlıklı beslenme sınırı olan %.1f grama ulaşıldı veya bu sınır aşıldı. Daha fazla yem eklememelisiniz.\n", GUNLUK_LIMIT);
    }
    // Limit aşılmadıysa eklenebilecek yem miktarını hesapla
    else {
        double eklenebilecek_yem = GUNLUK_LIMIT - mevcut_yem;
        printf("Sağlıklı beslenme sınırını (%.1fg) aşmamak için ekleyebileceğiniz maksimum yem miktarı: %.2f gramdır.\n", GUNLUK_LIMIT, eklenebilecek_yem);
    }
}
 
int main() {
    // Türkçe karakterlerin terminalde düzgün görüntülenmesi için lokalizasyon ayarı
    setlocale(LC_ALL, "Turkish");
    
    yem_hesapla();
    return 0;
}