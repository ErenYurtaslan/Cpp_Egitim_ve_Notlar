#include "Ogrenci.h"

void Ogrenci::bilgileriYazdir()
{
	cout << "id: " << id << endl << "Ýsim: " << ad << endl << "Sýnav Notu: " << sinavNot << endl;
}

Ogrenci::Ogrenci(int _id, string _ad, int _sinavNot)
{
	id = _id;
	ad = _ad;
	sinavNot = _sinavNot;
}

void Ogrenci::setId(int _id)
{
	id = _id;

}  

void Ogrenci::setAd(string _ad)
{
	ad = _ad; 
} 

void Ogrenci::setSinavNot(int _sinavNot)
{
	sinavNot = _sinavNot; 
}

int Ogrenci::getId()
{
	return id;
}

string Ogrenci::getAd()
{
	return ad;
}

int Ogrenci::getSinavNot()
{
	return sinavNot;
}
