#include <stdio.h>
#include <stdlib.h>

// Struct öðreciler için c kodu
// Iþýkay ÇETÝN
	struct ogrenci {
    char ad[100];
    char soyad[100];
    int  okulNumarasi;
    char adres[100];
};
int main() {
    struct ogrenci ogrenciler[5] = {
        {"Helin", "DEDE", 571, "Istanbul"},
        {"Ali", "AYDIN", 1071, "TRABZON"},
        {"Mehmet", "KURT",1000 , "SAKARYA"},
        {"Yusuf", "POLAT",1453 , "BOLU"},
        {"Cansu", "ALEMDAR",2023 , "HATAY"}
    };
int i;
  for(i=0; i<5; i++) {
    printf("%d.Ogrenci:\n", i+1);
    printf("Adi: %s\n", ogrenciler[i].ad);
    printf("Soyadi: %s\n", ogrenciler[i].soyad);
    printf("Okul Numarasi: %d\n", ogrenciler[i].okulNumarasi);
    printf("Adres: %s\n\n", ogrenciler[i].adres);
  }
    
    return 0;
}
	

