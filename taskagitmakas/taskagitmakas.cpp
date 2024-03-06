#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <clocale>
using namespace std;

int main() {
  
    
    setlocale(LC_ALL, "Turkish");
    int oyuncuSkor = 0, bilgisayarSkor = 0, secim, x;
    srand(time(NULL));

    cout << "----------- TAÞ KAÐIT MAKAS OYUNUNA HOÞGELDÝNÝZ -----------" << endl;
    cout << "-----------   Taþ = 1 , Kaðýt = 2 , Makas = 3   ----------- " << endl;
    cout << "-----------   Seçiminiz 1, 2, 3 olmalýdýr!   ----------- " << endl;
    while (true) {
        cout << "Kaç tur oynamak istiyorsanýz lütfen giriniz: ";
        cin >> x;
        if (x > 0)
            break;
        else
            cout << "Hatalý giriþ yaptýnýz. Lütfen sýfýrdan büyük bir sayý girin." << endl;
    }
    for (int i = 0; i <x; i++) {
        int bilgisayar = rand() % 3 + 1;
        cout << "-----------  -----------    " << endl;
        cout << "Seçiminizi girin: ";
        cin >> secim;
        cout << "-----------  -----------  " << endl;

        if (secim == 1) {
            cout << "Seçiminiz: Taþ" << endl;
        }
        else if (secim == 2) {
            cout << "Seçiminiz: Kaðýt" << endl;
        }
        else if (secim == 3) {
            cout << "Seçiminiz: Makas" << endl;
        }
        if (bilgisayar == 1) {
            cout << "Bilgisayarýn seçimi: Taþ " << endl;
        }
        if (bilgisayar == 2) {
            cout << "Bilgisayarýn seçimi: Kaðýt " << endl;
        }
        if (bilgisayar == 3) {
            cout << "Bilgisayarýn seçimi: Makas " << endl;
        }


        if (secim < 1 || secim > 3) {
            cout << "Hatalý giriþ yaptýnýz" << endl;
            continue;
        }

        if (secim == bilgisayar) {
            cout << "Berabere bitti" << endl;
        }
        else if ((secim == 1 && bilgisayar == 3) || (secim == 2 && bilgisayar == 1) || (secim == 3 && bilgisayar == 2)) {
            cout << "Oyuncu kazandý" << endl;
            oyuncuSkor++;
        }
        else {
            cout << "Bilgisayar kazandý" << endl;
            bilgisayarSkor++;
        }
    }
    system("cls");

    cout << "Oyuncu Skor: " << oyuncuSkor << endl;
    cout << "Bilgisayar Skor: " << bilgisayarSkor << endl;
    if (oyuncuSkor > bilgisayarSkor) {
        cout << "TEBRÝKLER KAZANDINIZ!!";
    }
    else if (oyuncuSkor < bilgisayarSkor) {
        cout << "KAYBETTÝNÝZ!!";
    }
    else if (oyuncuSkor == bilgisayarSkor) {
        cout << "BERABERE KALDINIZ!!";
    }
    return 1;
}
