#include <iostream>
#include <cstdlib>
using namespace std;

// fungsi fpb
int fpb(int a, int b) {
    while (b != 0) {
        int sisa = a % b;
        a = b;
        b = sisa;
    }
    return a;
}

// fungsi kpk
int kpk(int a, int b) {
    return (a * b) / fpb(a, b);
}

// fungsi faktorial
long long factorial(int n) {
    if (n < 0) return 0;
    long long hasil = 1;
    for (int i = 2; i <= n; i++) hasil *= i;
    return hasil;
}

// fungsi kombinasi
long long kombinasi(int n, int r) {
    if (n < 0 || r < 0 || r > n) {
        cout << "Input tidak valid! n dan r harus >= 0 dan r tidak boleh lebih besar dari n.\n";
        return 0;
    }
    return factorial(n) / (factorial(n - r) * factorial(r));
}

// fungsi permutasi
long long permutasi(int n, int r) {
    if (n < 0 || r < 0 || r > n) {
        cout << "Input tidak valid! n dan r harus >= 0 dan r tidak boleh lebih besar dari n.\n";
        return 0;
    }
    return factorial(n) / factorial(n - r);
}

// fungsi bilangan prima
bool isPrima(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    int inputan = 0;
    int n, r;
    const int MAX_FAKTORIAL = 20;
    const int MAX_ANGKA = 1000000;
    char ulang;

    while (inputan != 5) {
            system("cls");
        cout << "\n============================================\n";
        cout << "        KALKULATOR MATEMATIKA DISKRIT       \n";
        cout << "============================================\n";
        cout << "1. Kombinasi\n";
        cout << "2. Permutasi\n";
        cout << "3. KPK dan FPB\n";
        cout << "4. Cek Bilangan Prima\n";
        cout << "5. Keluar\n";
        cout << "============================================\n";
        cout << "Silahkan pilih menu: ";
        cin >> inputan;

        switch (inputan) {
        case 1:
            do {
                cout << "\n-- MENU KOMBINASI --\n";
                cout << "Masukkan n: ";
                cin >> n;
                cout << "Masukkan r: ";
                cin >> r;

                if (n > MAX_FAKTORIAL || r > MAX_FAKTORIAL)
                    cout << "Nilai terlalu besar! Maksimal " << MAX_FAKTORIAL << " untuk operasi faktorial.\n";
                else if (n < 0 || r < 0)
                    cout << "Nilai tidak boleh negatif!\n";
                else
                    cout << "C(" << n << ", " << r << ") = " << kombinasi(n, r) << endl;

                cout << "\nApakah ingin menghitung menggunakan menu ini lagi? (i = iya, t = tidak): ";
                cin >> ulang;
            } while (ulang == 'i');
            break;

        case 2:
            do {
                cout << "\n-- MENU PERMUTASI --\n";
                cout << "Masukkan nilai n: ";
                cin >> n;
                cout << "Masukkan nilai r: ";
                cin >> r;

                if (n > MAX_FAKTORIAL || r > MAX_FAKTORIAL)
                    cout << "Nilai terlalu besar! Maksimal " << MAX_FAKTORIAL << " untuk operasi faktorial.\n";
                else if (n < 0 || r < 0)
                    cout << "Nilai tidak boleh negatif!\n";
                else
                    cout << "P(" << n << ", " << r << ") = " << permutasi(n, r) << endl;

                cout << "\nApakah ingin menghitung menggunakan menu ini lagi? (i = iya, t = tidak): ";
                cin >> ulang;
            } while (ulang == 'i');
            break;

        case 3:
            do {
                cout << "\n-- MENU KPK DAN FPB --\n";
                cout << "Masukkan angka pertama: ";
                cin >> n;
                cout << "Masukkan angka kedua: ";
                cin >> r;

                if (n > MAX_ANGKA || r > MAX_ANGKA)
                    cout << "Nilai terlalu besar! Maksimal " << MAX_ANGKA << " untuk operasi ini.\n";
                else if (n <= 0 || r <= 0)
                    cout << "Nilai harus positif!\n";
                else {
                    cout << "FPB dari " << n << " dan " << r << " adalah " << fpb(n, r) << endl;
                    cout << "KPK dari " << n << " dan " << r << " adalah " << kpk(n, r) << endl;
                }

                cout << "\nApakah ingin menghitung menggunakan menu ini lagi? (i = iya, t = tidak): ";
                cin >> ulang;
            } while (ulang == 'i');
            break;

        case 4:
            do {
                cout << "\n-- MENU CEK BILANGAN PRIMA --\n";
                cout << "Masukkan angka: ";
                cin >> n;

                if (n > MAX_ANGKA)
                    cout << "Nilai terlalu besar! Maksimal " << MAX_ANGKA << ".\n";
                else if (n < 0)
                    cout << "Bilangan negatif tidak bisa dicek keprimaan.\n";
                else if (isPrima(n))
                    cout << n << " adalah bilangan prima.\n";
                else
                    cout << n << " bukan bilangan prima.\n";

                cout << "\nApakah ingin menghitung menggunakan menu ini lagi? (i = iya, t = tidak): ";
                cin >> ulang;
            } while (ulang == 'i');
            break;

        case 5:
            cout << "\nTerima kasih telah menggunakan program ini!\n";
            cout << "Sampai jumpa! Tekan Enter untuk meninggalkan aplikasi...";
            break;

        default:
            cout << "Pilihan tidak valid, silakan coba lagi.\n";
            system("pause");
            break;
        }
    }

    return 0;
}
