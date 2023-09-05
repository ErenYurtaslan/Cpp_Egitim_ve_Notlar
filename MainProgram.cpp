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


void degistir(int& deger)//& iþareti = call by reference, eðer bunu koymazsan bu metot dýþarýda çaðrýlýp parametre olarak bir sayý deðil bir deðiþken yazýldýðý zaman buradaki iþlem yapýlmaz.
{
	deger = deger * 2;
	cout << "Deðer: " << deger << endl; 
}


int ucaginYonunuHesapla(int _x) {
	//yoðun hesaplamalar :)

	_x = 34;
	return _x;
}

void ucaginPointerlaYonunuHesapla(int *p){
	//yoðun pointer hesaplarý :)
	*p = 34;
}

//int Kopek::kopekSayisi = 0; Kopek.cpp'de initialize edildi.

int main() {
	setlocale(LC_ALL, "Turkish");//stringlerde türkçe karakter kullanabilmek için yazmak gerekir.

	string ad = "Eren Yurtaslan";
	int yas = 23;
	char harfNotu = 65;//  'A'  da yazabilirdik. ASCII'da 65, 'A' ya denk gelir. char harfNotu = 'BABe'; yazarsan, sadece son karakter yani "e" çktýda görünür.
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
	y = pow(2, 7);//2 üssü 7
	cout << y << endl;
					
	int t;
	t = floor(2.7);//çýktý 2 olur.(sayýnýn tam kýsmýný gösterir.)
	cout << t << endl;

	int w;
	w = ceil(2.2);//çýktý 3 olur.(sayýdan büyük en küçük tam sayýyý gösterir.)
	cout << w << endl;

	int q;
	q = round(4.5);//yuvarlama iþlemi
	cout<<q << endl << endl << endl;



	int sifreBelirle;
	cout << "Lütfen bir þifre belirleyiniz: " << endl;
	cin >> sifreBelirle;
	cout << "Þifreniz belirlendi!" << endl;

	int sifreGirisi;
	cout << "Þifreyi giriniz: " << endl;
	cin >> sifreGirisi;


	if (sifreBelirle == sifreGirisi)
	{
		cout << "Þifre doðru!" << endl;
	}
	else
	{
			//cout << "Þifre yanlýþ, tekrar giriniz:" << endl;	
		do 
		{
			cout << "Þifre yanlýþ, tekrar giriniz:" << endl;
			cin >> sifreGirisi;		

		} while (sifreBelirle != sifreGirisi);
		
		cout << "Þifre doðru!" << endl;
	}
	


	/*int s1, s2, islem, sonuc;
	string yanlisSonuc = "yanlis girilmis sonuc";

	cout << "Lutfen sayýlarý girin: " << endl;
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
	//bool hata = false; // yeni bir deðiþken
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

	// Sonrasýnda, hata olup olmadýðýný kontrol edebiliriz:
	
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
		ww = zz > xx - yy <= 0;/*bool olarak düþünmek lazým. <=0 kýsmýna kadar olan ifadeler doðru.
		7, -4ten büyük olacak. bu durum "true" olduðu için "1" ifadesi dönecek. sonra bu "1", 
		sayý olarak 0'dan büyük mü küçük mü yoksa ona eþit mi bunu kontrolü yapýlacak. 
		1, 0'dan büyük olduðu için "false" dönecek, o da çýktýda "0" olarak görünecek.	
		*/
			cout << ww<<endl;



			int dogalSayi,faktoriyel=1;
			cout << "Bir doðal sayý giriniz: " << endl;
			cin >> dogalSayi;
			cout << endl;

			if(dogalSayi<0)
			{
				do
				{
					cout << "Geçersiz sayý giriþi, doðal sayý giriniz:" << endl;
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
			cout << "Bir pozitif doðal sayý giriniz: " << endl;
			cin >> dogalSayi1;
			cout << endl;

			if (dogalSayi1 <= 0)
			{
				do
				{
					cout << "Geçersiz sayý giriþi, pozitif doðal sayý giriniz:" << endl;
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
				cout << i+1 << ". dizi elemanýný girin:";
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
			cout << "Lütfen asal sayýlarý bulmamýz için sayý giriþi yapýnýz: ";
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
						break;//þunu yazarak kodu 3 kat hýzlý çalýþtýrýrýz

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
				<< "[µs]" << std::endl; 





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
			cout << "4 basamaklý rakamlarý farklý toplam "<< farkliRakamSayaci <<" adet doðal sayý vardýr."<<endl; 







			for(int y=20;y<=40;y++)
			{
				cout << y << " sayýsýnýn pozitif bölenleri: "; 
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
			cout << "Bölünen sayýyý giriniz: ";
			cin >> bolunen;
			cout << endl;
			cout << "Bölen sayýyý giriniz: ";
			cin >>  bolen;
			cout << endl;


			try {
				bolum = bolunen / bolen; 
				if (bolen == 0) { throw 9293829; }
				cout << "Sonuc: " << bolum <<endl<<endl; 
			}
			catch (int hataMesaji) {
				cout << "Bölen 0 olamaz!" << endl<<endl; 
			}

			int number = 8;
			degistir(number); 
			cout << "Number: " << number << endl<<endl<<endl<<endl<<endl;  
			






			int eren = 23;
			int* ptr;
			ptr = &eren;//ptr'nin ÝÇERÝÐÝ, eren deðiþkeninin ADRESÝNE atandý.

			cout << eren << endl;// 23
			cout << *ptr << endl;/* cevap 23 çünkü "ptr=adres neyse o"dur.
			o adresin içeriði(örneðin ptr=1000 ise *1000, içeriðe denk gelir),
			yýldýzla gösterilir. o da eren deðiþkeninin deðerine eþittir.*/
			cout << &eren << endl;//adres neyse o
			cout << ptr << endl<<endl;//adres neyse o 

			
			eren = ucaginYonunuHesapla(eren); 

			cout << "yeni eren deðeri: " << eren <<endl<<endl;

			ucaginPointerlaYonunuHesapla(ptr);//deðiþken de atanmadý fark ettiysen

			cout << "eren deðiþkeninin yeni deðeri: " << eren << endl << endl; //ereni kullanmadan içeriðini 34 yaptýk.







			int arrayPointer[] = {34,47,86};

			int* p; 
			p = arrayPointer;//arrayPointer'ýn adresi. Ayný zamanda bu adresin içeriði, 
			//ilk üyenin(34) de adresi. yani dizinin adý da bir nevi pointer gibidir.

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
			cout << "Dizi ne kadar sayý içersin: ";
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
			* Constructor'sýz 
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
			  
			//cout << oto.getOtoModel() << " Kapý Sayýsý: " << *(oto.pKapiSayisi) << endl; 
			//cout << oto1.getOtoModel() << " Kapý Sayýsý: " << *(oto.pKapiSayisi) << endl << endl; 


			Otomobil* pointer51;
			pointer51 = new Otomobil("Krem", "Mitsubishi", 1542, 2023, 2);
			/*pointer51 = &oto;

			pointer51->aracBilgileri();

			pointer51 = &oto1;
			pointer51->aracBilgileri();*/
			 
			pointer51->setOtoRenk("Füme");
			pointer51->aracBilgileri(); cout << endl << endl;


			//cout << pointer51->getOtoModel() << " Kapý Sayýsý: " << *(pointer51->pKapiSayisi) << endl<<endl;

			 //delete pointer51; yazýlmazsa pointerlý nesne silinmez, diðerleri yine silinir.
			delete pointer51; //pointerlar ile yapýlan sýnýflar, iþ bitince SÝLÝNMELÝDÝR!
		
			cout << endl << endl << endl; 



			fstream filePost;
			filePost.open("c:\\test\\erenYazdir.txt", ios::out | ios::binary | ios::app | ios::in); //app=append

			if (!filePost.is_open()) { 
				cout << "Dosya açýlamýyor." << endl; 
			}
			else {
				/*filePost << endl; //ios::app yazdýk ve txt'yi sýfýrlamadan stringler eklemeye baþladýk.
				string strr = "Eren Yurtaslan";
				filePost << strr;*/
				string strr;  
				while (getline(filePost, strr)) { cout << strr << endl; } 				
				filePost.close(); 			 
			} 
		








			Kopek k10("Karabaþ"); 
			k10.havla();  

			Kopek k11("Dalmaçyalý");

			Kopek* k_ptr = new Kopek("Çomar");


			//cout<<"kopek sayýsý: "<<Kopek::kopekSayisi<<endl; staticte böyle ulaþamayýz.
			cout << "kopek sayýsý: " << Kopek::getKopekSayisi() << endl;
			delete k_ptr;
			cout << "kopek sayýsý: " << Kopek::getKopekSayisi() << endl; 
			//cout<<"kopek sayýsý: "<<Kopek::kopekSayisi<<endl; staticte böyle ulaþamayýz.


			cout << "Köpek sayýsýnýn karesi :" << Kopek::kopekSayisininKaresiniHesapla() << endl;


			cout << endl; 


	return 12345;
}