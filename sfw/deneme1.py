def yem_hesapla():
    # Kuşun günlük sağlıklı yem tüketim sınırı (gram cinsinden)
    GUNLUK_LIMIT = 15.0
    
    try:
        # Kullanıcıdan mevcut yem miktarını al
        mevcut_yem = float(input("Bugün kafese koyduğunuz yem miktarını girin (gram): "))
        
        # Negatif değer kontrolü
        if mevcut_yem < 0:
            print("Yem miktarı negatif bir değer olamaz!")
            
        # Günlük limitin aşılıp aşılmadığının kontrolü
        elif mevcut_yem >= GUNLUK_LIMIT:
            print(f"Günlük sağlıklı beslenme sınırı olan {GUNLUK_LIMIT} grama ulaşıldı veya bu sınır aşıldı. Daha fazla yem eklememelisiniz.")
            
        # Limit aşılmadıysa eklenebilecek yem miktarını hesapla
        else:
            eklenebilecek_yem = GUNLUK_LIMIT - mevcut_yem
            print(f"Sağlıklı beslenme sınırını ({GUNLUK_LIMIT}g) aşmamak için ekleyebileceğiniz maksimum yem miktarı: {eklenebilecek_yem:.2f} gramdır.")
            
    except ValueError:
        # Sayısal olmayan girişlerin hata yönetimi
        print("Lütfen geçerli bir sayısal değer girin.")
 
# Fonksiyonu çalıştır
yem_hesapla()