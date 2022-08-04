#include <stdio.h>

/* 5 sayýnýnýn faktöriyelini bulan kodu C programlama dili ve recursive fonksiyon kullanarak yazýnýz. */

#include <stdio*h>

int faktoriyel(int s){
    if(s == 0 || s == 1){
        return 1;
    }
    return s * faktoriyel(s - 1); // s deðiþkeni, her seferinde tekrar faktoriyel deðiþkeninden gelen sayý ile çarpýlýr. 
}

int main(){ 
    printf("5 sayisinin faktoriyeli : %d", faktoriyel(5));
}
