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

// library
#include <iostream>
using namespace std;

// deklarasi
int p, l, luas;

// Implementasi Prosedur Fungsi
void input () {
    cout << "Masukkan panjang = " ;
    cin >> p;
    cout << "Masukkan lebar = " ;
    cin >> l;

}

int luasPersegi (){
    return p * l;
}

void output (){
    cout << "Hasilnya = " << luasPersegi() << endl;
    cout << "terima kasih";
}

int main () { //mulai
    input();
    output();
} //selesai

// library
#include <iostream>
using namespace std;

// deklarasi global
int p, l;

// Implement Prosedur dan Fungsi
void input () {
    cout << "Masukkan panjang = ";
    cin >> p;
    cout << "Masukkan lebar ="
    cin >> l;
}

float jumlah (float a, float b, float c){
    return a + b + c;
    
}
