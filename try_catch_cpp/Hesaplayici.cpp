#include<iostream>

using namespace std;


int main1() 
{

	setlocale(LC_ALL, "Turkish");

	/*
	try
	{
		int yas;
		cout << "Yaþýnýzý giriniz: ";
		cin >> yas;

		if(yas>=18)
		{
			cout << "Eriþim yetkiniz var, yaþýnýz uygun.\n";
		}
		else
		{
			throw(yas);
		}
	}
	catch (int hataNo)
	{
		cout << "Eriþim engellendi, yaþýnýz en az 18 olmalýdýr." << endl << "Yaþýnýz: " << hataNo << endl;
	}

	*/

	try
	{
		int x = 30;
		int y;

		cout << "Pozitif tam sayý giriniz: ";
		cin >> y;

		if (y == 0)
			throw 100;
		else if (y < 0)
			throw 101;
		else {
			int z = x / y;
			cout << z << endl;
		}

	}
	catch (int hataKodu)
	{
		if (hataKodu == 101)
		{
			cout << "Negatif deðer girildi, hata kodu: " << hataKodu << endl;
			return -1;//cout << "bye...\n"; yazýsý görülmez, koddan çýkýþ yaparýz.
		}
		else if (hataKodu == 100)
		{
			cout << "Tanýmsýz sonuca ulaþýldý, hata kodu: " << hataKodu << endl;
		}

		cout << "bye...\n";
		return 0;
	}
}