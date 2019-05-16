#include <iostream>
using namespace std;
//Class
class dikdortgenPrizma{
	public:
		double uzunluk,genislik,yukseklik;
};



int main(){
	dikdortgenPrizma d1;
	dikdortgenPrizma d2;
	double hacim=0;
	
	d1.uzunluk=5;
	d1.genislik=6;
	d1.yukseklik=7;
	
	d2.uzunluk=10;
	d2.genislik=8;
	d2.yukseklik=6;
	
	hacim=d1.uzunluk*d1.genislik*d1.yukseklik;
	cout << "D1 hacmi :" << hacim << endl;
	
	hacim=d2.uzunluk*d2.genislik*d2.yukseklik;
	cout << "D2 hacmi :" << hacim << endl;
	
	return 0;
}
