#pragma once
#include <iostream>

using namespace std;

class Hayvanlar {

public:

	Hayvanlar(string ad);
	void beslen();
	void uyu();

	void setIsim(string ad);
	string getIsim(); 


private:

	string isim;

};