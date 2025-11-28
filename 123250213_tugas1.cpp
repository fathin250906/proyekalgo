#include <iostream>
using namespace std;

int main() {
    string nama, nim, plug;

    // Input data dari pengguna
    cout << "input data" << endl;
    cout << "Masukkan Nama: ";
    getline(cin, nama);
    
    cout << "Masukkan NIM: ";
    getline(cin, nim);
    
    cout << "Masukkan Plug: ";
    getline(cin, plug);
    
    // output dalam bentuk data
    cout << "\ninilah data anda :" << endl;
    cout << "Nim : " << nim << endl;
    cout << "Nama : " << nama << endl;
    cout << "Plug : " << plug << endl;
    

    // Output dalam bentuk tabel
    
    cout << "-----------------------------------------------------" << endl;
    cout << "|       NIM    |       Nama             |  Plug |" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "| " << nim << "    |  " << nama << "   |  " << plug << " |" << endl;
    cout << "-----------------------------------------------------" << endl;

    return 0;
}
