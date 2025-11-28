#include <iostream>
using namespace std;
      int main(){
         int angka;
         cout << "pilih angka 1 sampai 7 :";
         cin >> angka;
         
         switch (angka){
         case 1: cout << "hari senin"; break;
         case 2: cout << "hari selasa"; break;
         case 3: cout << "hari rabu"; break;
         case 4: cout << "hari kamis"; break;
         case 5: cout << "hari jumat"; break;
         case 6: cout << "hari sabtu"; break;
         case 7: cout << "hari minggu";break;
         default: cout <<"angka yang dimasukkan diluar range";
         }
      }
