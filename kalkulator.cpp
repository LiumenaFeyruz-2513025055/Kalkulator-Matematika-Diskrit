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

//fungsi mengecek bilangan prima
bool isPrima (int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main () {
    return 0;
}

