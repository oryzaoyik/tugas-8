#include <iostream>
using namespace std;

 float getAverage(int length);
 
 int main () {
 	int panjang = 0;
 	cout<< "Masukkan Panjang Fibbonaci : " ;
 	cin>>panjang;
 	
 	cout<<"rata-rata : " << getAvarage(panjang);
 	
 }
 
 float getAverage(int length) {
 	int awal = 0, akhir = 1, fibbo = 0, hasil = 0;
 	
 	if (length != 0) {
 		cout<<"1"<<endl;
 		hasil +=1;
	 }
	 
	 for(int i = 1; i < length; i++) {
	 	fibbo = awal + akhir;
	 	hasil += fibbo;
	 	cout<<fibbo<<endl;
	 	
	 	awal = akhir;
	 	akhir = fibbo;
	 }
	 
	 return hasil / length;
 }
 

