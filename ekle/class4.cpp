#include <iostream>
using namespace std;
// Yapici Yikici Fonk
class Cizgi{
	private:
		double uzunluk;
	public:
		void setU(double u){
			uzunluk=u;
		}
		double getU(){
			return uzunluk;
		}
		Cizgi(){
			cout << "Parametresiz yapici calisti" << endl;
			this->uzunluk=25;
		}
		Cizgi(double sayi){
			cout << "Parametreli yapici calisti2" << endl;
			this->uzunluk=sayi;
		}
		~Cizgi(){
			cout << "Parametresiz yikici calisti" << endl;
		}
};


int main(){
	Cizgi c1;
	cout << "Cizginin uzunlugu : " << c1.getU() << endl;
	Cizgi c2(65);
	cout << "Cizginin uzunlugu : " << c2.getU() << endl;
	
	
	return 0;
}
