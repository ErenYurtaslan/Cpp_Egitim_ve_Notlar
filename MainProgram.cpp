#include <iostream>
#include <cmath>
#include <chrono>
#include "Otomobil.h"
#include "Hayvanlar.h"
#include "Kopek.h"
#include "Kedi.h"
#include "Kus.h"
#include <fstream>
#include <string>

using namespace std;


void degistir(int& deger)//& i�areti = call by reference, e�er bunu koymazsan bu metot d��ar�da �a�r�l�p parametre olarak bir say� de�il bir de�i�ken yaz�ld��� zaman buradaki i�lem yap�lmaz.
{
	deger = deger * 2;
	cout << "De�er: " << deger << endl; 
}


int ucaginYonunuHesapla(int _x) {
	//yo�un hesaplamalar :)

	_x = 34;
	return _x;
}

void ucaginPointerlaYonunuHesapla(int *p){
	//yo�un pointer hesaplar� :)
	*p = 34;
}

//int Kopek::kopekSayisi = 0; Kopek.cpp'de initialize edildi.

int main() {
	setlocale(LC_ALL, "Turkish");//stringlerde t�rk�e karakter kullanabilmek i�in yazmak gerekir.

	string ad = "Eren Yurtaslan";
	int yas = 23;
	char harfNotu = 65;//  'A'  da yazabilirdik. ASCII'da 65, 'A' ya denk gelir. char harfNotu = 'BABe'; yazarsan, sadece son karakter yani "e" �kt�da g�r�n�r.
	float notOrtalamasi = 12.45;
	bool sinavaGirdiMi = true;
	double pi = 3.141592658573839;
	double en, boy, alan;


	cout << "Merhaba \nOgrenci Ad - Soyad: " << ad <<endl;
	cout << "Ogrenci Yas: "<<yas<<endl;
	cout << "Sinava Girdi mi?: " << sinavaGirdiMi << endl;
	cout << "Not Ortalamasi : " << notOrtalamasi << endl;
	cout << "Harf Notu: " << harfNotu << endl << endl;



	ad = "Ali Veli";
	sinavaGirdiMi = false;
	cout << "Merhaba \nOgrenci Ad - Soyad: " << ad << endl;
	cout << "Sinava Girdi mi?: " << sinavaGirdiMi << endl<<endl;



	cout << "Lutfen dikdortgenin once enini, sonra boyunu arada bosluk birakarak yaziniz: "<<endl;
	cin >> en >> boy;

	alan = en * boy;
	cout << "Dikdortgenin alani, " << alan << " metrekaredir." << endl<<endl;

	int y;
	y = pow(2, 7);//2 �ss� 7
	cout << y << endl;
					
	int t;
	t = floor(2.7);//��kt� 2 olur.(say�n�n tam k�sm�n� g�sterir.)
	cout << t << endl;

	int w;
	w = ceil(2.2);//��kt� 3 olur.(say�dan b�y�k en k���k tam say�y� g�sterir.)
	cout << w << endl;

	int q;
	q = round(4.5);//yuvarlama i�lemi
	cout<<q << endl << endl << endl;



	int sifreBelirle;
	cout << "L�tfen bir �ifre belirleyiniz: " << endl;
	cin >> sifreBelirle;
	cout << "�ifreniz belirlendi!" << endl;

	int sifreGirisi;
	cout << "�ifreyi giriniz: " << endl;
	cin >> sifreGirisi;


	if (sifreBelirle == sifreGirisi)
	{
		cout << "�ifre do�ru!" << endl;
	}
	else
	{
			//cout << "�ifre yanl��, tekrar giriniz:" << endl;	
		do 
		{
			cout << "�ifre yanl��, tekrar giriniz:" << endl;
			cin >> sifreGirisi;		

		} while (sifreBelirle != sifreGirisi);
		
		cout << "�ifre do�ru!" << endl;
	}
	


	/*int s1, s2, islem, sonuc;
	string yanlisSonuc = "yanlis girilmis sonuc";

	cout << "Lutfen say�lar� girin: " << endl;
	cin >> s1 >> s2;


	cout << "lutfen yapilacak islemi seciniz: 1 => +, 2 => -, 3 => *, 4 => /, 5 => aritmetik ortalama" << endl;
	cin >> islem;
	cout << endl;

	if(islem==1){
		sonuc = s1 + s2;
	}
	else if(islem == 2){
		sonuc = s1 - s2;
	}
	else if(islem==3){
		sonuc = s1 * s2;
	}
	else if(islem == 4){
		sonuc = s1 / s2;
	}
	else if (islem == 5) {
		sonuc = (s1 + s2)/2;
	}
	else{
		cout << "Lutfen gecerli bir sayi giriniz."<<endl;
	}*/


	 
	double  sonuc{},s1, s2,islem;
	//bool hata = false; // yeni bir de�i�ken
	string yanlisSonuc = "yanlis girilmis islem";

	cout << "Lutfen sayilari girin: " << endl;
	cin >> s1 >> s2;

	cout << "lutfen yapilacak islemi seciniz: 1 => +, 2 => -, 3 => *, 4 => /, 5 => aritmetik ortalama" << endl;
	cin >> islem;
	cout << endl;

	if (islem == 1) {
		sonuc = s1 + s2;		
	}
	else if (islem == 2) {
		sonuc = s1 - s2;		
	}
	else if (islem == 3) {
		sonuc = s1 * s2;		
	}
	else if (islem == 4) {
		sonuc = s1 / s2;
	}
	else if (islem == 5) {
		sonuc = (s1 + s2) / 2;		
	}
	else {
		cout << "Lutfen gecerli bir islem giriniz." << endl;
		//hata = true;  // hata durumunu belirt		
	}

	// Sonras�nda, hata olup olmad���n� kontrol edebiliriz:
	
		if (islem>=1 and islem<=5)
		{
			cout << "Sonuc: " << sonuc << endl;
		}
		else 
		{
			cout << "Sonuc: " << yanlisSonuc << endl;
		}
	


		double n1, n2, n3, result;
		cout << "3 tane sayi girin: " << endl;
		cin >> n1 >> n2 >> n3;
		cout << endl;

		if (n1 >= n2 and n1 >= n3)
		{
			result = n1;
		}
		else if (n2 >= n1 && n2 >= n3) {
			result = n2;
		}
		else {
			result = n3;
		}

		cout << "Yazdiginiz en buyuk sayi: " << result << endl;


		int xx = 5, yy = 9, zz = 7.4,ww;
		ww = zz > xx - yy <= 0;/*bool olarak d���nmek laz�m. <=0 k�sm�na kadar olan ifadeler do�ru.
		7, -4ten b�y�k olacak. bu durum "true" oldu�u i�in "1" ifadesi d�necek. sonra bu "1", 
		say� olarak 0'dan b�y�k m� k���k m� yoksa ona e�it mi bunu kontrol� yap�lacak. 
		1, 0'dan b�y�k oldu�u i�in "false" d�necek, o da ��kt�da "0" olarak g�r�necek.	
		*/
			cout << ww<<endl;



			int dogalSayi,faktoriyel=1;
			cout << "Bir do�al say� giriniz: " << endl;
			cin >> dogalSayi;
			cout << endl;

			if(dogalSayi<0)
			{
				do
				{
					cout << "Ge�ersiz say� giri�i, do�al say� giriniz:" << endl;
					cin >> dogalSayi;
					cout << endl;
				} while (dogalSayi<0);

				if (dogalSayi== 0) {
					faktoriyel = 1;
					cout << dogalSayi << "! = " << faktoriyel << endl;
				}

				if (dogalSayi > 0) {
					for (int ab = 1; ab <= dogalSayi; ab++) { 
						faktoriyel = faktoriyel * ab; 
					}
					cout << dogalSayi << "! = " << faktoriyel << endl;
				}
				
			}
			else if (dogalSayi==0) {
				faktoriyel = 1;
				cout << dogalSayi << "! = " << faktoriyel << endl;
			}
			else
			{
				for (int a=1; a <= dogalSayi; a++) {
					faktoriyel = faktoriyel * a;
				}
				cout << dogalSayi << "! = " << faktoriyel << endl;
			}
			




			int dogalSayi1;
			cout << "Bir pozitif do�al say� giriniz: " << endl;
			cin >> dogalSayi1;
			cout << endl;

			if (dogalSayi1 <= 0)
			{
				do
				{
					cout << "Ge�ersiz say� giri�i, pozitif do�al say� giriniz:" << endl;
					cin >> dogalSayi1;
					cout << endl;
				} while (dogalSayi1 <= 0);

				for (int f = 1; f <= dogalSayi1; f++)
				{

					for (int f3 = 1; f3 <= f; f3++)
					{
						cout << f << " ";
					}
					cout << endl;

				}

			}
			else {
					for(int f1=1; f1<=dogalSayi1; f1++)
					{

						for (int f2=1; f2<=f1; f2++)
						{
							cout << f1 <<" ";
						}
						cout << endl;

					}
			}



			cout << endl<<endl;






			int iki = 2;

			for (int j = 1; j <= iki; j++) {
				cout << iki << " ";
			}
			cout << endl << endl;




			
			int array[4];
			for(int i=0;i<4;i++)
			{
				cout << i+1 << ". dizi eleman�n� girin:";
				cin >> array[i];
			}
			cout << endl << "{";
			for(int i=3;i>0;i--)
			{				
					cout << array[i] << ", ";					
			}
			cout << array[0] << "}"<<endl; 
			





			chrono::steady_clock::time_point begin = std::chrono::steady_clock::now(); 

			int sayi1;
			cout << "L�tfen asal say�lar� bulmam�z i�in say� giri�i yap�n�z: ";
			cin >> sayi1; 

			for (int i = 1; i <= sayi1;i++)
			{
				int carpanSayaci = 0;
				for (int k = 1; k <= i; k++)
				{
					if(i%k==0)
					{
						carpanSayaci++;
					}

					if (carpanSayaci > 2)
					{
						break;//�unu yazarak kodu 3 kat h�zl� �al��t�r�r�z

					}
				}

				if (carpanSayaci == 2)
				{
					cout << i << ", ";
				}

			}
			chrono::steady_clock::time_point end = std::chrono::steady_clock::now(); 
			 
			std::cout << "Time difference = "
				<< chrono::duration_cast<std::chrono::microseconds>(end - begin).count() 
				<< "[�s]" << std::endl; 





			int farkliRakamSayaci = 0;
			int birler, onlar, yuzler, binler;
			for(int x=1000;x<=9999;x++)
			{
				birler = x % 10;
				onlar = (x / 10) % 10;
				yuzler = (x / 100) % 10;
				binler = x / 1000;

				if(birler!=onlar and birler!=yuzler and birler!=binler and onlar!=yuzler and onlar!=binler and yuzler!=binler)
				{
					farkliRakamSayaci++;
				}
			}
			cout << "4 basamakl� rakamlar� farkl� toplam "<< farkliRakamSayaci <<" adet do�al say� vard�r."<<endl; 







			for(int y=20;y<=40;y++)
			{
				cout << y << " say�s�n�n pozitif b�lenleri: "; 
				for (int z=1; z <= y; z++)
				{
					if(y%z==0)
					{
						cout << z <<", ";
					}			
				}
				cout << endl;
			}




			double bolunen, bolen, bolum;
			cout << "B�l�nen say�y� giriniz: ";
			cin >> bolunen;
			cout << endl;
			cout << "B�len say�y� giriniz: ";
			cin >>  bolen;
			cout << endl;


			try {
				bolum = bolunen / bolen; 
				if (bolen == 0) { throw 9293829; }
				cout << "Sonuc: " << bolum <<endl<<endl; 
			}
			catch (int hataMesaji) {
				cout << "B�len 0 olamaz!" << endl<<endl; 
			}

			int number = 8;
			degistir(number); 
			cout << "Number: " << number << endl<<endl<<endl<<endl<<endl;  
			






			int eren = 23;
			int* ptr;
			ptr = &eren;//ptr'nin ��ER���, eren de�i�keninin ADRES�NE atand�.

			cout << eren << endl;// 23
			cout << *ptr << endl;/* cevap 23 ��nk� "ptr=adres neyse o"dur.
			o adresin i�eri�i(�rne�in ptr=1000 ise *1000, i�eri�e denk gelir),
			y�ld�zla g�sterilir. o da eren de�i�keninin de�erine e�ittir.*/
			cout << &eren << endl;//adres neyse o
			cout << ptr << endl<<endl;//adres neyse o 

			
			eren = ucaginYonunuHesapla(eren); 

			cout << "yeni eren de�eri: " << eren <<endl<<endl;

			ucaginPointerlaYonunuHesapla(ptr);//de�i�ken de atanmad� fark ettiysen

			cout << "eren de�i�keninin yeni de�eri: " << eren << endl << endl; //ereni kullanmadan i�eri�ini 34 yapt�k.







			int arrayPointer[] = {34,47,86};

			int* p; 
			p = arrayPointer;//arrayPointer'�n adresi. Ayn� zamanda bu adresin i�eri�i, 
			//ilk �yenin(34) de adresi. yani dizinin ad� da bir nevi pointer gibidir.

			cout << p << endl;//adres
			cout << arrayPointer << endl;//adres
			cout << endl << *p << endl; //34
			cout << endl << *(p + 1) << endl;//47
			cout << endl << *(p + 2) << endl;//86
			cout << p[2];//86






			int eymen = 7;
			int* pointerx = &eymen; 
			int sehnaz = *pointerx + 8; 
			int* pointery = &sehnaz;
			int endofQuestion = *pointery + 5; 
			cout << endofQuestion << endl << endl;





			int abderen;
			cout << "Dizi ne kadar say� i�ersin: ";
			cin >> abderen;
			int* pEren = new int[abderen];
			for (int i = 0; i < abderen; i++) {
				cin >> pEren[i];
			}

			int sum = 0;
			for (int j = 0; j < abderen; j++) {
				sum = sum + pEren[j];
			}
			cout << "toplam: " << sum << endl;

			delete[] pEren; 

			cout << endl<<endl<<endl<<endl; 




			
			Otomobil oto("Mor", "Mazda", 1000, 2020, 4);
			oto.setOtoRenk("Eflatun");
			Otomobil oto1("Lacivert", "Volvo", 980, 1987, 6);

			
			 
			/*		
			* 
			* Constructor's�z 
			oto.renk = "Mor";
			oto.model = "Mazda";
			oto.beygirGucu = 1000;

			oto1.renk = "Lacivert";
			oto1.model = "Volvo";
			oto1.beygirGucu = 980;
			*/

			oto.aracBilgileri();
			cout << endl<< endl; 
			oto1.aracBilgileri();   
			cout << endl << endl;
			  
			//cout << oto.getOtoModel() << " Kap� Say�s�: " << *(oto.pKapiSayisi) << endl; 
			//cout << oto1.getOtoModel() << " Kap� Say�s�: " << *(oto.pKapiSayisi) << endl << endl; 


			Otomobil* pointer51;
			pointer51 = new Otomobil("Krem", "Mitsubishi", 1542, 2023, 2);
			/*pointer51 = &oto;

			pointer51->aracBilgileri();

			pointer51 = &oto1;
			pointer51->aracBilgileri();*/
			 
			pointer51->setOtoRenk("F�me");
			pointer51->aracBilgileri(); cout << endl << endl;


			//cout << pointer51->getOtoModel() << " Kap� Say�s�: " << *(pointer51->pKapiSayisi) << endl<<endl;

			 //delete pointer51; yaz�lmazsa pointerl� nesne silinmez, di�erleri yine silinir.
			delete pointer51; //pointerlar ile yap�lan s�n�flar, i� bitince S�L�NMEL�D�R!
		
			cout << endl << endl << endl; 



			fstream filePost;
			filePost.open("c:\\test\\erenYazdir.txt", ios::out | ios::binary | ios::app | ios::in); //app=append

			if (!filePost.is_open()) { 
				cout << "Dosya a��lam�yor." << endl; 
			}
			else {
				/*filePost << endl; //ios::app yazd�k ve txt'yi s�f�rlamadan stringler eklemeye ba�lad�k.
				string strr = "Eren Yurtaslan";
				filePost << strr;*/
				string strr;  
				while (getline(filePost, strr)) { cout << strr << endl; } 				
				filePost.close(); 			 
			} 
		








			Kopek k10("Karaba�"); 
			k10.havla();  

			Kopek k11("Dalma�yal�");

			Kopek* k_ptr = new Kopek("�omar");


			//cout<<"kopek say�s�: "<<Kopek::kopekSayisi<<endl; staticte b�yle ula�amay�z.
			cout << "kopek say�s�: " << Kopek::getKopekSayisi() << endl;
			delete k_ptr;
			cout << "kopek say�s�: " << Kopek::getKopekSayisi() << endl; 
			//cout<<"kopek say�s�: "<<Kopek::kopekSayisi<<endl; staticte b�yle ula�amay�z.


			cout << "K�pek say�s�n�n karesi :" << Kopek::kopekSayisininKaresiniHesapla() << endl;


			cout << endl; 


	return 12345;
}