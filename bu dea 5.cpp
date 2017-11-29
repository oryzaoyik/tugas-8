#include <iostream>
using namespace std;

bool checkAngka(int Angka);

int main() {
	int angka = 0;
	
	cout<<"Masukkan Angka : ";
	cin>>angka;
	
	if(checkAngka(angka)) {
		cout<<"ini angka perfect"<<endl;
	}
	else {
		cout<<"ini bukan angka perfect"<<endl;
	}
}

bool checkAngka(int Angka) {
	int hasil = 0;
	bool status = false;
	
	for(int i = 1; i < Angka; i++) {
		hasil += i;
		
		if(hasil == Angka) {
			status = true;
			break;
		}
	}
	return status;	
}
