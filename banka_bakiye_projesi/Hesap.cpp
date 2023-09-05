#include "Hesap.h"

Hesap::Hesap(string _isim, int _hesapNo, float _bakiye)
{
	bakiye = 0;
	Hesap::isim = _isim;//�eklinde de yaz�labilir
	hesapNo = _hesapNo; 
	bakiye = _bakiye;
}

void Hesap::paraYatir(float yatirilanPara)
{
	Hesap::bakiye = Hesap::bakiye + yatirilanPara;//bakiye = bakiye + paraMiktari; �eklinde de yaz�labilir  
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
	cout << "Hesap Sahibi �smi: " << isim << endl;
	cout << "Hesap Numaras�: " << hesapNo << endl;
	cout << "Hesap Bakiyesi: " << bakiye << endl;
}
