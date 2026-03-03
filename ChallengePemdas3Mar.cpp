#include <iostream>
using namespace std;

//deklarasi
float R;
// fungsi
void input(){
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> R;
}
float luas (float R){
    return 3.14159 * R * R; 
}
void output (){
    cout << " Luas lingkaran = " << luas(R) ;
}
int main(){
    input();
    output();
}