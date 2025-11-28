#include <iostream>
using namespace std;
int jml,tgl,bln,tahun;
double regular = 40000.00,vip = 60000.00,vvip = 80000.00, total = 0 ;
string tiket,nama;
int main(){
	
cout<<"==========================="<<endl;
cout<<"      pemesanan tiket      "<<endl;
cout<<"==========================="<<endl;
cout<<"nama pemesan    :";cin>>nama;
cout<<"waktu pemesanan   "<<endl;
do{
cout<<"tanggal  :";cin>>tgl;
if(tgl <1 || tgl > 31){
	cout<<"tanggal tidak valid,masukkan ulang !"<<endl;
	 }
	}while( tgl < 1 || tgl > 31);
	do{
cout<<"bulan    :";cin>>bln;
if(bln < 1 || bln > 12){
	cout<<"bulan tidak valid,masukkan ulang !"<<endl;
	 }
}while(bln <1 || bln > 12);  
	do{
cout<<"tahun    :";cin>>tahun;
if(tahun > 2025){
	cout<<"tahun melebihi,isi ulang!"<<endl;
	}
	}while(tahun > 2025);
cout<<"jenis tiket [vvip,vip,regular] :";cin>>tiket;
cout<<"jumlah tiket yang dipesan      :";cin>>jml;

if(tiket == "regular"){
	total = regular * jml;
	}
	else if(tiket == "vip"){
		total = vip * jml;
		}
	else if(tiket == "vvip"){
			total = vvip * jml ;
			}
		else {
			cout <<"tiket tidak dikenali,silahkan isi ulang !";
				}
			
cout<<"harap tunggu sedang memproses data ;)"<<endl;
cout<<"==========================="<<endl;
cout<<"        struk tiket          "<<endl;
cout<<"==========================="<<endl;
cout<<"nama pemesan                :"<<nama<<endl;
cout<<"waktu                       :"<<tgl<< bln<< tahun<<endl;
cout<<"jenis tiket yang dipesan    :"<<tiket<<endl;
cout<<"jumlah tiket yang dipesan   :"<<jml<<endl;
cout<<"total                       :"<< total<<endl;
cout<<"terima kasih telah menggunakan program kuuuu...";
return 0;

}
