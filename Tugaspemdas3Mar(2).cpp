```#include <iostream>
using namespace std;

// deklarasi global
int p, l;

// Implementasi Prosedur dan Fungsi
void input() {
    cout << "Masukkan panjang = ";
    cin >> p;
    cout << "Masukkan lebar = ";
    cin >> l;
}

float jumlah(float a, float b, float c) {
    return a + b + c;
}

int luasPersegiP(int a, int b) {
    return a * b;
}

void output() {
    cout << "Hasilnya = " << luasPersegiP(p, l) << endl;
    cout << "terima kasih" << endl;
}

int main() { //mulai
    input();
    output();
    cout << "hasil penjumlahan = " << jumlah(15.1, 24.9, 67) << endl;
    
    return 0;
} //selesai```