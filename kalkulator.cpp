#include <iostream>
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

//fungsi kpk
int kpk(int a, int b) {
    return (a * b) / fpb (a, b);
    }

// fungsi mencari faktorial
long long factorial(int n) {
    long long hasil = 1;
        for (int i = 2; i <= n; i++) {
            hasil *= i;
        }
        return hasil;
}

// fungsi mencari kombinasi n! / (n - r)! * r!
long long kombinasi(int n, int r) {
    if (n < 0 || r < 0 || r > n) {
        cout << "Input tidak valid! n dan r harus >= 0 dan r tidak boleh lebih besar dari n." << endl;
        return 0;
    }
    return factorial(n) / (factorial(n - r) * factorial(r));
}

// fungsi mencari permutasi, n! / (n - r)!
long long permutasi(int n, int r) {
    if (n < 0 || r < 0 || r > n) {
        cout << "Input tidak valid! n dan r harus >= 0 dan r tidak boleh lebih besar dari n." << endl;
        return 0;
    }
    return factorial(n) / factorial(n - r);
}

//fungsi mengecek bilangan prima
bool isPrima (int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// fungsi utama aplikasi kalkulator matematika diskret
int main() {
    int inputan;
    int n, r;

    while( inputan != 5) {
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

        switch (inputan)
        {
        // menu kombinasi
        case 1:
            cout << "Masukkan n: ";
            cin >> n;
            cout << "Masukkan nilai r: ";
            cin >> r;
            cout << "C(" << n << ", " << r << ") = " << kombinasi(n, r) << endl;
            break;
        // menu permutasi
        case 2:
            cout << "Masukkan nilai n: ";
            cin >> n;
            cout << "Masukkan nilai r: ";
            cin >> r;
            cout << "P(" << n << ", " << r << ") = " << permutasi(n, r) << endl;
            break;
        // menu fpb
        case 3:
            cout << "Masukkan angka pertama: ";
            cin >> n;
            cout << "Masukkan angka kedua: ";
            cin >> r;
            cout << "FPB dari " << n << " dan " << r << " adalah " << fpb(n, r) << endl;
            cout << "KPK dari " << n << " dan " << r << " adalah " << kpk(n, r) << endl;
            break;
        //menu bilangan prima
         case 4:
            cout << "Masukkan angka: ";
            cin >> n;
            if (isPrima(n))
                cout << n << " adalah bilangan prima." << endl;
            else
                cout << n << " bukan bilangan prima." << endl;
            break;
        case 5:
            cout << "terimakasih telah menggunakan program ini\n";
            break;
        }
    }
    return 0;
}


