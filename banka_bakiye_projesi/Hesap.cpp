#include "Hesap.h"

Hesap::Hesap(string _isim, int _hesapNo, float _bakiye)
{
	bakiye = 0;
	Hesap::isim = _isim;//şeklinde de yazılabilir
	hesapNo = _hesapNo; 
	bakiye = _bakiye;
}

void Hesap::paraYatir(float yatirilanPara)
{
	Hesap::bakiye = Hesap::bakiye + yatirilanPara;//bakiye = bakiye + paraMiktari; şeklinde de yazılabilir  
}

void Hesap::paraCek(float cekilenPara)
{
	if (bakiye < cekilenPara) {
		cout << "cout: Yetersiz bakiye! " << endl;
		throw exception("Exception: Yetersiz bakiye! ");
	}
	else {
		bakiye = bakiye - cekilenPara;
	}
}

void Hesap::hesapDetayi()
{
	cout << "Hesap Sahibi İsmi: " << isim << endl;
	cout << "Hesap Numarası: " << hesapNo << endl;
	cout << "Hesap Bakiyesi: " << bakiye << endl;
}
