#include <stdio.h>
#include <math.h> // yuvarlama icin

int main() {
    float urun_tutari, odenen_para;
    
    // Girdileri alıyoruz
    printf("Urun tutarini giriniz (TL): ");
    scanf("%f", &urun_tutari);
    
    printf("Odenen parayi giriniz (TL): ");
    scanf("%f", &odenen_para);

    // Kayan nokta hassasiyetini aşarak doğru kuruş hesabını yapıyoruz
    long long para_ustu_kurus = round((odenen_para - urun_tutari) * 100.0);
    long long kalan = para_ustu_kurus;
    
    printf("\nToplam Para Ustu: %.2f TL (%lld kurus)\n\n", (float)para_ustu_kurus / 100.0, para_ustu_kurus);
    
    // 200 TL (20000 kurus)
    int adet_200tl = kalan / 20000;
    kalan = kalan % 20000;
    
    // 100 TL (10000 kurus)
    int adet_100tl = kalan / 10000;
    kalan = kalan % 10000;
    
    // 50 TL (5000 kurus)
    int adet_50tl = kalan / 5000;
    kalan = kalan % 5000;
    
    // 20 TL (2000 kurus)
    int adet_20tl = kalan / 2000;
    kalan = kalan % 2000;
    
    // 10 TL (1000 kurus)
    int adet_10tl = kalan / 1000;
    kalan = kalan % 1000;
    
    // 5 TL (500 kurus)
    int adet_5tl = kalan / 500;
    kalan = kalan % 500;
    
    // 1 TL (100 kurus)
    int adet_1tl = kalan / 100;
    kalan = kalan % 100;
    
    // 50 kurus
    int adet_50k = kalan / 50;
    kalan = kalan % 50;
    
    // 25 kurus
    int adet_25k = kalan / 25;
    kalan = kalan % 25;
    
    // 10 kurus
    int adet_10k = kalan / 10;
    kalan = kalan % 10;
    
    // 5 kurus
    int adet_5k = kalan / 5;
    kalan = kalan % 5;
    
    // 1 kurus
    int adet_1k = kalan / 1;
    kalan = kalan % 1;

    // Toplam küpür ve madeni para adedini hesaplama
    int toplam_kupur = adet_200tl + adet_100tl + adet_50tl + adet_20tl + 
                      adet_10tl + adet_5tl + adet_1tl + adet_50k + 
                      adet_25k + adet_10k + adet_5k + adet_1k;

    // Sonuçları ekrana yazdırma
    printf("--- KUPUR DAGILIMI ---\n");
    printf("200 TL: %d adet\n", adet_200tl);
    printf("100 TL: %d adet\n", adet_100tl);
    printf("50 TL: %d adet\n", adet_50tl);
    printf("20 TL: %d adet\n", adet_20tl);
    printf("10 TL: %d adet\n", adet_10tl);
    printf("5 TL: %d adet\n", adet_5tl);
    printf("1 TL: %d adet\n", adet_1tl);
    printf("50 kurus: %d adet\n", adet_50k);
    printf("25 kurus: %d adet\n", adet_25k);
    printf("10 kurus: %d adet\n", adet_10k);
    printf("5 kurus: %d adet\n", adet_5k);
    printf("1 kurus: %d adet\n", adet_1k);
    
    printf("\nVerilen Toplam Kupur ve Madeni Para Adedi: %d\n", toplam_kupur);

    return 0;
}
