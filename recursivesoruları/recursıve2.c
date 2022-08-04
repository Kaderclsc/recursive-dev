#include <stdio.h>

/* 5 say�n�n�n fakt�riyelini bulan kodu C programlama dili ve recursive fonksiyon kullanarak yaz�n�z. */

#include <stdio*h>

int faktoriyel(int s){
    if(s == 0 || s == 1){
        return 1;
    }
    return s * faktoriyel(s - 1); // s de�i�keni, her seferinde tekrar faktoriyel de�i�keninden gelen say� ile �arp�l�r. 
}

int main(){ 
    printf("5 sayisinin faktoriyeli : %d", faktoriyel(5));
}
