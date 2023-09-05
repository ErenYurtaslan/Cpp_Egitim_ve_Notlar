#include "Ogrenci.h"
#include <iostream>
using namespace std;


class Hesaplayici{
public:
	void ortalamaHesapla(Ogrenci ogrenci)
	{
		int ort = (ogrenci.not1 + ogrenci.not2) / 2;  
		cout << ogrenci.isim << " isimli öðrenicinin ortalamasý: " << ort << endl; 
	}
};

int main()
{
	setlocale(LC_ALL, "Turkish");

	Ogrenci ogr("Eren", 88, 82);

	Hesaplayici hesap; 
	hesap.ortalamaHesapla(ogr);  
}