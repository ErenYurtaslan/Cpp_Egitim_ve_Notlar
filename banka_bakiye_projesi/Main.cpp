#include <iostream>
#include "Hesap.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "Turkish");
	
	Hesap ali = Hesap("Ali Kayahan", 172123, 250.75);
	Hesap berna = Hesap("Berna Ozan", 174153, 0); 


	ali.paraYatir(200);

	try {
		ali.paraCek(100); 
	}
	catch (exception e) { 
		cout << e.what() << endl;  
	}

	ali.hesapDetayi();





	cout << endl<<endl; 





	 
	berna.hesapDetayi();

	try {
		berna.paraCek(100); 
	}
	catch (exception e) {
		cout << e.what()<< endl;
	}/*try catch blo�unu yorum sat�r�na al�rsak,
	 hesapDetayi metodunda yazd���m�z exception'� 
	 alamay�z ve program ��ker.*/
	




	cout << endl;  

	return 0;
}