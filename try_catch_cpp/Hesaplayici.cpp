#include<iostream>

using namespace std;


int main1() 
{

	setlocale(LC_ALL, "Turkish");

	/*
	try
	{
		int yas;
		cout << "Ya��n�z� giriniz: ";
		cin >> yas;

		if(yas>=18)
		{
			cout << "Eri�im yetkiniz var, ya��n�z uygun.\n";
		}
		else
		{
			throw(yas);
		}
	}
	catch (int hataNo)
	{
		cout << "Eri�im engellendi, ya��n�z en az 18 olmal�d�r." << endl << "Ya��n�z: " << hataNo << endl;
	}

	*/

	try
	{
		int x = 30;
		int y;

		cout << "Pozitif tam say� giriniz: ";
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
			cout << "Negatif de�er girildi, hata kodu: " << hataKodu << endl;
			return -1;//cout << "bye...\n"; yaz�s� g�r�lmez, koddan ��k�� yapar�z.
		}
		else if (hataKodu == 100)
		{
			cout << "Tan�ms�z sonuca ula��ld�, hata kodu: " << hataKodu << endl;
		}

		cout << "bye...\n";
		return 0;
	}
}