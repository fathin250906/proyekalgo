#include <iostream>
using namespace std;

int main(){
	int derajat;
	string cuaca;
cout <<"program pawang cuaca"<<endl;
cout <<"masukkan kondisi cuaca"<<endl;
cout <<"cuaca :";cin>>cuaca;
cout <<"derajat :";cin>>derajat;

if (cuaca == "hujan" && derajat <= 20 ){
	cout<<"bawa payung dan jaket"<<endl;
	}else if (cuaca == "hujan" ){
		cout <<"bawa payung "<<endl;
		}else if (cuaca == "panas"&& derajat >=30){
			cout <<"bawa sunscreen dan jaket"<<endl;
			}else if (cuaca == "panas" ){
				cout <<"bawa sunscreen dan jaket"<<endl;
				}else if (cuaca == "panas" && derajat  >21 &&derajat < 29)
				{cout<< "bawa suns dan hem"<<endl;
				}else {cout <<"cuaca tidak dikenali";}
}

