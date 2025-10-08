// fungsi mencari faktorial
long long factorial(int n) {
    long long hasil = 1;
        for (int i = 2; i <= n; i++) {
            hasil *= i;
        }
        return hasil;
}