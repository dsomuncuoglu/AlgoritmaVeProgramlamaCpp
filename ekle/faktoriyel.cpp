#include <iostream>
using namespace std;
int faktoriyel(int deger);
int main(){
	int a;
	cout << "Faktoriyel Bulan Program\n" << "Kaca kadar faktoriyel bulsun?? ";
	cin >> a;
	cout << faktoriyel(a);
	
	return 0;
}
int faktoriyel(int deger){
	int sonuc=1;
	for(int i=1;i<=deger;i++){
		sonuc*=i;
	}
	return sonuc;
}
