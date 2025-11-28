#include <iostream>
using namespace std;

int main() {
    int n = 15; // ukuran grid (semakin besar semakin jelas)

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Bagian telinga
            if ((i < 3 && j == 2) || (i < 3 && j == n-3)) {
                cout << "*";
            }
            // Bagian kepala
            else if (i >= 3 && i < 8 && j > 2 && j < n-3) {
                cout << "*";
            }
            // Bagian mata
            else if ((i == 5 && j == 5) || (i == 5 && j == n-6)) {
                cout << "o";
            }
            // Bagian hidung
            else if (i == 7 && j == n/2) {
                cout << "^";
            }
            // Bagian badan
            else if (i >= 8 && j >= 4 && j <= n-5) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
