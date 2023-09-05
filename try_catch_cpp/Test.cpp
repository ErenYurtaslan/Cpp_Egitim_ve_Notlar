#include<iostream>
#include "HataSinifi.h"

using namespace std;



int main()
{

	setlocale(LC_ALL, "Turkish"); 

	try
	{
		int x;
		cout << "x deðerini giriniz: "; 
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
			cout << "try bloðu sonu. x -> " << x << endl;
		}

	}
	catch (HataSinifi hata)
	{
		cout << "Exception yakalandý! Özel hata mesajý: " << hata.getHata() << endl;
	}
	catch(int throw101) 
	{
		cout << "Exception yakalandi! Özel hata mesajý: " << throw101 << endl;
	}

	cout << "bye.......\n";
	return 0;

}