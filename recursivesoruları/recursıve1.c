#include <stdio.h>

/* 1�den 5�e kadar olan (5 dahil) say�lar� toplayan program�n C programlama dilinde kodunu yaz�n�z. ��z�mde recursive fonksiyon kullan�n. */

int topla(int sayi, int t){
    if(sayi <= 5){ //sayi 5'i ge�memi�se i�lem bitmemi�tir. 
        t = t + sayi;
        topla (sayi+1,t); // sayiyi 1 artt�r�p tekrar fonksiyona yollar�z. 
    }
    else // sayi 5'i ge�ti�inde i�lem bitmi�tir. Sonucu 'return' ile main'e yollar�z.
        return t; 
}

int main(){ 
    int toplam=0,sonuc;

    sonuc = topla(0,toplam); 
    printf("Sonuc : %d", sonuc);
    //printf("Sonuc : %d", topla(0,toplam)); direkt bu �ekilde de yaz�labilir. 
}
