#pragma once
#include <iostream>

using namespace std;


class Ogrenci {

private:

	int id;
	string ad;
	int sinavNot; 

public:

	Ogrenci(int _id, string _ad, int _sinavNot);
	void setId(int _id);
	void setAd(string _ad);
	void setSinavNot(int _sinavNot);
	int getId();
	string getAd();
	int getSinavNot();
	void bilgileriYazdir();
};