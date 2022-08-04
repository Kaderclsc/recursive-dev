#include <stdio.h>

/* 1’den 5’e kadar olan (5 dahil) sayýlarý toplayan programýn C programlama dilinde kodunu yazýnýz. Çözümde recursive fonksiyon kullanýn. */

int topla(int sayi, int t){
    if(sayi <= 5){ //sayi 5'i geçmemiþse iþlem bitmemiþtir. 
        t = t + sayi;
        topla (sayi+1,t); // sayiyi 1 arttýrýp tekrar fonksiyona yollarýz. 
    }
    else // sayi 5'i geçtiðinde iþlem bitmiþtir. Sonucu 'return' ile main'e yollarýz.
        return t; 
}

int main(){ 
    int toplam=0,sonuc;

    sonuc = topla(0,toplam); 
    printf("Sonuc : %d", sonuc);
    //printf("Sonuc : %d", topla(0,toplam)); direkt bu þekilde de yazýlabilir. 
}
