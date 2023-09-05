#include <iostream>
#include "Ogrenci.h"
#include "Main.h"
#include <list>

using namespace std;



void menuyuGoster() {
	cout << "*+*+*+*+*+*+*+*+*+*+*+"<<endl;
	cout << "+                    *"<<endl; 
	cout << "*	 MENÜ        +"<<endl; 
	cout << "+                    *"<<endl;
	cout << "*+*+*+*+*+*+*+*+*+*+*+"<<endl; 
	cout << "1. Yeni Kayýt Ekle" << endl; 
	cout << "2. Tüm Listeyi Göster" << endl;
	cout << "3. Öðrenci id'ye Göre Kayýt Sil" << endl;
	cout << "4. Öðrenci Ara" << endl;
	cout << "5. Çýkýþ" << endl;
}


void ogrenciEkle(list<Ogrenci>* ogrL) {

	int id; 
	string ad,ad1,soyad,adSoyad;  
	int sinavNot; 
	cout << "Lütfen Öðrenci id giriniz: ";
	cin >> id;
	cout << "Lütfen Öðrenci adý giriniz: ";
	cin >> ad >> ad1 >> soyad;   
	adSoyad = ad + " " + ad1 + " " + soyad;
	cout << "Lütfen Öðrenci notu giriniz: ";
	cin >> sinavNot; 

	Ogrenci ogr(id, adSoyad, sinavNot); 

	ogrL->push_back(ogr);
}

void showList(list<Ogrenci>* ogrL) { 
	list<Ogrenci>::iterator it; 

	cout << endl << "+-+-+-+-+-+-+-+-+-+-TÜM ÖÐRENCÝ LÝSTESÝ+-+-+-+-+-+-+-+-+-+-" << endl; 

	for (it=ogrL->begin();it!=ogrL->end();it++) 
	{
		it->bilgileriYazdir();
		cout << endl;
	}
}

void ogrenciSil(list<Ogrenci>* ogrL) {
	int id;
	cout << "Silinecek kaydýn id'sini giriniz:";
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
			cout << "Lütfen geçerli bir id seçiniz: ";
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
	
		AÞAÐIDAKÝ KOD, BUNUNLA AYNI ÝÞÝ YAPIYOR	
	*/

	


	while (it == ogrL->end())
	{
		cout << "Lütfen geçerli bir id giriniz: "; 
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
	cout << "Aranacak kaydýn id'sini giriniz: ";
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
		cout << "Lütfen geçerli bir id giriniz: ";
		cin >> id;
		for (it = ogrL->begin(); it != ogrL->end(); it++)
		{
			if (it->getId() == id) {
				break;
			}
		}
	}

	cout << endl << "Aradýðýnýz öðrencinin bilgileri:\n";

	it->bilgileriYazdir();

	cout << endl; 

}


int main() {
	setlocale(LC_ALL, "Turkish"); 


	list<Ogrenci>* ogrenciList = new list<Ogrenci>(); 



	int secim = 0;
	do {
		menuyuGoster();
		cout << "Seçiminiz: ";
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
			cout << "Hatalý Giriþ!" << endl;  
		}
		
	} while(secim!=5);


	return 0;
}