#include <iostream>
using namespace std;

main() {
	int n, temp, g = 0;
	
	cout<<"masukkan n: ";
	cin>>n;
	
	int genap[n];
	for(int i = 0; i < n; i++) {
		cout<<"masukkan angka ke-"<<(i + 1)<": ";
		cin>>temp;
		
		if(temp % 2 == 0) {
			genap[g] = temp;
			g++;
		}
	}
	
	cout<<endl;
	
	for(int j = 0; j < g; j++) {
		cout<<genap[j]<<endl;
	}
	
	if(g == 0)
	cout<<"Even number not found in array";
}

