#include <iostream>
using namespace std;

string username, password;
int attempts = 0, jabatan = 0, gaji_perhari = 0, hari_masuk = 0, hari_cuti = 0, total_gaji = 0, tip_keluarga = 0;
char keluarga, kembali;

int main() {
    do {
        cout << "=== Laman Login ===\n";
        cout << "Username\t: "; cin >> username;
        cout << "Password\t: "; cin >> password;

        if(username != "123230076" && password  == "akfina076") {
            cout << "Username yang Anda masukkan salah.\n";
        }
        else if(username == "123230076" && password != "akfina076") {
            cout << "Password yang Anda masukkan salah.\n";
        }
        else if(username != "123230076" && password != "akfina076"){
            cout << "Username dan password yang Anda masukkan salah.\n";
        }
        
        attempts++;
        if(attempts >= 5) {
            cout << "Kesempatan habis. Anda tidak bisa masuk.\n\n";
            return 0;
        }
        else if (username != "123230076" || password != "akfina076"){
            cout << "Tersisa " << 5-attempts << " kali kesempatan.\n\n";
        }
    } while(username != "123230076" || password != "akfina076");
    
    cout << "\nLogin berhasil\n\n";

    do {
        cout << "=== Input Jabatan ===\n";
        cout << "1. CEO\n";
        cout << "2. Supervisor\n";
        cout << "3. Web Developer\n";
        cout << "4. Customer Service\n";
        cout << "5. Office Boy\n";
        cout << "Masukkan jabatan Anda (1-5): "; cin >> jabatan;
        
        switch (jabatan) {
        case 1:
            gaji_perhari = 20000000; // 20 juta per hari
            break;
        case 2:
            gaji_perhari = 15000000; // 15 juta per hari
            break;
        case 3:
            gaji_perhari = 8500000; // 8,5 juta per hari
            break;
        case 4:
            gaji_perhari = 4000000; // 4 juta per hari
            break;
        case 5:
            gaji_perhari = 3000000; // 3 juta per hari
            break;
        default:
            cout << "Jabatan yang Anda masukkan tidak terdapat dalam daftar.";
            break;
        }

        do {
            cout << "Masukkan total hari Anda masuk dalam 1 bulan: "; cin >> hari_masuk;
            if(hari_masuk > 26) {
                cout << "Maksimal hari masuk kerja adalah 26 hari.\n";
            }
        } while (hari_masuk > 26);

        do {
            cout << "Masukkan total hari Anda cuti dalam 1 bulan: "; cin >> hari_cuti;
            if(hari_cuti > 4) {
                cout << "Maksimal hari cuti kerja adalah 4 hari.\n";
            }
        } while(hari_cuti > 4);

        cout << "Apakah Anda sudah berkeluarga (y/n)? "; cin >> keluarga;
        while(toupper(keluarga) == 'y') {
            tip_keluarga = 500000;
        }

        total_gaji = (gaji_perhari*hari_masuk)+500000+tip_keluarga-200000;
        cout << "\nTotal gaji Anda: Rp" << total_gaji;
        cout << "\n\nKembali ke menu utama (y/n)? "; cin >> kembali;
    } while(toupper(kembali) != 'n');
}