#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	//--------------------------------------------------------------------------------------------------------------------------------------------------------------------//
	cout << " ===  ===  === ======== ===       =======   ====   ==========  ========    =======   =====      =========  =======         ======== ======== ========" << endl;
	cout << " ===  ===  === ===      ===      ===      ===  === === === === ===         ======= ===  ===    === === === ===  ===        ===      ===      ===     " << endl;
	cout << " ===  ===  === ======   ===      ===      ===  === === === === ======        ===   ===  ===    === === === =======         ======   ======   ======  " << endl;
	cout << "  ===========  ===      ===      ===      ===  === ===     === ===           ===   ===  ===    ===     === === ===         ===      ===      ===     " << endl;
	cout << "   ==== ====   ======== ========  =======   ====   ===     === ========      ===     ====      ===     === ===  ===   ==   ======== ===      ========" << endl << endl;
	//--------------------------------------------------------------------------------------------------------------------------------------------------------------------//	


	while (1)
	{
		long birincis, ikincis, ucuncus, dorduncus, besincis; //þerit

		string renk1, renk2, renk3, renk4, renk5;
		string serit, islem;
		unsigned long smdsonuc, yenisayi, sonucdegeri, sayi; int hane;

		cout << "ne yapmak istersiniz ('direnc', 'smd' ya da 'bilgi'): ";
		cin >> islem;

		//-----------------------bilgi-------------------------------------------
		if (islem == "bilgi")
		{
			if (islem != "bilgi")
			{
				cout << endl << "!!!------yanlis yazmis olabilirsiniz------!!!" << endl;
			}
			cout << "\n1000 Ohm [o] = 1K [k]\n" << "10000 Ohm [o] = 10K [k]\n" << "100000 Ohm [o] = 100K [k]\n" << "1000000 Ohm [o] = 1000K [k] = 1M [megaohm]\n" << "10000000 Ohm [o] = 10000K [k] = 10M [megaohm]\n" << "100000000 Ohm [o] = 100000K [k] = 100M [megaohm]\n" << "1000000000 Ohm [o] = 1000000K [k] = 1000M [megaohm]\n";
			cout << endl << "renk yazilislari" << endl << "*siyah-----" << endl << "*kahve-----" << endl << "*kirmizi---" << endl << "*turuncu---" << endl << "*sari------" << endl << "*yesil-----" << endl << "*mavi------" << endl << "*mor-------" << endl << "*gri-------" << endl << "*beyaz-----" << endl << endl;
		}
		//-----------------------bilgi------------------------------------------


		//-----------------------smd------------------------------------------		
		if (islem == "smd")
		{
			cout << "\nkac haneli smd direnciniz var: ";
			cin >> hane;
						
			//-------------3haneli-----------------------
			if (hane == 3)
			{
				cout << "direncinizin ustunde yazani giriniz: ";
				cin >> sayi; //332

				smdsonuc = sayi % 10; // 332 % 10 = 2 = smdsonuc
				yenisayi = sayi - smdsonuc; //330
				sonucdegeri = yenisayi * (pow(10, (smdsonuc - 1))); //330 * 10 ^ (2 -1)
				
				cout << sonucdegeri << endl << endl;
			}
			
			//---------------4haneli-----------------------
			if (hane == 4)
			{
				cout << "direncinizin ustunde yazani giriniz: ";
				cin >> sayi;

				smdsonuc = sayi % 10; 
				yenisayi = sayi - smdsonuc; 
				sonucdegeri = yenisayi * (pow(10, (smdsonuc - 1))); 
				
				cout << sonucdegeri << endl << endl;
			}
		}
		//-----------------------smd------------------------------------------


		//-----------------------direnc-----------------------------------------
		if (islem == "direnc")
		{
			if (islem != "direnc")
			{
				cout << endl << "!!!------yanlis yazmis olabilirsiniz------!!!" << endl;
			}
			cout << endl;
			cout << "kac seritli direnciniz var: ";
			cin >> serit;

			if (serit == "4") //4 þeritli direnç hesaplama bölümü
			{
				//-----------------birincis-----------------------

				cout << "birinci rengi giriniz: ";
				cin >> renk1;

				if (renk1 == "siyah") //siyah 1.
				{
					birincis = 0;
				}

				if (renk1 == "kahve") //kahve 1.
				{
					birincis = 1;
				}

				if (renk1 == "kirmizi") //kýrmýzý 1.
				{
					birincis = 2;
				}

				if (renk1 == "turuncu") // turuncu 1.
				{
					birincis = 3;
				}

				if (renk1 == "sari") // sarý 1.
				{
					birincis = 4;
				}

				if (renk1 == "yesil") // yesil 1.
				{
					birincis = 5;
				}

				if (renk1 == "mavi") // mavi 1.
				{
					birincis = 6;
				}

				if (renk1 == "mor") // mor 1.
				{
					birincis = 7;
				}

				if (renk1 == "gri") // gri 1.
				{
					birincis = 8;
				}

				if (renk1 == "beyaz") // beyaz 1.
				{
					birincis = 9;
				}

				//-----------------ikincis-----------------------

				cout << "ikici rengi giriniz: ";
				cin >> renk2;

				if (renk2 == "siyah") //siyah 2.
				{
					ikincis = 0;
				}

				if (renk2 == "kahve") //kahve 2.
				{
					ikincis = 1;
				}

				if (renk2 == "kirmizi") //kýrmýzý 2.
				{
					ikincis = 2;
				}

				if (renk2 == "turuncu") // turuncu 2.
				{
					ikincis = 3;
				}

				if (renk2 == "sari") // sarý 2.
				{
					ikincis = 4;
				}

				if (renk2 == "yesil") // yesil 2.
				{
					ikincis = 5;
				}

				if (renk2 == "mavi") // mavi 2.
				{
					ikincis = 6;
				}

				if (renk2 == "mor") // mor 2.
				{
					ikincis = 7;
				}

				if (renk2 == "gri") // gri 2.
				{
					ikincis = 8;
				}

				if (renk2 == "beyaz") // beyaz 2.
				{
					ikincis = 9;
				}

				//-----------------ucuncus-----------------------

				cout << "ucuncu rengi giriniz: ";
				cin >> renk3;

				if (renk3 == "siyah") //siyah 3.
				{
					ucuncus = 1;
				}

				if (renk3 == "kahve") //kahve 3.
				{
					ucuncus = 10;
				}

				if (renk3 == "kirmizi") //kýrmýzý 3.
				{
					ucuncus = 100;
				}

				if (renk3 == "turuncu") // turuncu 3.
				{
					ucuncus = 1000;
				}

				if (renk3 == "sari") // sarý 3.
				{
					ucuncus = 10000;
				}

				if (renk3 == "yesil") // yesil 3.
				{
					ucuncus = 100000;
				}

				if (renk3 == "mavi") // mavi 3.
				{
					ucuncus = 1000000;
				}

				if (renk3 == "mor") // mor 3.
				{
					ucuncus = 10000000;
				}

				if (renk3 == "gri") // gri 3.
				{
					ucuncus = 100000000;
				}

				if (renk3 == "beyaz") // beyaz 3.
				{
					ucuncus = 1000000000;
				}

				cout << ((birincis * 10) + ikincis) * ucuncus << " Ohm ?" << endl << endl; //4þeritli iþlem hesaplama bölümü
			}

			//--------------------------------------------------------------------------------------------------------//

			if (serit == "5") //5 þeritli direnç hesaplama bölümü
			{
				//-----------------birincis-----------------------

				cout << "birinci rengi giriniz: ";
				cin >> renk1;

				if (renk1 == "siyah") //siyah 1.
				{
					birincis = 0;
				}

				if (renk1 == "kahve") //kahve 1.
				{
					birincis = 1;
				}

				if (renk1 == "kirmizi") //kýrmýzý 1.
				{
					birincis = 2;
				}

				if (renk1 == "turuncu") // turuncu 1.
				{
					birincis = 3;
				}

				if (renk1 == "sari") // sarý 1.
				{
					birincis = 4;
				}

				if (renk1 == "yesil") // yesil 1.
				{
					birincis = 5;
				}

				if (renk1 == "mavi") // mavi 1.
				{
					birincis = 6;
				}

				if (renk1 == "mor") // mor 1.
				{
					birincis = 7;
				}

				if (renk1 == "gri") // gri 1.
				{
					birincis = 8;
				}

				if (renk1 == "beyaz") // beyaz 1.
				{
					birincis = 9;
				}

				//-----------------ikincis-----------------------

				cout << "ikici rengi giriniz: ";
				cin >> renk2;

				if (renk2 == "siyah") //siyah 2.
				{
					ikincis = 0;
				}

				if (renk2 == "kahve") //kahve 2.
				{
					ikincis = 1;
				}

				if (renk2 == "kirmizi") //kýrmýzý 2.
				{
					ikincis = 2;
				}

				if (renk2 == "turuncu") // turuncu 2.
				{
					ikincis = 3;
				}

				if (renk2 == "sari") // sarý 2.
				{
					ikincis = 4;
				}

				if (renk2 == "yesil") // yesil 2.
				{
					ikincis = 5;
				}

				if (renk2 == "mavi") // mavi 2.
				{
					ikincis = 6;
				}

				if (renk2 == "mor") // mor 2.
				{
					ikincis = 7;
				}

				if (renk2 == "gri") // gri 2.
				{
					ikincis = 8;
				}

				if (renk2 == "beyaz") // beyaz 2.
				{
					ikincis = 9;
				}

				//-----------------ucuncus-----------------------

				cout << "ucuncu rengi giriniz: ";
				cin >> renk3;

				if (renk3 == "siyah") //siyah 3.
				{
					ucuncus = 0;
				}

				if (renk3 == "kahve") //kahve 3.
				{
					ucuncus = 1;
				}

				if (renk3 == "kirmizi") //kýrmýzý 3.
				{
					ucuncus = 2;
				}

				if (renk3 == "turuncu") // turuncu 3.
				{
					ucuncus = 3;
				}

				if (renk3 == "sari") // sarý 3.
				{
					ucuncus = 4;
				}

				if (renk3 == "yesil") // yesil 3.
				{
					ucuncus = 5;
				}

				if (renk3 == "mavi") // mavi 3.
				{
					ucuncus = 6;
				}

				if (renk3 == "mor") // mor 3.
				{
					ucuncus = 7;
				}

				if (renk3 == "gri") // gri 3.
				{
					ucuncus = 8;
				}

				if (renk3 == "beyaz") // beyaz 3.
				{
					ucuncus = 9;
				}

				//-----------------dorduncus-----------------------

				cout << "dorduncu rengi giriniz: ";
				cin >> renk4;

				if (renk4 == "siyah") //siyah 4.
				{
					dorduncus = 1;
				}

				if (renk4 == "kahve") //kahve 4.
				{
					dorduncus = 10;
				}

				if (renk4 == "kirmizi") //kýrmýzý 4.
				{
					dorduncus = 100;
				}

				if (renk4 == "turuncu") // turuncu 4.
				{
					dorduncus = 1000;
				}

				if (renk4 == "sari") // sarý 4.
				{
					dorduncus = 10000;
				}

				if (renk4 == "yesil") // yesil 4.
				{
					dorduncus = 100000;
				}

				if (renk4 == "mavi") // mavi 4.
				{
					dorduncus = 1000000;
				}

				if (renk4 == "mor") // mor 4.
				{
					dorduncus = 10000000;
				}

				if (renk4 == "gri") // gri 4.
				{
					dorduncus = 100000000;
				}

				if (renk4 == "beyaz") // beyaz 4.
				{
					dorduncus = 1000000000;
				}

				cout << ((birincis * 100) + (ikincis * 10) + ucuncus) * dorduncus << " Ohm ?" << endl << endl; //5þeritli iþlem hesaplama bölümü
			}

			//--------------------------------------------------------------------------------------------------------//

			if (serit == "6") //6 þeritli direnç hesaplama bölümü
			{
				//-----------------birincis-----------------------

				cout << "birinci rengi giriniz: ";
				cin >> renk1;

				if (renk1 == "siyah") //siyah 1.
				{
					birincis = 0;
				}

				if (renk1 == "kahve") //kahve 1.
				{
					birincis = 1;
				}

				if (renk1 == "kirmizi") //kýrmýzý 1.
				{
					birincis = 2;
				}

				if (renk1 == "turuncu") // turuncu 1.
				{
					birincis = 3;
				}

				if (renk1 == "sari") // sarý 1.
				{
					birincis = 4;
				}

				if (renk1 == "yesil") // yesil 1.
				{
					birincis = 5;
				}

				if (renk1 == "mavi") // mavi 1.
				{
					birincis = 6;
				}

				if (renk1 == "mor") // mor 1.
				{
					birincis = 7;
				}

				if (renk1 == "gri") // gri 1.
				{
					birincis = 8;
				}

				if (renk1 == "beyaz") // beyaz 1.
				{
					birincis = 9;
				}

				//-----------------ikincis-----------------------

				cout << "ikici rengi giriniz: ";
				cin >> renk2;

				if (renk2 == "siyah") //siyah 2.
				{
					ikincis = 0;
				}

				if (renk2 == "kahve") //kahve 2.
				{
					ikincis = 1;
				}

				if (renk2 == "kirmizi") //kýrmýzý 2.
				{
					ikincis = 2;
				}

				if (renk2 == "turuncu") // turuncu 2.
				{
					ikincis = 3;
				}

				if (renk2 == "sari") // sarý 2.
				{
					ikincis = 4;
				}

				if (renk2 == "yesil") // yesil 2.
				{
					ikincis = 5;
				}

				if (renk2 == "mavi") // mavi 2.
				{
					ikincis = 6;
				}

				if (renk2 == "mor") // mor 2.
				{
					ikincis = 7;
				}

				if (renk2 == "gri") // gri 2.
				{
					ikincis = 8;
				}

				if (renk2 == "beyaz") // beyaz 2.
				{
					ikincis = 9;
				}

				//-----------------ucuncus-----------------------

				cout << "ucuncu rengi giriniz: ";
				cin >> renk3;

				if (renk3 == "siyah") //siyah 3.
				{
					ucuncus = 0;
				}

				if (renk3 == "kahve") //kahve 3.
				{
					ucuncus = 1;
				}

				if (renk3 == "kirmizi") //kýrmýzý 3.
				{
					ucuncus = 2;
				}

				if (renk3 == "turuncu") // turuncu 3.
				{
					ucuncus = 3;
				}

				if (renk3 == "sari") // sarý 3.
				{
					ucuncus = 4;
				}

				if (renk3 == "yesil") // yesil 3.
				{
					ucuncus = 5;
				}

				if (renk3 == "mavi") // mavi 3.
				{
					ucuncus = 6;
				}

				if (renk3 == "mor") // mor 3.
				{
					ucuncus = 7;
				}

				if (renk3 == "gri") // gri 3.
				{
					ucuncus = 8;
				}

				if (renk3 == "beyaz") // beyaz 3.
				{
					ucuncus = 9;
				}

				//-----------------dorduncus-----------------------

				cout << "dorduncu rengi giriniz: ";
				cin >> renk4;

				if (renk4 == "siyah") //siyah 4.
				{
					dorduncus = 0;
				}

				if (renk4 == "kahve") //kahve 4.
				{
					dorduncus = 1;
				}

				if (renk4 == "kirmizi") //kýrmýzý 4.
				{
					dorduncus = 2;
				}

				if (renk4 == "turuncu") // turuncu 4.
				{
					dorduncus = 3;
				}

				if (renk4 == "sari") // sarý 4.
				{
					dorduncus = 4;
				}

				if (renk4 == "yesil") // yesil 4.
				{
					dorduncus = 5;
				}

				if (renk4 == "mavi") // mavi 4.
				{
					dorduncus = 6;
				}

				if (renk4 == "mor") // mor 4.
				{
					dorduncus = 7;
				}

				if (renk4 == "gri") // gri 4.
				{
					dorduncus = 8;
				}

				if (renk4 == "beyaz") // beyaz 4.
				{
					dorduncus = 9;
				}

				//-----------------besincis-----------------------

				cout << "besinci rengi giriniz: ";
				cin >> renk5;

				if (renk5 == "siyah") //siyah 5.
				{
					besincis = 1;
				}

				if (renk5 == "kahve") //kahve 5.
				{
					besincis = 10;
				}

				if (renk5 == "kirmizi") //kýrmýzý 5.
				{
					besincis = 100;
				}

				if (renk5 == "turuncu") // turuncu 5.
				{
					besincis = 1000;
				}

				if (renk5 == "sari") // sarý 5.
				{
					besincis = 10000;
				}

				if (renk5 == "yesil") // yesil 5.
				{
					besincis = 100000;
				}

				if (renk5 == "mavi") // mavi 5.
				{
					besincis = 1000000;
				}

				if (renk5 == "mor") // mor 5.
				{
					besincis = 10000000;
				}

				if (renk5 == "gri") // gri 5.
				{
					dorduncus = 100000000;
				}

				if (renk5 == "beyaz") // beyaz 5.
				{
					besincis = 1000000000;
				}

				cout << ((birincis * 100) + (ikincis * 10) + ucuncus) * dorduncus << " Ohm ?" << endl << endl; //6þeritli iþlem hesaplama bölümü
				cout << "son banttaki deger sicakliga duyarliliktir " << endl << "formul: (ppm/C degeri)×(Direnc degeri)/1000000 " << endl << endl;
			}
		}
		//-----------------------direnc-----------------------------------------
	}
}
