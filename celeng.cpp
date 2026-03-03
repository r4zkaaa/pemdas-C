#include <iostream>
using namespace std;

//deklarasi variable
float jariJari;

//function
void awal(){
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jariJari;
}
float luas (float jari_jari, float phi){
    return 3.14159 * jariJari * jariJari; 
}
void akhir (){
    cout << "Hasil Luas untuk lingkaran dengan jari-jari " << jariJari << " adalah: " << luas(jariJari, 
    3.14159);
}
int main(){
    awal();
    akhir();
}