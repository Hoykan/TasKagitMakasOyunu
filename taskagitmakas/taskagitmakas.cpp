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

    cout << "----------- TA� KA�IT MAKAS OYUNUNA HO�GELD�N�Z -----------" << endl;
    cout << "-----------   Ta� = 1 , Ka��t = 2 , Makas = 3   ----------- " << endl;
    cout << "-----------   Se�iminiz 1, 2, 3 olmal�d�r!   ----------- " << endl;
    while (true) {
        cout << "Ka� tur oynamak istiyorsan�z l�tfen giriniz: ";
        cin >> x;
        if (x > 0)
            break;
        else
            cout << "Hatal� giri� yapt�n�z. L�tfen s�f�rdan b�y�k bir say� girin." << endl;
    }
    for (int i = 0; i <x; i++) {
        int bilgisayar = rand() % 3 + 1;
        cout << "-----------  -----------    " << endl;
        cout << "Se�iminizi girin: ";
        cin >> secim;
        cout << "-----------  -----------  " << endl;

        if (secim == 1) {
            cout << "Se�iminiz: Ta�" << endl;
        }
        else if (secim == 2) {
            cout << "Se�iminiz: Ka��t" << endl;
        }
        else if (secim == 3) {
            cout << "Se�iminiz: Makas" << endl;
        }
        if (bilgisayar == 1) {
            cout << "Bilgisayar�n se�imi: Ta� " << endl;
        }
        if (bilgisayar == 2) {
            cout << "Bilgisayar�n se�imi: Ka��t " << endl;
        }
        if (bilgisayar == 3) {
            cout << "Bilgisayar�n se�imi: Makas " << endl;
        }


        if (secim < 1 || secim > 3) {
            cout << "Hatal� giri� yapt�n�z" << endl;
            continue;
        }

        if (secim == bilgisayar) {
            cout << "Berabere bitti" << endl;
        }
        else if ((secim == 1 && bilgisayar == 3) || (secim == 2 && bilgisayar == 1) || (secim == 3 && bilgisayar == 2)) {
            cout << "Oyuncu kazand�" << endl;
            oyuncuSkor++;
        }
        else {
            cout << "Bilgisayar kazand�" << endl;
            bilgisayarSkor++;
        }
    }
    system("cls");

    cout << "Oyuncu Skor: " << oyuncuSkor << endl;
    cout << "Bilgisayar Skor: " << bilgisayarSkor << endl;
    if (oyuncuSkor > bilgisayarSkor) {
        cout << "TEBR�KLER KAZANDINIZ!!";
    }
    else if (oyuncuSkor < bilgisayarSkor) {
        cout << "KAYBETT�N�Z!!";
    }
    else if (oyuncuSkor == bilgisayarSkor) {
        cout << "BERABERE KALDINIZ!!";
    }
    return 1;
}
