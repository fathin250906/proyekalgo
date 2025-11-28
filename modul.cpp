#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

string username, password;
bool loginsukses = false;
int bln, tgl;
int attempts = 0;
bool kamar[51]; // index 1..50, false = tersedia, true = sudah dibooking

long long hitungTotal(int dewasa, int anak, int hari) {
    return (dewasa * 300000 + anak * 150000) * hari;
}

void tampilKamar() {
    cout << "=== Aplikasi Reservasi Hotel IFK Inn ===\n";
    cout << "Daftar kamar tersedia:\n";
    for (int i = 1; i <= 50; i++) {
        if (kamar[i]) cout << "XX ";
        else cout << setw(2) << setfill('0') << i << " ";
        if (i % 10 == 0) cout << "\n";
    }
    cout << "\n";
}

int main() {
    memset(kamar, false, sizeof(kamar));

    // ===== LOGIN =====
    do {
        cout << "===================\n";
        cout << "Laman Login\n";
        cout << "===================\n";
        cout << "Masukkan username : "; cin >> username;
        cout << "Masukkan password : "; cin >> password;

        if (username == "fathin.m" && password == "123250213") {
            loginsukses = true;
        } else {
            cout << "Username atau password salah\n";
            attempts++;
            if (attempts >= 3) {
                cout << "Kesempatan percobaan telah habis\n";
                return 0;
            } else {
                cout << "Tersisa " << 3 - attempts << " kali kesempatan.\n\n";
            }
        }
    } while (!loginsukses);

    cout << "Login berhasil!\n\n";

    // ===== RESERVASI =====
    char ulang;
    do {
        tampilKamar();

        // Input tanggal
        do {
            cout << "Tanggal [1-31]: "; cin >> tgl;
            if (tgl < 1 || tgl > 31) cout << "Tanggal tidak valid, masukkan ulang!\n";
        } while (tgl < 1 || tgl > 31);

        // Input bulan
        do {
            cout << "Bulan [1-12]: "; cin >> bln;
            if (bln < 1 || bln > 12) cout << "Bulan tidak valid, masukkan ulang!\n";
        } while (bln < 1 || bln > 12);

        // Input nama pelanggan
        char nama[64];
        cout << "Masukkan nama pelanggan: ";
        cin >> nama;

        // Pilih kamar
        int pilihKamar;
        do {
            cout << "Masukkan nomor kamar yang ingin dipesan (01-50), atau 0 untuk keluar: ";
            cin >> pilihKamar;
            if (pilihKamar == 0) return 0;
            if (pilihKamar < 1 || pilihKamar > 50) {
                cout << "Nomor kamar tidak valid!\n";
                pilihKamar = -1;
            } else if (kamar[pilihKamar]) {
                cout << "Kamar sudah dibooking!\n";
                pilihKamar = -1;
            }
        } while (pilihKamar < 1 || pilihKamar > 50);
        kamar[pilihKamar] = true;

        cout << "Kamar nomor " << setw(2) << setfill('0') << pilihKamar << " berhasil direservasi.\n";

        // Input lama menginap dan jumlah tamu
        int hari, dewasa, anak;
        cout << "Masukkan jumlah hari menginap: "; cin >> hari;
        cout << "Masukkan jumlah tamu dewasa: "; cin >> dewasa;
        cout << "Masukkan jumlah tamu anak-anak: "; cin >> anak;

        // Hitung total
        long long total = hitungTotal(dewasa, anak, hari);

        // Cetak struk
        cout << "\n=== STRUK PEMESANAN ===\n";
        cout << "Tanggal Reservasi : " << setw(2) << setfill('0') << tgl
             << "/" << setw(2) << setfill('0') << bln << "\n";
        cout << "Nama Pelanggan    : " << nama << "\n";
        cout << "Nomor Kamar       : " << setw(2) << setfill('0') << pilihKamar << "\n";
        cout << "Jumlah Hari       : " << hari << "\n";
        cout << "Jumlah Dewasa     : " << dewasa << "\n";
        cout << "Jumlah Anak-anak  : " << anak << "\n";
        cout << "Total Bayar       : Rp" << total << "\n";
        cout << "=======================\n";

        // Opsi ulang
        cout << "Apakah Anda ingin melakukan reservasi lagi? (Y/N): ";
        cin >> ulang;
    } while (ulang == 'Y' || ulang == 'y');

    cout << "Terima kasih telah menggunakan IFK Inn.\n";
    return 0;
}
