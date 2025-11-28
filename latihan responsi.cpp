#include <iostream>
#include <iomanip>
using namespace std; 
string username,password;
bool loginsukses = false;
int bln,tgl;
int attempts = 0;
bool kamar[51];
int pilihkamar;
long long hitungtotal (int hari,int dewasa,int anak){
     return (dewasa * 300000 + anak * 150000) * hari;
 }
     
void tampilankamar(){
	
	 cout <<"====PROGRAM RESERVASI HOTEL==== \n";
            cout<<"kamar yang tersedia "<<endl;
            for(int  i = 1; i <= 50; i++){
				if (kamar[i]) cout<<"XX";
				else cout << setw(2) << setfill('0') << i <<" ";
				if(i %10 == 0)cout<<"\n";
				} 
	}
int main(){
	
	//login
do {
        cout << "===================\n";
        cout << "Laman Login     \n";
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

          char ulang;
          do{
           tampilankamar();
           
           //input tanggal 
            cout<<"tanggal reservasi"<<endl;
            do{
            cout<<"tanggal [1-31]:";cin>>tgl;
            if(tgl <1 || tgl > 31){
	cout<<"tanggal tidak valid,masukkan ulang !"<<endl;
	 }
	}while( tgl < 1 || tgl > 31);
	
	//input bulan
	do{
		cout <<"bulan [1-12] :";cin>>bln;
		if (bln < 1 || bln > 12){
			cout<<"bulan tidak valid,masukkan ulang !"<<endl;
		}
		}while(bln < 1 || bln > 12);
		
		//input nama pemesan
		char nama[50];
		cout<<"masukkan nama pemesan :";cin>>nama;
		
		//pillih kamar
		do{
		cout<<"masukkan kamar yang ingin dipesan (1-50) ketik 0 jika ingin keluar :";
		cin>>pilihkamar;
		if(pilihkamar == 0) return 0;
		if(pilihkamar <1 || pilihkamar >50){
			cout<<"nomor kamar tidak valid"<<endl;
			pilihkamar = -1;
		}else if(kamar[pilihkamar]){
			cout<<"kamar sudah dibooking /n";
			pilihkamar =-1;
			}
			}while(pilihkamar <1 || pilihkamar >50);
			kamar[pilihkamar] = true;
		cout << "Kamar nomor " << setw(2) << setfill('0') << pilihkamar << " berhasil direservasi.\n";
		
		//input jumlah lama menginap dan jumlah tamu
		int dewasa,hari,anak;
		cout<<"masukkan jumlah hari untuk menginap :";cin>>hari;
		cout<<"masukkan jumlah tamu dewasa :";cin>>dewasa;
		cout<<"masukkan jumlah tamu anak anak :";cin>>anak;
		
		//menghitung total
		long long total = hitungtotal(dewasa,anak,hari);
		
		//struk pembayaran
		cout <<"====================== \n";
		cout<<setw(5)<<"struk pembayaran"<<setw(5);
		cout<<"====================== \n";
		cout<<"tanggal reservasi :"<<setw(2)<<setfill('0')<<tgl<<"-"<<bln<<"\n";
		cout<<"nama pelanggan :"<<nama<<"\n";
		cout<<"jumlah hari menginap :"<<hari<<endl;
		cout<<"jumlah tamu dewasa :"<<dewasa<<endl;
		cout<<"jumlah tamu anak anak :"<<anak<<endl;
		cout<<"total bayar : RP "<<total<<endl;
		cout<<"====================== \n";
		
		//input ulang
		
		cout<<"apakah anda ingin melakukan reservasi ulang (Y/N) :";cin>>ulang;
	} while (ulang == 'Y' || ulang == 'y');
	
	cout<<"terimakasih telah menggunkan program reservasi ;) ";
	return 0;
}
