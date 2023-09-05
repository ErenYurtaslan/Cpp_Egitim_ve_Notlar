#include<iostream>
#include "HataSinifi.h"

using namespace std;



int main()
{

	setlocale(LC_ALL, "Turkish"); 

	try
	{
		int x;
		cout << "x de�erini giriniz: "; 
		cin >> x; 

		if (x < 0)
		{
			throw HataSinifi("Hata -> 404");
		}
		else if(x==0)
		{
			throw 101;
		}
		else
		{
			cout << "try blo�u sonu. x -> " << x << endl;
		}

	}
	catch (HataSinifi hata)
	{
		cout << "Exception yakaland�! �zel hata mesaj�: " << hata.getHata() << endl;
	}
	catch(int throw101) 
	{
		cout << "Exception yakalandi! �zel hata mesaj�: " << throw101 << endl;
	}

	cout << "bye.......\n";
	return 0;

}