#include <iostream>
using namespace std;

void generatePrime(int length);

int main() {
	int panjang = 0;
	cout<<"masukkan panjang bilangan prima : ";
	cin>>panjang;
	
	generatePrime(panjang);
}
	void generatePrime(int length) {
		int batas = 0, bil = 1, prima[length], jumBagi = 0;
		
		while(batas < length) {
			jumBagi = 0;
			
			for(int i = 1; i <= bil; i++) {
				if(bil % i == 0) {
					jumBagi++;
				}
			}
			
			if(jumBagi == 2) {
				prima[batas] = bil;
				batas++;
			}
			 bil++;
		}
		
		cout<<"bilangan prima adalah : "<<endl;
		for(int i = 0; i < length; i++) {
			cout<<prima[i]<<endl;
		}
	}
