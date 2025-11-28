// PROGRAM PABRIK SIDOKUMA
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int mie = 0; // jumlah mie yang diproduksi
    int tepung = 1; // kebutuhan tepung per mie (gram)
    int telur = 2;  // kebutuhan telur per mie (butir)
    int air = 3;    // kebutuhan air per mie (liter)

    // berikan nilai awal 0
    int stok_tepung = 0, stok_telur = 0, stok_air = 0;
    int sisa_tepung = 0, sisa_telur = 0, sisa_air = 0;
    int total_stok = 0; // jumlah mie maksimal yang bisa dibuat

    char opsi;

    do {
        cout << "+" << setfill('=') << setw(27) << "" << "+" << endl;
        cout << "|" << setfill(' ') << setw(25) << "PROGRAM PABRIK SIDOKUMA" << setw(3) << "|" << endl;
        cout << setfill('=') << setw(29) << "" << endl;
        cout << "| " << "A. Input Stok" << setfill(' ') << setw(14) << "|" << endl;
        cout << "| " << "B. Hasil Produksi" << setfill(' ') << setw(10) << "|" << endl;
        cout << "| " << "C. Sisa Stok" << setfill(' ') << setw(15) << "|" << endl;
        cout << "| " << "D. Keluar" << setfill(' ') << setw(18) << "|" << endl;
        cout << "+" << setfill('=') << setw(27) << ""  << "+" << endl;
        cout << "Pilih opsi (A/B/C/D): ";
        cin >> opsi;

        switch(toupper(opsi)) {
            case 'A':
                cout << "\nMasukkan jumlah stok masing-masing bahan!\n";
                cout << "Tepung (gram): "; cin >> stok_tepung;
                cout << "Telur (butir): "; cin >> stok_telur;
                cout << "Air (liter): "; cin >> stok_air;

                // menghitung total stok mie yang bisa dibuat (berdasarkan bahan terbatas)
                total_stok = min(stok_tepung / tepung, min(stok_telur / telur, stok_air / air));
                cout << "\nStok tersimpan!\n";
                cout << "Jumlah mie maksimal yang bisa dibuat: " << total_stok << " mie\n\n";
                break;
            case 'B':
                if (total_stok == 0) {
                    cout << "\nBelum ada data stok! Silakan input stok dulu (menu A)\n\n"; // error handling
                }
                else {
                    cout << "\nMasukkan jumlah mie yang ingin dibuat: ";
                    cin >> mie;
                    if (mie > total_stok) {
                        cout << "\nStok tidak cukup! Maksimal bisa buat " << total_stok << " mie.\n\n";
                    } else {
                        cout << "\nBerhasil memproduksi " << mie << " mie.\n";

                        // mengurangi stok bahan
                        stok_tepung -= mie * tepung;
                        stok_telur -= mie * telur;
                        stok_air -= mie * air;
                        cout << "Stok bahan telah diperbarui.\n\n";
                    }
                }
                break;
            case 'C':
                cout << "\nSisa stok bahan di gudang:\n";
                cout << "Tepung: " << stok_tepung << " gram\n";
                cout << "Telur : " << stok_telur << " butir\n";
                cout << "Air   : " << stok_air << " liter\n\n";
                break;
            case 'D':
                cout << "\nTerima kasih telah menggunakan program Pabrik Sidokuma!\n";
                break;
            default:
                cout << "\nPilihan tidak valid! Silakan pilih A/B/C/D.\n\n";
        }
    } while (toupper(opsi) != 'D'); // fungsi toupper berlaku untuk kondisi inputan selain 'D' atau 'd'

    return 0;
}
