#include <iostream>
using namespace std;
// Coklu Kalitim
class Sekil{
	protected:
		int genislik,yukseklik;
	public:
		void setG(int g){
			genislik=g;
		}
		void setY(int y){
			yukseklik=y;
		}
};
class boyamaliyeti{
	public:
		int getMaliyet(int alan){
			return alan*100;
		}
};
class Dikdortgen : public Sekil,public boyamaliyeti{
	public:
		int getAlan(){
			return genislik*yukseklik;
		}
}; 




int main(){
	Dikdortgen d1;
	d1.setG(10);
	d1.setY(15);
	int alan=d1.getAlan();
	cout << "Boya Maliyeti = " << d1.getMaliyet(alan) << " TL";
	
	return 0;
}
