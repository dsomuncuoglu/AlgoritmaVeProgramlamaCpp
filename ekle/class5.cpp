#include <iostream>
using namespace std;
// Arkadas Fonksiyon(Friend)

class Sekil{
	private:
		int genislik;
	public:
		friend void genislikyaz(Sekil s){
			cout << "Sekil genisligi : " << s.genislik;
		}
		void setG(int g){
			genislik=g;
		}
		int getG(){
			return genislik;
		}
};



int main(){
	Sekil s;
	s.setG(50);
	genislikyaz(s);
	
	
	
	return 0;
}
