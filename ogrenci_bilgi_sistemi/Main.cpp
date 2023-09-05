#include <iostream>
#include "Ogrenci.h"
#include "Main.h"
#include <list>

using namespace std;



void menuyuGoster() {
	cout << "*+*+*+*+*+*+*+*+*+*+*+"<<endl;
	cout << "+                    *"<<endl; 
	cout << "*	 MEN�        +"<<endl; 
	cout << "+                    *"<<endl;
	cout << "*+*+*+*+*+*+*+*+*+*+*+"<<endl; 
	cout << "1. Yeni Kay�t Ekle" << endl; 
	cout << "2. T�m Listeyi G�ster" << endl;
	cout << "3. ��renci id'ye G�re Kay�t Sil" << endl;
	cout << "4. ��renci Ara" << endl;
	cout << "5. ��k��" << endl;
}


void ogrenciEkle(list<Ogrenci>* ogrL) {

	int id; 
	string ad,ad1,soyad,adSoyad;  
	int sinavNot; 
	cout << "L�tfen ��renci id giriniz: ";
	cin >> id;
	cout << "L�tfen ��renci ad� giriniz: ";
	cin >> ad >> ad1 >> soyad;   
	adSoyad = ad + " " + ad1 + " " + soyad;
	cout << "L�tfen ��renci notu giriniz: ";
	cin >> sinavNot; 

	Ogrenci ogr(id, adSoyad, sinavNot); 

	ogrL->push_back(ogr);
}

void showList(list<Ogrenci>* ogrL) { 
	list<Ogrenci>::iterator it; 

	cout << endl << "+-+-+-+-+-+-+-+-+-+-T�M ��RENC� L�STES�+-+-+-+-+-+-+-+-+-+-" << endl; 

	for (it=ogrL->begin();it!=ogrL->end();it++) 
	{
		it->bilgileriYazdir();
		cout << endl;
	}
}

void ogrenciSil(list<Ogrenci>* ogrL) {
	int id;
	cout << "Silinecek kayd�n id'sini giriniz:";
	cin >> id;

	list<Ogrenci>::iterator it; 

	for (it = ogrL->begin(); it != ogrL->end(); it++)
	{
		if (it->getId() == id){
			break;	
		}
	}

	
	 
	/*if (it != ogrL->end()) {
		ogrL->erase(it); 
	}
	else {
		do {
			cout << "L�tfen ge�erli bir id se�iniz: ";
			cin >> id; 
			for (it = ogrL->begin(); it != ogrL->end(); it++) 
			{
				if (it->getId() == id) { 
					break;
				}
			}
		} while (it == ogrL->end()); 
		ogrL->erase(it); 
	}
	
		A�A�IDAK� KOD, BUNUNLA AYNI ��� YAPIYOR	
	*/

	


	while (it == ogrL->end())
	{
		cout << "L�tfen ge�erli bir id giriniz: "; 
		cin >> id; 
		for (it = ogrL->begin(); it != ogrL->end(); it++) 
		{
			if (it->getId() == id) { 
				break;
			}
		}
	}
	ogrL->erase(it);  

}




void ogrenciAra(list<Ogrenci>* ogrL) {
	int id; 
	cout << "Aranacak kayd�n id'sini giriniz: ";
	cin >> id; 

	 
	list<Ogrenci>::iterator it; 

	for (it = ogrL->begin(); it != ogrL->end(); it++) 
	{
		if (it->getId() == id) { 
			break; 
		}
	}

	while (it == ogrL->end())
	{
		cout << "L�tfen ge�erli bir id giriniz: ";
		cin >> id;
		for (it = ogrL->begin(); it != ogrL->end(); it++)
		{
			if (it->getId() == id) {
				break;
			}
		}
	}

	cout << endl << "Arad���n�z ��rencinin bilgileri:\n";

	it->bilgileriYazdir();

	cout << endl; 

}


int main() {
	setlocale(LC_ALL, "Turkish"); 


	list<Ogrenci>* ogrenciList = new list<Ogrenci>(); 



	int secim = 0;
	do {
		menuyuGoster();
		cout << "Se�iminiz: ";
		cin >> secim;  
		

		switch (secim)
		{
		case 1:
			ogrenciEkle(ogrenciList);
			continue;
		case 2:
			showList(ogrenciList);
			continue;
		case 3:
			ogrenciSil(ogrenciList);
			continue;
		case 4:
			ogrenciAra(ogrenciList);
			continue;
		case 5:
			break;
		default:
			cout << "Hatal� Giri�!" << endl;  
		}
		
	} while(secim!=5);


	return 0;
}