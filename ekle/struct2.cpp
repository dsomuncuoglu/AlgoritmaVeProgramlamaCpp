#include <iostream>
using namespace std;
struct Personel {
	string ad,soyad;
	int kimlik;
	
};
int main(){
	Personel p[3];
	for(int i=0;i<3;i++){
		cout << "Personel Adini Girin :";
		cin >> p[i].ad;
		cout << "Personel Soyadi Girin :";
		cin >> p[i].soyad;
		cout << "Personel TC si Girin :";
		cin >> p[i].kimlik;
	}
	for(int i=0;i<3;i++){
			cout << i+1<<"-Personel Adi :" << p[i].ad << endl <<i+1<< "-Personel Soyadi :" << p[i].soyad<< endl <<i+1<< "-Personel TC : "<< p[i].kimlik << endl <<endl;
		}
	
	
	
	
	
	return 0;
}
