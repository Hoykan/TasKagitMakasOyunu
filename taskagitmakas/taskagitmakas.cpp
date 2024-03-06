#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <clocale>
using namespace std;

int main() {
    int oyuncuSkor = 0, bilgisayarSkor = 0, secim, x;
    srand(time(NULL));

    cout << "----------- TAS KAGIT MAKAS OYUNUNA HOSGELDINIZ -----------" << endl;
    cout << "-----------   Tas = 1 , Kagit = 2 , Makas = 3   ----------- " << endl;
    cout << "-----------   Seciminiz 1, 2, 3 olmalidir!   ----------- " << endl;
    while (true) {
        cout << "Kac tur oynamak istiyorsaniz lutfen giriniz: ";
        cin >> x;
        if (x > 0)
            break;
        else
            cout << "Hatali giris yaptiniz. Lutfen sifirdan buyuk bir sayi girin." << endl;
    }
    for (int i = 0; i < x; i++) {
        int bilgisayar = rand() % 3 + 1;
        cout << "-----------  -----------    " << endl;
        cout << "Seciminizi girin: ";
        cin >> secim;
        cout << "-----------  -----------  " << endl;

        if (secim == 1) {
            cout << "Seciminiz: Tas" << endl;
        }
        else if (secim == 2) {
            cout << "Seciminiz: Kagit" << endl;
        }
        else if (secim == 3) {
            cout << "Seciminiz: Makas" << endl;
        }
        if (bilgisayar == 1) {
            cout << "Bilgisayarin secimi: Tas " << endl;
        }
        if (bilgisayar == 2) {
            cout << "Bilgisayarin secimi: Kagit " << endl;
        }
        if (bilgisayar == 3) {
            cout << "Bilgisayarin secimi: Makas " << endl;
        }


        if (secim < 1 || secim > 3) {
            cout << "Hatali giris yaptiniz" << endl;
            continue;
        }

        if (secim == bilgisayar) {
            cout << "Berabere bitti" << endl;
        }
        else if ((secim == 1 && bilgisayar == 3) || (secim == 2 && bilgisayar == 1) || (secim == 3 && bilgisayar == 2)) {
            cout << "Oyuncu kazandi" << endl;
            oyuncuSkor++;
        }
        else {
            cout << "Bilgisayar kazandi" << endl;
            bilgisayarSkor++;
        }
    }
    system("cls");

    cout << "Oyuncu Skor: " << oyuncuSkor << endl;
    cout << "Bilgisayar Skor: " << bilgisayarSkor << endl;
    if (oyuncuSkor > bilgisayarSkor) {
        cout << "TEBRIKLER KAZANDINIZ!!";
    }
    else if (oyuncuSkor < bilgisayarSkor) {
        cout << "KAYBETTINIZ!!";
    }
    else if (oyuncuSkor == bilgisayarSkor) {
        cout << "BERABERE KALDINIZ!!";
    }
    return 1;
}
