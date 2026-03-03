#include <iostream>
using namespace std;

//deklarasi variabel
float jariJari;
float phi = 3.14159;
//bagian fungsi
void awal (){
    cout << "Masukkan jariJari lingkaran = ";
    cin >> jariJari;
}
float luas (float jari_jari, float phi){
    return phi *jari_jari * jari_jari;
}
void akhir (){
    cout << "Hasil luas untuk lingkaran dengan jari jari" <<jariJari << "adalah = " << luas (jariJari, phi);
}
int main(){
    awal();
    akhir();
}
