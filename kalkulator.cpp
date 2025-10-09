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
    if (r > n) {
        return 0;
    }
    return factorial(n) / (factorial(n - r) * factorial(r));
}

// fungsi mencari permutasi, n! / (n - r)!
long long permutasi(int n, int r) {
    if (r > n) {
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
        cout << "\nKALKULATOR MATEMATIKA DISKRIT" << endl;
        cout << "1. kombinasi" << endl;
        cout << "2. permutasi" << endl;
        cout << "3. kpk dan fpb" << endl;
        cout << "4. cek bilangan prima" << endl;
        cout << "5. keluar" << endl;

        cout << "Pilih menu: ";
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