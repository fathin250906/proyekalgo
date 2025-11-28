#include <iostream>
using namespace std;
int main(){
    int bilangan;
    bool isprima = true;
    
    cout << "masukkan bilangan :";
    cin >> bilangan;
    for  (int i=2;i<bilangan;++i) {
    if(bilangan % i ==0 ){
		isprima = false;
		break;
	}
		}
		if (isprima){
			cout <<  bilangan  <<" bilangan prima "<< endl;
		}else{
			cout <<  bilangan  << " bukan bilangan prima "<< endl;
		}
		
}
