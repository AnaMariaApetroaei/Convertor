#include <iostream>
#include<cstring>
#include<cstdlib>
int alegere;
using namespace std;

void Lungime()
{
	system("cls");
	cout << "												CONVERTOR" << endl;
	int alegere1 = 0, alegere2 = 0;
	long double capacitate;
	cout << endl;
	cout << endl;
	cout << "		UNITATI DE MASURA PENTRU LUNGIME" ;
	cout << endl;
	cout << "	1. Centimetri" << endl;
	cout << "	2. Picioare (feets)" << endl;
	cout << "	3. Tol (inches)" << endl;
	cout << "	4. Kilometri" << endl;
	cout << "	5. Metri" << endl;
	cout << "	6. Milimetri" << endl;
	cout << "	7. Mile" << endl;
	cout << "	8. Mile marine" << endl;
	cout << "	9. Yarzi" << endl;
	cout << "	10. MENIU" << endl;
	cout << endl;
	cout << endl;
	cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
	cout << "[1 - 9 / 10 - MENIU]";
	cin >> alegere1;
	while (alegere1 > 10)
	{
		cout << "Optiunea nu exista! Va rugam incercati din nou!";
		cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
		cout << "[1 - 9 / 10 - MENIU]";
		cin >> alegere1;
	}
	if (alegere1 == 10)
		system("cls");
	else
	{
		cout << "Introduceti numarul de ordine al unitatii de masura in care doriti sa convertiti!";
		cout << "[1 - 9 / 10 - MENIU]";
		cin >> alegere2;
		while (alegere2 > 10)
		{
			cout << "Optiunea nu exista! Va rugam incercati din nou!";
			cout << "Introduceti numarul de ordine al unitatii de masura din care doriti  convertiti!";
			cout << "[1 - 9 / 10 - MENIU]";
			cin >> alegere2;
		}
		if (alegere2 == 10)
			system("cls");
		else
		{
			cout << endl;
			cout << endl;
			cout << "Introduceti capacitatea pe care doriti să o convertiti:  ";
			cin >> capacitate;
			cout << endl;
			cout << "TRANSFORMARE=  " << capacitate;
			if (alegere1 == 1 && alegere2 == 2)
				capacitate = capacitate * 0.03280839895013123;
			if (alegere1 == 1 && alegere2 == 3)
				capacitate = capacitate * 0.3937007874015748;
			if (alegere1 == 1 && alegere2 == 4)
				capacitate = capacitate * 0.00001;
			if (alegere1 == 1 && alegere2 == 5)
				capacitate = capacitate * 0.01;
			if (alegere1 == 1 && alegere2 == 6)
				capacitate = capacitate * 10;
			if (alegere1 == 1 && alegere2 == 7)
				capacitate = capacitate * 0.000006213711922373339;
			if (alegere1 == 1 && alegere2 == 8)
				capacitate = capacitate * 0.000005399568034557236;
			if (alegere1 == 1 && alegere2 == 9)
				capacitate = capacitate * 0.010936130000578716;

			if (alegere1 == 2 && alegere2 == 1)
				capacitate = capacitate*30.48;
			if (alegere1 == 2 && alegere2 == 3)
				capacitate = capacitate * 12;
			if (alegere1 == 2 && alegere2 == 4)
				capacitate = capacitate*0.00030480000000000004;
			if (alegere1 == 2 && alegere2 == 5)
				capacitate = capacitate * 0.3048;
			if (alegere1 == 2 && alegere2 == 6)
				capacitate = capacitate*304.8;
			if (alegere1 == 2 && alegere2 == 7)
				capacitate = capacitate * 0.0001893939393939394;
			if (alegere1 == 2 && alegere2 == 8)
				capacitate = capacitate*0.00016457883369330455;
			if (alegere1 == 2 && alegere2 == 9)
				capacitate = capacitate * 0.3333332424176393;

			if (alegere1 == 3 && alegere2 == 1)
				capacitate = capacitate*2.54;
			if (alegere1 == 3 && alegere2 == 2)
				capacitate = capacitate * 0.083;
			if (alegere1 == 3 && alegere2 == 4)
				capacitate = capacitate*0.0000253;
			if (alegere1 == 3 && alegere2 == 5)
				capacitate = capacitate * 0.0254;
			if (alegere1 == 3 && alegere2 == 6)
				capacitate = capacitate * 25, 4;
			if (alegere1 == 3 && alegere2 == 7)
				capacitate = capacitate * 0.0000157;
			if (alegere1 == 3 && alegere2 == 8)
				capacitate = capacitate*0.0000137149028;
			if (alegere1 == 3 && alegere2 == 9)
				capacitate = capacitate * 0.02777;

			if (alegere1 == 4 && alegere2 == 1)
				capacitate = capacitate * 100000;
			if (alegere1 == 4 && alegere2 == 2)
				capacitate = capacitate * 3280.839;
			if (alegere1 == 4 && alegere2 == 3)
				capacitate = capacitate*39370.078;
			if (alegere1 == 4 && alegere2 == 5)
				capacitate = capacitate * 1000;
			if (alegere1 == 4 && alegere2 == 6)
				capacitate = capacitate * 1000000;
			if (alegere1 == 4 && alegere2 == 7)
				capacitate = capacitate * 0.621371;
			if (alegere1 == 4 && alegere2 == 8)
				capacitate = capacitate * 0.539;
			if (alegere1 == 4 && alegere2 == 9)
				capacitate = capacitate * 1093.613;


			if (alegere1 == 5 && alegere2 == 1)
				capacitate = capacitate * 100;
			if (alegere1 == 5 && alegere2 == 2)
				capacitate = capacitate * 3.2808;
			if (alegere1 == 5 && alegere2 == 3)
				capacitate = capacitate*39.37;
			if (alegere1 == 5 && alegere2 == 4)
				capacitate = capacitate * 0.001;
			if (alegere1 == 5 && alegere2 == 6)
				capacitate = capacitate * 1000;
			if (alegere1 == 5 && alegere2 == 7)
				capacitate = capacitate * 0.00062;
			if (alegere1 == 5 && alegere2 == 8)
				capacitate = capacitate *0.0005399;
			if (alegere1 == 5 && alegere2 == 9)
				capacitate = capacitate * 1.0936130;

			if (alegere1 == 6 && alegere2 == 1)
				capacitate = capacitate * 0.1;
			if (alegere1 == 6 && alegere2 == 2)
				capacitate = capacitate * 0.0032808398950131233;
			if (alegere1 == 6 && alegere2 == 3)
				capacitate = capacitate*0.03937007874015748;
			if (alegere1 == 6 && alegere2 == 4)
				capacitate = capacitate * 0.000001;
			if (alegere1 == 6 && alegere2 == 5)
				capacitate = capacitate * 0.001;
			if (alegere1 == 6 && alegere2 == 7)
				capacitate = capacitate * 6.21371192237334;
			if (alegere1 == 6 && alegere2 == 8)
				capacitate = capacitate *5.399568034557235;
			if (alegere1 == 6 && alegere2 == 9)
				capacitate = capacitate * 0.0010936130000578717;

			if (alegere1 == 7 && alegere2 == 1)
				capacitate = capacitate * 160934.4;
			if (alegere1 == 7 && alegere2 == 2)
				capacitate = capacitate * 5280;
			if (alegere1 == 7 && alegere2 == 3)
				capacitate = capacitate*63360.00000000001;
			if (alegere1 == 7 && alegere2 == 4)
				capacitate = capacitate * 1.609344;
			if (alegere1 == 7 && alegere2 == 5)
				capacitate = capacitate * 1609.344;
			if (alegere1 == 7 && alegere2 == 6)
				capacitate = capacitate * 1609344;
			if (alegere1 == 7 && alegere2 == 8)
				capacitate = capacitate *0.8689762419006479;
			if (alegere1 == 7 && alegere2 == 9)
				capacitate = capacitate * 1759.9995199651355;

			if (alegere1 == 8 && alegere2 == 1)
				capacitate = capacitate * 185200;
			if (alegere1 == 8 && alegere2 == 2)
				capacitate = capacitate * 6076.115485564304;
			if (alegere1 == 8 && alegere2 == 3)
				capacitate = capacitate*72913.38582677166;
			if (alegere1 == 8 && alegere2 == 4)
				capacitate = capacitate * 1.852;
			if (alegere1 == 8 && alegere2 == 5)
				capacitate = capacitate * 1852;
			if (alegere1 == 8 && alegere2 == 6)
				capacitate = capacitate * 1852000;
			if (alegere1 == 8 && alegere2 == 7)
				capacitate = capacitate *1.1507794480235425;
			if (alegere1 == 8 && alegere2 == 9)
				capacitate = capacitate * 2025.3712761071783;

			if (alegere1 == 9 && alegere2 == 1)
				capacitate = capacitate * 91.44002494;
			if (alegere1 == 9 && alegere2 == 2)
				capacitate = capacitate * 3.0000008182414697;
			if (alegere1 == 9 && alegere2 == 3)
				capacitate = capacitate*36.00000981889764;
			if (alegere1 == 9 && alegere2 == 4)
				capacitate = capacitate * 36.000009818897;
			if (alegere1 == 9 && alegere2 == 5)
				capacitate = capacitate * 0.9144002494;
			if (alegere1 == 9 && alegere2 == 6)
				capacitate = capacitate * 914.4002494;
			if (alegere1 == 9 && alegere2 == 7)
				capacitate = capacitate * 0.0005681819731517935;
			if (alegere1 == 9 && alegere2 == 8)
				capacitate = capacitate * 0.0004937366357451404;

			if (alegere1 == 1)  cout << "Centimetru = ";
			if (alegere1 == 2) cout << "Picioare(feets) = ";
			if (alegere1 == 3) cout << "Tol(inches) = ";
			if (alegere1 == 4) cout << "Kilometri = ";
			if (alegere1 == 5) cout << "Metri = ";
			if (alegere1 == 6) cout << "Milimetri = ";
			if (alegere1 == 7) cout << "Mile = ";
			if (alegere1 == 8) cout << "Mile maritime = ";
			if (alegere1 == 9) cout << "Yarzi = ";
			cout << capacitate;

			if (alegere2 == 1)  cout << " Centimetru";
			if (alegere2 == 2) cout << " Picioare(feets)";
			if (alegere2 == 3) cout << " Tol(inches)";
			if (alegere2 == 4) cout << " Kilometri";
			if (alegere2 == 5) cout << " Metri";
			if (alegere2 == 6) cout << " Milimetri";
			if (alegere2 == 7) cout << " Mile";
			if (alegere2 == 8) cout << " Mile maritime";
			if (alegere2 == 9) cout << " Yarzi";
			cout << endl;
			cout << endl;
			cout << "   Doriti sa efectuati alta transformare? (DA/NU)" << endl;
			cout << "   ";
			char verificare[3];
			cin >> verificare;
			if (strcmp(verificare, "NU") == 0 || strcmp(verificare, "Nu") == 0 || strcmp(verificare, "nU") == 0 || strcmp(verificare, "nu") == 0)
				alegere = 0;
			system("cls");
		}
	}
}

void Arie() 
{
	system("cls");
	cout << "												CONVERTOR" << endl;
	int alegere1 = 0, alegere2 = 0;
	long double capacitate = 0;
	cout << endl;
	cout << endl;
	cout << "		UNITATI DE MASURA PENTRU ARIE" << endl;
	cout << "	1. Ari" << endl;
	cout << "	2. Acri" << endl;
	cout << "	3. Centimetri pttrati" << endl;
	cout << "	4. Picioare(feets)" << endl;
	cout << "	5. Hectari" << endl;
	cout << "	6. Tol(inches)" << endl;
	cout << "	7. Kilometri patrati" << endl;
	cout << "	8. Metri patrati" << endl;
	cout << "	9. Milimetri patrati" << endl;
	cout << "	10. Yarzi patrati" << endl;
	cout << "	11. MENIU";
	cout << endl;
	cout << endl;
	cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
	cout << "[1 - 10 / 11 - MENIU]";
	cin >> alegere1;
	while (alegere1 > 10)
	{
		cout << "Optiunea nu exista! Va rugam incercati din nou!";
		cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
		cout << "[1 - 10 / 11 - MENIU]";
		cin >> alegere1;
	}
	if (alegere1 == 11)
		system("cls");
	else
	{
		cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
		cout << "[1 - 10 / 11 - MENIU]";
		cin >> alegere2;
		while (alegere2 == 11)
		{
			cout << "Optiunea nu exista! Va rugam incercati din nou!";
			cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
			cout << "[1 - 10 / 11 - MENIU]";
			cin >> alegere2;
		}
		if (alegere2 == 11)
			system("cls");
		else
		{
			cout << endl;
			cout << endl;
			cout << "Introduceti capacitatea pe care doriti sa o convertiti:  ";
			cin >> capacitate;
			cout << endl;
			cout << "TRANSFORMARE=  " << capacitate;
			if (alegere1 == 1 && alegere2 == 2)
				capacitate = capacitate * 0.024710539999309524;
			if (alegere1 == 1 && alegere2 == 3)
				capacitate = capacitate * 1000000;
			if (alegere1 == 1 && alegere2 == 4)
				capacitate = capacitate * 154990.70055796654;
			if (alegere1 == 1 && alegere2 == 5)
				capacitate = capacitate * 0.01;
			if (alegere1 == 1 && alegere2 == 6)
				capacitate = capacitate * 154990.70055796654;
			if (alegere1 == 1 && alegere2 == 7)
				capacitate = capacitate * 0.0001;
			if (alegere1 == 1 && alegere2 == 8)
				capacitate = capacitate * 100;
			if (alegere1 == 1 && alegere2 == 9)
				capacitate = capacitate * 100000000;
			if (alegere1 == 1 && alegere2 == 10)
				capacitate = capacitate * 119.5989394042597;

			if (alegere1 == 2 && alegere2 == 1)
				capacitate = capacitate * 40.46856119;
			if (alegere1 == 2 && alegere2 == 3)
				capacitate = capacitate * 40468561.19;
			if (alegere1 == 2 && alegere2 == 4)
				capacitate = capacitate * 6272250.649411036;
			if (alegere1 == 2 && alegere2 == 5)
				capacitate = capacitate * 0.4046856119;
			if (alegere1 == 2 && alegere2 == 6)
				capacitate = capacitate * 6272250.649411036;
			if (alegere1 == 2 && alegere2 == 7)
				capacitate = capacitate * 0.004046856119;
			if (alegere1 == 2 && alegere2 == 8)
				capacitate = capacitate * 4046.856119;
			if (alegere1 == 2 && alegere2 == 9)
				capacitate = capacitate * 4046856119;
			if (alegere1 == 2 && alegere2 == 10)
				capacitate = capacitate * 4839.996997540386;

			if (alegere1 == 3 && alegere2 == 1)
				capacitate = capacitate * 0.000001;
			if (alegere1 == 3 && alegere2 == 2)
				capacitate = capacitate * 2.4710539999309524;
			if (alegere1 == 3 && alegere2 == 4)
				capacitate = capacitate * 0.15499070055796654;
			if (alegere1 == 3 && alegere2 == 5)
				capacitate = capacitate * 1e-8;
			if (alegere1 == 3 && alegere2 == 6)
				capacitate = capacitate * 0.15499070055796654;
			if (alegere1 == 3 && alegere2 == 7)
				capacitate = capacitate * 1e-10;
			if (alegere1 == 3 && alegere2 == 8)
				capacitate = capacitate * 0.0001;
			if (alegere1 == 3 && alegere2 == 9)
				capacitate = capacitate * 100.00000000000001;
			if (alegere1 == 3 && alegere2 == 10)
				capacitate = capacitate * 0.0001195989394042597;

			if (alegere1 == 4 && alegere2 == 1)
				capacitate = capacitate * 0.0009289999999999999;
			if (alegere1 == 4 && alegere2 == 2)
				capacitate = capacitate * 0.000022956091659358545;
			if (alegere1 == 4 && alegere2 == 3)
				capacitate = capacitate * 928.9999999999999;
			if (alegere1 == 4 && alegere2 == 5)
				capacitate = capacitate * 0.000009289999999999999;
			if (alegere1 == 4 && alegere2 == 6)
				capacitate = capacitate * 143.9863608183509;
			if (alegere1 == 4 && alegere2 == 7)
				capacitate = capacitate * 9.289999999999999;
			if (alegere1 == 4 && alegere2 == 8)
				capacitate = capacitate * 0.0929;
			if (alegere1 == 4 && alegere2 == 9)
				capacitate = capacitate * 92900;
			if (alegere1 == 4 && alegere2 == 10)
				capacitate = capacitate * 0.11110741470655726;

			if (alegere1 == 5 && alegere2 == 1)
				capacitate = capacitate * 100;
			if (alegere1 == 5 && alegere2 == 2)
				capacitate = capacitate * 2.471053999930952;
			if (alegere1 == 5 && alegere2 == 3)
				capacitate = capacitate * 100000000;
			if (alegere1 == 5 && alegere2 == 4)
				capacitate = capacitate * 107642.62648008612;
			if (alegere1 == 5 && alegere2 == 6)
				capacitate = capacitate * 15499070.055796653;
			if (alegere1 == 5 && alegere2 == 7)
				capacitate = capacitate * 0.01;
			if (alegere1 == 5 && alegere2 == 8)
				capacitate = capacitate * 10000;
			if (alegere1 == 5 && alegere2 == 9)
				capacitate = capacitate * 10000000000;
			if (alegere1 == 5 && alegere2 == 10)
				capacitate = capacitate * 11959.89394042597;

			if (alegere1 == 6 && alegere2 == 1)
				capacitate = capacitate * 0.000006451999999999999;
			if (alegere1 == 6 && alegere2 == 2)
				capacitate = capacitate * 1.5943240407554505;
			if (alegere1 == 6 && alegere2 == 3)
				capacitate = capacitate * 1.5943240407554505;
			if (alegere1 == 6 && alegere2 == 4)
				capacitate = capacitate * 0.006945102260495156;
			if (alegere1 == 6 && alegere2 == 5)
				capacitate = capacitate * 6.452;
			if (alegere1 == 6 && alegere2 == 7)
				capacitate = capacitate * 6.452;
			if (alegere1 == 6 && alegere2 == 8)
				capacitate = capacitate * 0.0006452;
			if (alegere1 == 6 && alegere2 == 9)
				capacitate = capacitate * 645.2;
			if (alegere1 == 6 && alegere2 == 10)
				capacitate = capacitate * 0.0007716523570362835;

			if (alegere1 == 7 && alegere2 == 1)
				capacitate = capacitate * 10000;
			if (alegere1 == 7 && alegere2 == 2)
				capacitate = capacitate * 247.10539999309523;
			if (alegere1 == 7 && alegere2 == 3)
				capacitate = capacitate * 10000000000;
			if (alegere1 == 7 && alegere2 == 4)
				capacitate = capacitate * 10764262.648008611;
			if (alegere1 == 7 && alegere2 == 5)
				capacitate = capacitate * 100;
			if (alegere1 == 7 && alegere2 == 6)
				capacitate = capacitate * 1549907005.5796654;
			if (alegere1 == 7 && alegere2 == 8)
				capacitate = capacitate * 1000000;
			if (alegere1 == 7 && alegere2 == 9)
				capacitate = capacitate * 1000000000000;
			if (alegere1 == 7 && alegere2 == 10)
				capacitate = capacitate * 1195989.394042597;


			if (alegere1 == 8 && alegere2 == 1)
				capacitate = capacitate * 0.01;
			if (alegere1 == 8 && alegere2 == 2)
				capacitate = capacitate * 0.00024710539999309525;
			if (alegere1 == 8 && alegere2 == 3)
				capacitate = capacitate * 10000;
			if (alegere1 == 8 && alegere2 == 4)
				capacitate = capacitate * 10.764262648008613;
			if (alegere1 == 8 && alegere2 == 5)
				capacitate = capacitate * 0.0001;
			if (alegere1 == 8 && alegere2 == 6)
				capacitate = capacitate * 1549.9070055796653;
			if (alegere1 == 8 && alegere2 == 7)
				capacitate = capacitate * 0.000001;
			if (alegere1 == 8 && alegere2 == 9)
				capacitate = capacitate * 1000000;
			if (alegere1 == 8 && alegere2 == 10)
				capacitate = capacitate * 1.195989394042597;

			if (alegere1 == 9 && alegere2 == 1)
				capacitate = capacitate * 1;
			if (alegere1 == 9 && alegere2 == 2)
				capacitate = capacitate * 2.4710539999309523;
			if (alegere1 == 9 && alegere2 == 3)
				capacitate = capacitate * 0.009999999999999998;
			if (alegere1 == 9 && alegere2 == 4)
				capacitate = capacitate * 0.000010764262648008611;
			if (alegere1 == 9 && alegere2 == 5)
				capacitate = capacitate * 9.999999999999999;
			if (alegere1 == 9 && alegere2 == 6)
				capacitate = capacitate * 0.00154990700557;
			if (alegere1 == 9 && alegere2 == 7)
				capacitate = capacitate * 1;
			if (alegere1 == 9 && alegere2 == 8)
				capacitate = capacitate * 0.000001;
			if (alegere1 == 9 && alegere2 == 10)
				capacitate = capacitate * 0.000001195989394042597;

			if (alegere1 == 10 && alegere2 == 1)
				capacitate = capacitate * 0.008361278159999999;
			if (alegere1 == 10 && alegere2 == 2)
				capacitate = capacitate * 0.00020661169841803311;
			if (alegere1 == 10 && alegere2 == 3)
				capacitate = capacitate * 8361.27816;
			if (alegere1 == 10 && alegere2 == 4)
				capacitate = capacitate * 9.000299418729817;
			if (alegere1 == 10 && alegere2 == 5)
				capacitate = capacitate * 0.0000836127816;
			if (alegere1 == 10 && alegere2 == 6)
				capacitate = capacitate * 1295.9203595784254;
			if (alegere1 == 10 && alegere2 == 7)
				capacitate = capacitate * 8.361278159999999;
			if (alegere1 == 10 && alegere2 == 8)
				capacitate = capacitate * 0.836127816;
			if (alegere1 == 10 && alegere2 == 9)
				capacitate = capacitate * 836127.816;

			if (alegere1 == 1) cout << " Ari = ";
			if (alegere1 == 2) cout << " Acri = ";
			if (alegere1 == 3) cout << " Centimetri = ";
			if (alegere1 == 4) cout << " Picioare(feets) = ";
			if (alegere1 == 5) cout << " Hectari = ";
			if (alegere1 == 6) cout << " Tol(inches) = ";
			if (alegere1 == 7) cout << " Kilometri = ";
			if (alegere1 == 8) cout << " Metri = ";
			if (alegere1 == 9) cout << " Milimetri = ";
			if (alegere1 == 10) cout << "Yarzi = ";
			cout << capacitate;

			if (alegere2 == 1) cout << "Ari";
			if (alegere2 == 2) cout << "Acri";
			if (alegere2 == 3) cout << "Centimetri";
			if (alegere2 == 4) cout << "Picioare(feets)";
			if (alegere2 == 5) cout << "Hectari";
			if (alegere2 == 6) cout << "Tol(inches)";
			if (alegere2 == 7) cout << "Kilometri";
			if (alegere2 == 8) cout << "Metri";
			if (alegere2 == 9) cout << "Milimetri";
			if (alegere2 == 10) cout << "Yarzi";
			cout << endl;
			cout << endl;
			cout << "   Doriti sa efectuati alta transformare? (DA/NU)" << endl;
			cout << "   ";
			char verificare[3];
			cin >> verificare;
			if (strcmp(verificare, "NU") == 0 || strcmp(verificare, "Nu") == 0 || strcmp(verificare, "nU") == 0 || strcmp(verificare, "nu") == 0)
				alegere = 0;
			system("cls");

		}

	}
}

void Volum()
{
	system("cls");
	cout << "												CONVERTOR" << endl;
	int alegere1 = 0, alegere2 = 0;
	long double capacitate = 0;
	cout << endl;
	cout << endl;
	cout << "		UNITATI DE MASURA PENTRU VOLUM" << endl;
	cout << "	1. Centilitri" << endl;
	cout << "	2. Centimetri" << endl;
	cout << "	3. Decilitri" << endl;
	cout << "	4. Decimetri" << endl;
	cout << "	5. Picioare(feets)" << endl;
	cout << "	6. Galon (UK)" << endl;
	cout << "	7. Tol(inches)" << endl;
	cout << "	8. Litri" << endl;
	cout << "	9. Mililitri" << endl;
	cout << "	10. Metri" << endl;
	cout << "	11. MENIU";
	cout << endl;
	cout << endl;
	cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
	cout << "[1 - 10 / 11 - MENIU]";
	cin >> alegere1;
	while (alegere1 > 10)
	{
		cout << "Optiunea nu exista! Va rugam incercati din nou!";
		cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
		cout << "[1 - 10 / 11 - MENIU]";
		cin >> alegere1;
	}
	if (alegere1 == 11)
		system("cls");
	else
	{
		cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
		cout << "[1 - 10 / 11 - MENIU]";
		cin >> alegere2;
		while (alegere2 == 11)
		{
			cout << "Optiunea nu exista! Va rugam incercati din nou!";
			cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
			cout << "[1 - 10 / 11 - MENIU]";
			cin >> alegere2;
		}
		if (alegere2 == 11)
			system("cls");
		else
		{
			cout << endl;
			cout << endl;
			cout << "Introduceti capacitatea pe care doriti sa o convertiti:  ";
			cin >> capacitate;
			cout << endl;
			cout << "TRANSFORMARE=  " << capacitate;
			if (alegere1 == 1 && alegere2 == 2)
				capacitate = capacitate * 10.00000;
			if (alegere1 == 1 && alegere2 == 3)
				capacitate = capacitate * 0.1;
			if (alegere1 == 1 && alegere2 == 4)
				capacitate = capacitate * 0.01;
			if (alegere1 == 1 && alegere2 == 5)
				capacitate = capacitate * 0.00035310734;
			if (alegere1 == 1 && alegere2 == 6)
				capacitate = capacitate * 0.00219973;
			if (alegere1 == 1 && alegere2 == 7)
				capacitate = capacitate * 0.61023744;
			if (alegere1 == 1 && alegere2 == 8)
				capacitate = capacitate * 0.01;
			if (alegere1 == 1 && alegere2 == 9)
				capacitate = capacitate * 10.000;
			if (alegere1 == 1 && alegere2 == 10)
				capacitate = capacitate * 0.00001;

			if (alegere1 == 2 && alegere2 == 1)
				capacitate = capacitate * 0.0999999;
			if (alegere1 == 2 && alegere2 == 3)
				capacitate = capacitate * 0.00999;
			if (alegere1 == 2 && alegere2 == 4)
				capacitate = capacitate * 0.001;
			if (alegere1 == 2 && alegere2 == 5)
				capacitate = capacitate * 0.000035310734;
			if (alegere1 == 2 && alegere2 == 6)
				capacitate = capacitate * 0.000219973;
			if (alegere1 == 2 && alegere2 == 7)
				capacitate = capacitate * 0.061023744;
			if (alegere1 == 2 && alegere2 == 8)
				capacitate = capacitate * 0.001;
			if (alegere1 == 2 && alegere2 == 9)
				capacitate = capacitate * 1;
			if (alegere1 == 2 && alegere2 == 10)
				capacitate = capacitate * 0.000001;

			if (alegere1 == 3 && alegere2 == 1)
				capacitate = capacitate * 10;
			if (alegere1 == 3 && alegere2 == 2)
				capacitate = capacitate * 100.000;
			if (alegere1 == 3 && alegere2 == 4)
				capacitate = capacitate * 0.1;
			if (alegere1 == 3 && alegere2 == 5)
				capacitate = capacitate * 0.00353107344;
			if (alegere1 == 3 && alegere2 == 6)
				capacitate = capacitate * 0.021997;
			if (alegere1 == 3 && alegere2 == 7)
				capacitate = capacitate * 6.1023744;
			if (alegere1 == 3 && alegere2 == 8)
				capacitate = capacitate * 0.01;
			if (alegere1 == 3 && alegere2 == 9)
				capacitate = capacitate * 100.00000000000001;
			if (alegere1 == 3 && alegere2 == 10)
				capacitate = capacitate * 0.0001;

			if (alegere1 == 4 && alegere2 == 1)
				capacitate = capacitate * 100;
			if (alegere1 == 4 && alegere2 == 2)
				capacitate = capacitate * 1000.00;
			if (alegere1 == 4 && alegere2 == 3)
				capacitate = capacitate * 10;
			if (alegere1 == 4 && alegere2 == 5)
				capacitate = capacitate * 0.0353107344;
			if (alegere1 == 4 && alegere2 == 6)
				capacitate = capacitate * 0.219973603;
			if (alegere1 == 4 && alegere2 == 7)
				capacitate = capacitate * 61.023744;
			if (alegere1 == 4 && alegere2 == 8)
				capacitate = capacitate * 1;
			if (alegere1 == 4 && alegere2 == 9)
				capacitate = capacitate * 1000.0000;
			if (alegere1 == 4 && alegere2 == 10)
				capacitate = capacitate * 0.001;

			if (alegere1 == 5 && alegere2 == 1)
				capacitate = capacitate * 2832;
			if (alegere1 == 5 && alegere2 == 2)
				capacitate = capacitate * 28320.00;
			if (alegere1 == 5 && alegere2 == 3)
				capacitate = capacitate * 283.2;
			if (alegere1 == 5 && alegere2 == 4)
				capacitate = capacitate * 28.32;
			if (alegere1 == 5 && alegere2 == 6)
				capacitate = capacitate * 6.22965244;
			if (alegere1 == 5 && alegere2 == 7)
				capacitate = capacitate * 1728.19243;
			if (alegere1 == 5 && alegere2 == 8)
				capacitate = capacitate * 28.32;
			if (alegere1 == 5 && alegere2 == 9)
				capacitate = capacitate * 28320.0000;
			if (alegere1 == 5 && alegere2 == 10)
				capacitate = capacitate * 0.02832;

			if (alegere1 == 6 && alegere2 == 1)
				capacitate = capacitate * 454.59999;
			if (alegere1 == 6 && alegere2 == 2)
				capacitate = capacitate * 4546;
			if (alegere1 == 6 && alegere2 == 3)
				capacitate = capacitate * 45.45999;
			if (alegere1 == 6 && alegere2 == 4)
				capacitate = capacitate * 4.545999;
			if (alegere1 == 6 && alegere2 == 5)
				capacitate = capacitate * 0.1605225;
			if (alegere1 == 6 && alegere2 == 7)
				capacitate = capacitate * 277.4139;
			if (alegere1 == 6 && alegere2 == 8)
				capacitate = capacitate * 4.54599;
			if (alegere1 == 6 && alegere2 == 9)
				capacitate = capacitate * 4546;
			if (alegere1 == 6 && alegere2 == 10)
				capacitate = capacitate * 0.004546;

			if (alegere1 == 7 && alegere2 == 1)
				capacitate = capacitate * 1.63870639;
			if (alegere1 == 7 && alegere2 == 2)
				capacitate = capacitate * 16.387064;
			if (alegere1 == 7 && alegere2 == 3)
				capacitate = capacitate * 0.163870;
			if (alegere1 == 7 && alegere2 == 4)
				capacitate = capacitate * 0.016387064;
			if (alegere1 == 7 && alegere2 == 5)
				capacitate = capacitate * 0.00057863;
			if (alegere1 == 7 && alegere2 == 6)
				capacitate = capacitate * 0.0036047;
			if (alegere1 == 7 && alegere2 == 8)
				capacitate = capacitate * 0.016387064;
			if (alegere1 == 7 && alegere2 == 9)
				capacitate = capacitate * 16.387064;
			if (alegere1 == 7 && alegere2 == 10)
				capacitate = capacitate * 0.000016387064;

			if (alegere1 == 8 && alegere2 == 1)
				capacitate = capacitate * 100;
			if (alegere1 == 8 && alegere2 == 2)
				capacitate = capacitate * 1000;
			if (alegere1 == 8 && alegere2 == 3)
				capacitate = capacitate * 10;
			if (alegere1 == 8 && alegere2 == 4)
				capacitate = capacitate * 1;
			if (alegere1 == 8 && alegere2 == 5)
				capacitate = capacitate * 0.035310;
			if (alegere1 == 8 && alegere2 == 6)
				capacitate = capacitate * 0.219973;
			if (alegere1 == 8 && alegere2 == 7)
				capacitate = capacitate * 61.023744;
			if (alegere1 == 8 && alegere2 == 9)
				capacitate = capacitate * 1000;
			if (alegere1 == 8 && alegere2 == 10)
				capacitate = capacitate * 0.001;

			if (alegere1 == 9 && alegere2 == 1)
				capacitate = capacitate * 0.09999;
			if (alegere1 == 9 && alegere2 == 2)
				capacitate = capacitate * 1;
			if (alegere1 == 9 && alegere2 == 3)
				capacitate = capacitate * 0.009999999999999;
			if (alegere1 == 9 && alegere2 == 4)
				capacitate = capacitate * 0.001;
			if (alegere1 == 9 && alegere2 == 5)
				capacitate = capacitate * 0.000035310;
			if (alegere1 == 9 && alegere2 == 6)
				capacitate = capacitate * 0.0002199;
			if (alegere1 == 9 && alegere2 == 7)
				capacitate = capacitate * 0.061023;
			if (alegere1 == 9 && alegere2 == 8)
				capacitate = capacitate * 0.001;
			if (alegere1 == 9 && alegere2 == 10)
				capacitate = capacitate * 0.000001;

			if (alegere1 == 10 && alegere2 == 1)
				capacitate = capacitate * 99999.999;
			if (alegere1 == 10 && alegere2 == 2)
				capacitate = capacitate * 1000000;
			if (alegere1 == 10 && alegere2 == 3)
				capacitate = capacitate * 10000;
			if (alegere1 == 10 && alegere2 == 4)
				capacitate = capacitate * 1000;
			if (alegere1 == 10 && alegere2 == 5)
				capacitate = capacitate * 35.3107344;
			if (alegere1 == 10 && alegere2 == 6)
				capacitate = capacitate * 219.9736;
			if (alegere1 == 10 && alegere2 == 7)
				capacitate = capacitate * 61023.744;
			if (alegere1 == 10 && alegere2 == 8)
				capacitate = capacitate * 1000;
			if (alegere1 == 10 && alegere2 == 9)
				capacitate = capacitate * 1000000;

			if (alegere1 == 1) cout << " Centilitri = ";
			if (alegere1 == 2) cout << " Centimetri = ";
			if (alegere1 == 3) cout << " Decilitri = ";
			if (alegere1 == 4) cout << " Decimetri = ";
			if (alegere1 == 5) cout << " Picioare(feets) = ";
			if (alegere1 == 6) cout << " Galon(UK) = ";
			if (alegere1 == 7) cout << " Tol(inches) = ";
			if (alegere1 == 8) cout << " Litri = ";
			if (alegere1 == 9) cout << " Mililitri = ";
			if (alegere1 == 10) cout << "Metri = ";
			cout << capacitate;

			if (alegere2 == 1) cout << " Centilitri";
			if (alegere2 == 2) cout << " Centimetri";
			if (alegere2 == 3) cout << " Decilitri";
			if (alegere2 == 4) cout << " Decimetri";
			if (alegere2 == 5) cout << " Picioare(feets)";
			if (alegere2 == 6) cout << " Galon(UK)";
			if (alegere2 == 7) cout << " Tol(inches)";
			if (alegere2 == 8) cout << " Litri";
			if (alegere2 == 9) cout << " Mililitri";
			if (alegere2 == 10) cout << "Metri";
			cout << endl;
			cout << endl;
			cout << "   Doriti sa efectuati alta transformare? (DA/NU)" << endl;
			cout << "   ";
			char verificare[3];
			cin >> verificare;
			if (strcmp(verificare, "NU") == 0 || strcmp(verificare, "Nu") == 0 || strcmp(verificare, "nU") == 0 || strcmp(verificare, "nu") == 0)
				alegere = 0;
			system("cls");

		}

	}

		}

void Temperatura()
{
	system("cls");
	cout << "												CONVERTOR" << endl;
	int alegere1 = 0, alegere2 = 0;
	long double capacitate = 0;
	cout << endl;
	cout << endl;
	cout << "		UNITATI DE MASURA PENTRU TEMPERATURA" << endl;
	cout << "	1. Grade Celsius" << endl;
	cout << "	2. Grade Fahrenheit " << endl;
	cout << "	3. Grade Kelvin" << endl;
	cout << "	4. Grade Rankine" << endl;
	cout << "	5. MENIU";
	cout << endl;
	cout << endl;
	cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
	cout << "[1 - 4 / 5 - MENIU]";
	cin >> alegere1;

	while (alegere1 > 4)
	{
		cout << "Optiunea nu exista! Va rugam incercati din nou!";
		cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
		cout << "[1 - 4 / 5 - MENIU]";
		cin >> alegere1;
	}
	if (alegere1 == 5)
		system("cls");
	else
	{
		cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
		cout << "[1 - 4 / 5 - MENIU]";
		cin >> alegere2;
		while (alegere2 == 5)
		{
			cout << "Optiunea nu exista! Va rugam incercati din nou!";
			cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
			cout << "[1 - 4 / 5 - MENIU]";
			cin >> alegere2;
		}
		if (alegere2 == 5)
			system("cls");
		else
		{
			cout << endl;
			cout << endl;
			cout << "Introduceti capacitatea pe care doriti sa o convertiti:  ";
			cin >> capacitate;
			cout << endl;
			cout << "TRANSFORMARE=  " << capacitate;

			if (alegere1 == 1 && alegere2 == 2)
				capacitate = capacitate * 33.8;
			if (alegere1 == 1 && alegere2 == 3)
				capacitate = capacitate * 274.15;
			if (alegere1 == 1 && alegere2 == 4)
				capacitate = capacitate * 493.47;

			if (alegere1 == 2 && alegere2 == 1)
				capacitate = capacitate * -17.22222222222222;
			if (alegere1 == 2 && alegere2 == 3)
				capacitate = capacitate * 255.92777777777775;
			if (alegere1 == 2 && alegere2 == 4)
				capacitate = capacitate * 460.67;

			if (alegere1 == 3 && alegere2 == 1)
				capacitate = capacitate * -272.15;
			if (alegere1 == 3 && alegere2 == 2)
				capacitate = capacitate * -457.87;
			if (alegere1 == 3 && alegere2 == 4)
				capacitate = capacitate * 1.8000000000000114;

			if (alegere1 == 4 && alegere2 == 1)
				capacitate = capacitate * -272.59444444444443;
			if (alegere1 == 4 && alegere2 == 2)
				capacitate = capacitate * -458.66999999999996;
			if (alegere1 == 4 && alegere2 == 3)
				capacitate = capacitate * 0.5555555555555429;

			if (alegere1 == 1) cout << " Grade Celsius = ";
			if (alegere1 == 2) cout << " Grade Fahrenheit = ";
			if (alegere1 == 3) cout << " Grade Kelvin = ";
			if (alegere1 == 4) cout << " Grade Rankine = ";
			cout << capacitate;

			if (alegere1 == 1) cout << " Grade Celsius";
			if (alegere1 == 2) cout << " Grade Fahrenheit";
			if (alegere1 == 3) cout << " Grade Kelvin";
			if (alegere1 == 4) cout << " Grade Rankine";
			cout << capacitate;
			cout << endl;
			cout << endl;
			cout << "   Doriti sa efectuati alta transformare? (DA/NU)" << endl;
			cout << "   ";
			char verificare[3];
			cin >> verificare;
			if (strcmp(verificare, "NU") == 0 || strcmp(verificare, "Nu") == 0 || strcmp(verificare, "nU") == 0 || strcmp(verificare, "nu") == 0)
				alegere = 0;
			system("cls");
		}
	}
}

void Viteza()
{
	system("cls");
	cout << "											CONVERTOR" << endl;
	int alegere1 = 0, alegere2 = 0;
	long double capacitate = 0;
	cout << endl;
	cout << endl;
	cout <<	"		UNITATI DE MASURA PENTRU VITEZA" << endl;
	cout << "	1. Kilometri/Ora "<< endl;
	cout << "	2. Metri/Ora " << endl;
	cout << "	3. Metri/Secunda" << endl;
	cout << "	4. MENIU";
	cout << endl;
	cout << endl;
	cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
	cout << "[1 - 3 / 4 - MENIU]";
	cin >> alegere1;
	while (alegere1 > 3)
	{
		cout << "Optiunea nu exista! Va rugam incercati din nou!";
		cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
		cout << "[1 - 3 / 4 - MENIU]";
		cin >> alegere1;
	}
	if (alegere1 == 4)
		system("cls");
	else
	{
		cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
		cout << "[1 - 3 / 4 - MENIU]";
		cin >> alegere2;
		while (alegere2 == 4)
		{
			cout << "Optiunea nu exista! Va rugam incercati din nou!";
			cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
			cout << "[1 - 3 / 4 - MENIU]";
			cin >> alegere2;
		}
		if (alegere2 == 4)
			system("cls");
		else
		{
			cout << endl;
			cout << endl;
			cout << "Introduceti capacitatea pe care doriti sa o convertiti:  ";
			cin >> capacitate;
			cout << endl;
			cout << "TRANSFORMARE=  " << capacitate;
			if (alegere1 == 1 && alegere2 == 2)
				capacitate = capacitate * 999.9992080006334;
			if (alegere1 == 1 && alegere2 == 3)
				capacitate = capacitate * 0.27777778;

			if (alegere1 == 2 && alegere2 == 1)
				capacitate = capacitate * 0.0010000007919999938;
			if (alegere1 == 2 && alegere2 == 3)
				capacitate = capacitate * 0.000277778;

			if (alegere1 == 3 && alegere2 == 1)
				capacitate = capacitate * 3.5999999712000004;
			if (alegere1 == 3 && alegere2 == 2)
				capacitate = capacitate * 3599.9971200023037;

			if (alegere1 == 1) cout << " Kilometri/Ora = ";
			if (alegere1 == 2) cout << " Metri/Ora = ";
			if (alegere1 == 3) cout << " Metri/Secunda = ";
			cout << capacitate;

			if (alegere1 == 1) cout << " Kilometri/Ora";
			if (alegere1 == 2) cout << " Metri/Ora";
			if (alegere1 == 3) cout << " Metri/Secunda";
			cout << capacitate;
			cout << endl;
			cout << endl;
			cout << "   Doriti sa efectuati alta transformare? (DA/NU)" << endl;
			cout << "   ";
			char verificare[3];
			cin >> verificare;
			if (strcmp(verificare, "NU") == 0 || strcmp(verificare, "Nu") == 0 || strcmp(verificare, "nU") == 0 || strcmp(verificare, "nu") == 0)
				alegere = 0;
			system("cls");
		}
	}
}

void Masa()
{
	system("cls");
	cout << "												CONVERTOR" << endl;
	int alegere1 = 0, alegere2 = 0;
	long double capacitate = 0;
	cout << endl;
	cout << endl;
	cout << "		UNITATI DE MASURA PENTRU MASA" << endl;
	cout << "	1. Grame" << endl;
	cout << "	2. Kilograme" << endl;
	cout << "	3. Funte (pound)" << endl;
	cout << "	4. Miligrame" << endl;
	cout <<	"	5. Uncii(Avoirdupois)" << endl;
	cout << "	6. Uncii (Troy)" << endl;
	cout << "	7. Slug" << endl;
	cout << "	8. Tone" << endl;
	cout << "	9. MENIU";
	cout << endl;
	cout << endl;
	cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
	cout << "[1 - 8 / 9 - MENIU]";
	cin >> alegere1;
	
	while (alegere1 > 8)
	{
		cout << "Optiunea nu exista! Va rugam incercati din nou!";
		cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
		cout << "[1 - 8 / 9 - MENIU]";
		cin >> alegere1;
	}
	if (alegere1 == 9)
		system("cls");
	else
	{
		cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
		cout << "[1 - 8 / 9 - MENIU]";
		cin >> alegere2;
		while (alegere2 == 9)
		{
			cout << "Optiunea nu exista! Va rugam incercati din nou!";
			cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
			cout << "[1 - 8 / 9 - MENIU]";
			cin >> alegere2;
		}
		if (alegere2 == 9)
			system("cls");
		else
		{
			cout << endl;
			cout << endl;
			cout << "Introduceti capacitatea pe care doriti sa o convertiti:  ";
			cin >> capacitate;
			cout << endl;
			cout << "TRANSFORMARE=  " << capacitate;
			if (alegere1 == 1 && alegere2 == 2)
				capacitate = capacitate * 0.001;
			if (alegere1 == 1 && alegere2 == 3)
				capacitate = capacitate * 0.0022046244201837776;
			if (alegere1 == 1 && alegere2 == 4)
				capacitate = capacitate * 1000.0000000000001;
			if (alegere1 == 1 && alegere2 == 5)
				capacitate = capacitate * 0.03527399072294044;
			if (alegere1 == 1 && alegere2 == 6)
				capacitate = capacitate * 0.03215072258749015;
			if (alegere1 == 1 && alegere2 == 7)
				capacitate = capacitate * 0.00006852176556196105;
			if (alegere1 == 1 && alegere2 == 8)
				capacitate = capacitate * 0.000001;

			if (alegere1 == 2 && alegere2 == 1)
				capacitate = capacitate * 1000;
			if (alegere1 == 2 && alegere2 == 3)
				capacitate = capacitate * 2.2046244201837775;
			if (alegere1 == 2 && alegere2 == 4)
				capacitate = capacitate * 1000000;
			if (alegere1 == 2 && alegere2 == 5)
				capacitate = capacitate * 35.27399072294044;
			if (alegere1 == 2 && alegere2 == 6)
				capacitate = capacitate * 32.15072258749016;
			if (alegere1 == 2 && alegere2 == 7)
				capacitate = capacitate * 0.06852176556196105;
			if (alegere1 == 2 && alegere2 == 8)
				capacitate = capacitate * 0.001;
			
			if (alegere1 == 3 && alegere2 == 1)
				capacitate = capacitate * 453.592;
			if (alegere1 == 3 && alegere2 == 2)
				capacitate = capacitate * 0.453592;
			if (alegere1 == 3 && alegere2 == 4)
				capacitate = capacitate * 453592;
			if (alegere1 == 3 && alegere2 == 5)
				capacitate = capacitate * 16;
			if (alegere1 == 3 && alegere2 == 6)
				capacitate = capacitate * 14.583310559904834;
			if (alegere1 == 3 && alegere2 == 7)
				capacitate = capacitate * 0.031080924684781037;
			if (alegere1 == 3 && alegere2 == 8)
				capacitate = capacitate * 0.000453592;
			
			if (alegere1 == 4 && alegere2 == 1)
				capacitate = capacitate * 0.001;
			if (alegere1 == 4 && alegere2 == 2)
				capacitate = capacitate * 0.000001;
			if (alegere1 == 4 && alegere2 == 3)
				capacitate = capacitate * 0.0000022046244201837775;
			if (alegere1 == 4 && alegere2 == 5)
				capacitate = capacitate * 0.00003527399072294044;
			if (alegere1 == 4 && alegere2 == 6)
				capacitate = capacitate * 0.00003215072258749015;
			if (alegere1 == 4 && alegere2 == 7)
				capacitate = capacitate * 6.852176556196105;
			if (alegere1 == 4 && alegere2 == 8)
				capacitate = capacitate * 9.999999999999999;

			if (alegere1 == 5 && alegere2 == 1)
				capacitate = capacitate * 28.3495;
			if (alegere1 == 5 && alegere2 == 2)
				capacitate = capacitate * 0.0283495;
			if (alegere1 == 5 && alegere2 == 3)
				capacitate = capacitate * 0.0625;
			if (alegere1 == 5 && alegere2 == 4)
				capacitate = capacitate * 28349.5;
			if (alegere1 == 5 && alegere2 == 6)
				capacitate = capacitate * 0.9114569099940522;
			if (alegere1 == 5 && alegere2 == 7)
				capacitate = capacitate * 0.0019425577927988148;
			if (alegere1 == 5 && alegere2 == 8)
				capacitate = capacitate * 0.0000283495;
		
			if (alegere1 == 6 && alegere2 == 1)
				capacitate = capacitate * 31.103499999999997;
			if (alegere1 == 6 && alegere2 == 2)
				capacitate = capacitate * 0.0311035;
			if (alegere1 == 6 && alegere2 == 3)
				capacitate = capacitate * 0.06857153565318612;
			if (alegere1 == 6 && alegere2 == 4)
				capacitate = capacitate * 31103.5;
			if (alegere1 == 6 && alegere2 == 5)
				capacitate = capacitate * 1.097144570450978;
			if (alegere1 == 6 && alegere2 == 7)
				capacitate = capacitate * 0.0021312667351564554;
			if (alegere1 == 6 && alegere2 == 8)
				capacitate = capacitate * 0.0000311035;
			
			if (alegere1 == 7 && alegere2 == 1)
				capacitate = capacitate * 14593.902999999998;
			if (alegere1 == 7 && alegere2 == 2)
				capacitate = capacitate * 14.593903;
			if (alegere1 == 7 && alegere2 == 3)
				capacitate = capacitate * 32.17407493959329;
			if (alegere1 == 7 && alegere2 == 4)
				capacitate = capacitate * 14593903;
			if (alegere1 == 7 && alegere2 == 5)
				capacitate = capacitate * 514.7851990334926;
			if (alegere1 == 7 && alegere2 == 6)
				capacitate = capacitate * 469.20452682174033;
			if (alegere1 == 7 && alegere2 == 8)
				capacitate = capacitate * 0.014593902999999998;
			
			if (alegere1 == 8 && alegere2 == 1)
				capacitate = capacitate * 1000000;
			if (alegere1 == 8 && alegere2 == 2)
				capacitate = capacitate * 1000;
			if (alegere1 == 8 && alegere2 == 3)
				capacitate = capacitate * 2204.6244201837776;
			if (alegere1 == 8 && alegere2 == 4)
				capacitate = capacitate * 1000000000;
			if (alegere1 == 8 && alegere2 == 5)
				capacitate = capacitate * 35273.99072294044;
			if (alegere1 == 8 && alegere2 == 6)
				capacitate = capacitate * 32150.722587490156;
			if (alegere1 == 8 && alegere2 == 7)
				capacitate = capacitate * 68.52176556196105;

			if (alegere1 == 1) cout << " Grame = ";
			if (alegere1 == 2) cout << " Kilograme = ";
			if (alegere1 == 3) cout << " Funte = ";
			if (alegere1 == 4) cout << " Miligrame = ";
			if (alegere1 == 5) cout << " Uncii (Avoirdupois) = ";
			if (alegere1 == 6) cout << " Uncii (Troy) = ";
			if (alegere1 == 7) cout << " Slug = ";
			if (alegere1 == 8) cout << "  Tone = ";
			cout << capacitate;

			if (alegere2 == 1) cout << " Grame";
			if (alegere2 == 2) cout << " Kilograme";
			if (alegere2 == 3) cout << " Funte";
			if (alegere2 == 4) cout << " Miligrame";
			if (alegere2 == 5) cout << " Uncii (Avoirdupois)";
			if (alegere2 == 6) cout << " Uncii (Troy)";
			if (alegere2 == 7) cout << " Slug";
			if (alegere2 == 8) cout << "  Tone";
			cout << endl;
			cout << endl;
			cout << "   Doriti sa efectuati alta transformare? (DA/NU)" << endl;
			cout << "   ";
			char verificare[3];
			cin >> verificare;
			if (strcmp(verificare, "NU") == 0 || strcmp(verificare, "Nu") == 0 || strcmp(verificare, "nU") == 0 || strcmp(verificare, "nu") == 0)
				alegere = 0;
			system("cls");

		}

	}
			
}

void Presiune()
{
	system("cls");
	cout << "												CONVERTOR" << endl;
	int alegere1 = 0, alegere2 = 0;
	long double capacitate = 0;
	cout << endl;
	cout << endl;
	cout << "		UNITATI DE MASURA PENTRU PRESIUNE" << endl;
	cout << "	1. Bar" << endl;
	cout << "	2.  Funte pe țol pătrat(pounds per square inch) " << endl;
	cout << "	3. MENIU";
	cout << endl;
	cout << endl;
	cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
	cout << "[1 - 2 / 3 - MENIU]";
	cin >> alegere1;
	
	while (alegere1 > 2)
	{
		cout << "Optiunea nu exista! Va rugam incercati din nou!";
		cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
		cout << "[1 - 2 / 3 - MENIU]";
		cin >> alegere1;
	}
	if (alegere1 == 3)
		system("cls");
	else
	{
		cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
		cout << "[1 - 2 / 3 - MENIU]";
		cin >> alegere2;
		while (alegere2 == 3)
		{
			cout << "Optiunea nu exista! Va rugam incercati din nou!";
			cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
			cout << "[1 - 2 / 3 - MENIU]";
			cin >> alegere2;
		}
		if (alegere2 == 3)
			system("cls");
		else
		{
			cout << endl;
			cout << endl;
			cout << "Introduceti capacitatea pe care doriti sa o convertiti:  ";
			cin >> capacitate;
			cout << endl;
			cout << "TRANSFORMARE=  " << capacitate;
			if (alegere1 == 1 && alegere2 == 2)
				capacitate = capacitate * 14.213698297557126;

			if (alegere1 == 2 && alegere2 == 1)
				capacitate = capacitate * 0.07035466625683673;

			if (alegere1 == 1) cout << " Bar = ";
			if (alegere1 == 2) cout << " Funte pe tol pătrat(pounds per square inch) = ";
			cout << capacitate;

			if (alegere1 == 1) cout << " Bar";
			if (alegere1 == 2) cout << " Funte pe tol pătrat(pounds per square inch)";
			cout << capacitate;
			cout << endl;
			cout << endl;
			cout << "   Doriti sa efectuati alta transformare? (DA/NU)" << endl;
			cout << "   ";
			char verificare[3];
			cin >> verificare;
			if (strcmp(verificare, "NU") == 0 || strcmp(verificare, "Nu") == 0 || strcmp(verificare, "nU") == 0 || strcmp(verificare, "nu") == 0)
				alegere = 0;
			system("cls");
		}
	}
}

void Densitate()
{
	system("cls");
	cout << endl;
	cout << endl;
	cout << "												CONVERTOR" << endl;
	int alegere1 = 0, alegere2 = 0;
	long double capacitate = 0;
	double c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20;
	c3 = 1;
	c4 = 1000;
	c5 = 0.001;
	c6 = 0.000001;
	c7 = 0.000001;
	c8 = 0.001;
	c9 = 0.06243;
	c10 = 0.0000361273;
	c11 = 0.0083454044531;
	c12 = 0.0100224128552;
	c13 = 1000;
	c14 = 1000;
	c15 = 1000000;
	c16 = 0.160358605;
	c17 = 0.133526499;
	c18 = 0.998847369091;
	c19 = 0.000578036672;
	c20 = 0.001;
	cout << endl;
	cout << "		UNITATI DE MASURA PENTRU DENSITATE: " << endl;
	cout << "	1.Kilogram pe metru cub" << endl;
	cout << "   2.Gram pe centimetru cub" << endl;
	cout << "   3.Gram pe litru" << endl;
	cout << "   4.Gram pe metru cub" << endl;
	cout << "   5.Gram pe mililitru" << endl;
	cout << "   6.Gram pe milimetru cub" << endl;
	cout << "   7.Kilogram pe centimetru cub" << endl;
	cout << "   8.Kilogram pe litru" << endl;
	cout << "   9.Funt pe picior cub" << endl;
	cout << "   10.Funt pe țol cub" << endl;
	cout << "   11.Funt pe galon (UK)" << endl;
	cout << "   12.Funt pe galon (US)" << endl;
	cout << "   13.Miligram pe centimetru cub" << endl;
	cout << "   14.Miligram pe litru" << endl;
	cout << "   15.Miligram pe metru cub" << endl;
	cout << "   16.Uncie Avoirdupois pe galon (UK)" << endl;
	cout << "   17.Uncie Avoirdupois pe galon (US)" << endl;
	cout << "   18.Uncie Avoirdupois pe picior cub" << endl;
	cout << "   19.Uncie Avoirdupois pe țol cub" << endl;
	cout << "   20.Tona pe metru cub" << endl;
	cout << "   0.Meniu principal" << endl; 
	c2 = 0.00;
		cout << endl;
	cout << "   Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti (1-20/ 0-Meniu principal): ";
	cin >> alegere1;
	while (alegere1>20)
	{
		cout << "   Aceasta optiune nu exista! Incercati din nou!" << endl;
		cout << "   Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti (1-20/ 0-Meniu principal): ";
		cin >> alegere1;
	}
	if (alegere1 == 0)
		system("cls");
	else
	{
		cout << "   Introduceti numarul de ordine al unitatii de masura in care doriti sa convertiti (1-20/ 0-Meniu principal): ";
		cin >> alegere2;
		while (alegere2>20)
		{
			cout << "   Aceasta optiune nu exista! Incercati din nou!" << endl;
			cout << "   Introduceti numarul de ordine al unitatii de masura in care doriti sa convertiti (1-20/ 0-Meniu principal): ";
			cin >> alegere2;
		}
		if (alegere2 == 0)
			system("cls");
		else
		{
			cout << endl;
			cout << "   Introduceti capacitatea pe care doriti sa o convertiti: ";
			cin >> capacitate;
			cout << endl;
			cout << "   Rezultat: " << capacitate;
			if (alegere1 == 1)
			{
				if (alegere2 == 2)
					capacitate = capacitate * c2;
				if (alegere2 == 3)
					capacitate = capacitate * c3;
				if (alegere2 == 4)
					capacitate = capacitate * c4;
				if (alegere2 == 5)
					capacitate = capacitate * c5;
				if (alegere2 == 6)
					capacitate = capacitate * c6;
				if (alegere2 == 7)
					capacitate = capacitate * c7;
				if (alegere2 == 8)
					capacitate = capacitate * c8;
				if (alegere2 == 9)
					capacitate = capacitate * c9;
				if (alegere2 == 10)
					capacitate = capacitate * c10;
				if (alegere2 == 11)
					capacitate = capacitate * c11;
				if (alegere2 == 12)
					capacitate = capacitate * c12;
				if (alegere2 == 13)
					capacitate = capacitate * c13;
				if (alegere2 == 14)
					capacitate = capacitate * c14;
				if (alegere2 == 15)
					capacitate = capacitate * c15;
				if (alegere2 == 16)
					capacitate = capacitate*c16;
				if (alegere2 == 17)
					capacitate = capacitate*c17;
				if (alegere2 == 18)
					capacitate = capacitate*c18;
				if (alegere2 == 19)
					capacitate = capacitate*c19;
				if (alegere2 == 20)
					capacitate = capacitate*c20;
			}
			else if (alegere2 == 1)
			{
				if (alegere1 == 2)
					capacitate = capacitate / c2;
				if (alegere1 == 3)
					capacitate = capacitate / c3;
				if (alegere1 == 4)
					capacitate = capacitate / c4;
				if (alegere == 5)
					capacitate = capacitate / c5;
				if (alegere1 == 6)
					capacitate = capacitate / c6;
				if (alegere1 == 7)
					capacitate = capacitate / c7;
				if (alegere1 == 8)
					capacitate = capacitate / c8;
				if (alegere1 == 9)
					capacitate = capacitate / c9;
				if (alegere1 == 10)
					capacitate = capacitate / c10;
				if (alegere1 == 11)
					capacitate = capacitate / c11;
				if (alegere1 == 12)
					capacitate = capacitate / c12;
				if (alegere1 == 13)
					capacitate = capacitate / c13;
				if (alegere1 == 14)
					capacitate = capacitate / c14;
				if (alegere1 == 15)
					capacitate = capacitate / c15;
				if (alegere1 == 16)
					capacitate = capacitate / c16;
				if (alegere1 == 17)
					capacitate = capacitate / c17;
				if (alegere1 == 18)
					capacitate = capacitate / c18;
				if (alegere1 == 19)
					capacitate = capacitate / c19;
				if (alegere1 == 20)
					capacitate = capacitate / c20;

			}
			else
			{
				if (alegere1 == 2)
					capacitate = capacitate / c2;
				if (alegere1 == 3)
					capacitate = capacitate / c3;
				if (alegere1 == 4)
					capacitate = capacitate / c4;
				if (alegere1 == 5)
					capacitate = capacitate / c5;
				if (alegere1 == 6)
					capacitate = capacitate / c6;
				if (alegere1 == 7)
					capacitate = capacitate / c7;
				if (alegere1 == 8)
					capacitate = capacitate / c8;
				if (alegere1 == 9)
					capacitate = capacitate / c9;
				if (alegere1 == 10)
					capacitate = capacitate / c10;
				if (alegere1 == 11)
					capacitate = capacitate / c11;
				if (alegere1 == 12)
					capacitate = capacitate / c12;
				if (alegere1 == 13)
					capacitate = capacitate / c13;
				if (alegere1 == 14)
					capacitate = capacitate / c14;
				if (alegere1 == 15)
					capacitate = capacitate / c15;
				if (alegere1 == 16)
					capacitate = capacitate / c16;
				if (alegere1 == 17)
					capacitate = capacitate / c17;
				if (alegere1 == 18)
					capacitate = capacitate / c18;
				if (alegere1 == 19)
					capacitate = capacitate / c19;
				if (alegere1 == 20)
					capacitate = capacitate / c20;

				if (alegere2 == 2)
					capacitate = capacitate*c2;
				if (alegere2 == 3)
					capacitate = capacitate*c3;
				if (alegere2 == 4)
					capacitate = capacitate*c4;
				if (alegere2 == 5)
					capacitate = capacitate*c5;
				if (alegere2 == 6)
					capacitate = capacitate*c6;
				if (alegere2 == 7)
					capacitate = capacitate*c7;
				if (alegere2 == 8)
					capacitate = capacitate*c8;
				if (alegere2 == 9)
					capacitate = capacitate*c9;
				if (alegere2 == 10)
					capacitate = capacitate*c10;
				if (alegere2 == 11)
					capacitate = capacitate*c11;
				if (alegere2 == 12)
					capacitate = capacitate*c12;
				if (alegere2 == 13)
					capacitate = capacitate*c13;
				if (alegere2 == 14)
					capacitate = capacitate*c14;
				if (alegere2 == 15)
					capacitate = capacitate*c15;
				if (alegere2 == 16)
					capacitate = capacitate*c16;
				if (alegere2 == 17)
					capacitate = capacitate*c17;
				if (alegere2 == 18)
					capacitate = capacitate*c18;
				if (alegere2 == 19)
					capacitate = capacitate*c19;
				if (alegere2 == 20)
					capacitate = capacitate*c20;
			}
			if (alegere1 == 1)
				cout << " kilograme pe metru cub = ";
			if (alegere1 == 2)
				cout << " grame pe centimetru cub = ";
			if (alegere1 == 3)
				cout << " grame pe litru = ";
			if (alegere1 == 4)
				cout << " grame pe metru cub = ";
			if (alegere1 == 5)
				cout << " grame pe mililitru = ";
			if (alegere1 == 6)
				cout << " grame pe milimetru cub = ";
			if (alegere1 == 7)
				cout << " kilograme pe centimetru cub = ";
			if (alegere1 == 8)
				cout << " kilograme pe litru = ";
			if (alegere1 == 9)
				cout << " funt pe picior cub = ";
			if (alegere1 == 10)
				cout << " funt pe țol cub = ";
			if (alegere1 == 11)
				cout << " funt pe galon (UK) = ";
			if (alegere1 == 12)
				cout << " funt pe galon (US = )";
			if (alegere1 == 13)
				cout << " miligrame pe centimetru cub = ";
			if (alegere1 == 14)
				cout << " miligrame pe litru = ";
			if (alegere1 == 15)
				cout << " miligrame pe metru cub = ";
			if (alegere1 == 16)
				cout << " uncie Avoirdupois pe galon (UK) = ";
			if (alegere1 == 17)
				cout << " uncie Avoirdupois pe galon (US) = ";
			if (alegere1 == 18)
				cout << " uncie Avoirdupois pe picior cub = ";
			if (alegere1 == 19)
				cout << " uncie Avoirdupois pe țol cub = ";
			if (alegere1 == 20)
				cout << " tone pe metru cub = ";
			cout << capacitate;
			if (alegere2 == 1)
				cout << " kilograme pe metru cub";
			if (alegere2 == 2)
				cout << " grame pe centimetru cub";
			if (alegere2 == 3)
				cout << " grame pe litru";
			if (alegere2 == 4)
				cout << " grame pe metru cub";
			if (alegere2 == 5)
				cout << " grame pe mililitru";
			if (alegere2 == 6)
				cout << " grame pe milimetru cub";
			if (alegere2 == 7)
				cout << " kilograme pe centimetru cub";
			if (alegere2 == 8)
				cout << " kilograme pe litru";
			if (alegere2 == 9)
				cout << " funt pe picior cub";
			if (alegere2 == 10)
				cout << " funt pe țol cub";
			if (alegere2 == 11)
				cout << " funt pe galon (UK)";
			if (alegere2 == 12)
				cout << " funt pe galon (US)";
			if (alegere2 == 13)
				cout << " miligrame pe centimetru cub";
			if (alegere2 == 14)
				cout << " miligrame pe litru";
			if (alegere2 == 15)
				cout << " miligrame pe metru cub";
			if (alegere2 == 16)
				cout << " uncie Avoirdupois pe galon (UK)";
			if (alegere2 == 17)
				cout << " uncie Avoirdupois pe galon (US)";
			if (alegere2 == 18)
				cout << " uncie Avoirdupois pe picior cub";
			if (alegere2 == 19)
				cout << " uncie Avoirdupois pe țol cub";
			if (alegere2 == 20)
				cout << " tone pe metru cub";
			cout << endl;
			cout << endl;
			cout << "   Doriti sa efectuati alta transformare? (DA/NU)" << endl;
			cout << "   ";
			char s[3];
			cin >> s;
			if (strcmp(s, "NU") == 0 || strcmp(s, "Nu") == 0 || strcmp(s, "nU") == 0 || strcmp(s, "nu") == 0)
				alegere = 0;
			system("cls");
		}
	}
}

void Timp()
{
	system("cls");
	cout << "												CONVERTOR" << endl;
	int alegere1 = 0, alegere2 = 0;
	long double capacitate = 0;
	cout << endl;
	cout << endl;
	cout << "		UNITATI DE MASURA PENTRU TIMP" << endl;
	cout << "	1. Ora "<< endl;
	cout << "	2. Minute " << endl;
	cout << "	3. Milisecundă" << endl;
	cout << "	4. Nanosecundă "<< endl;
	cout <<	"	5. Picosecundă " << endl;
	cout << "	6. Secundă" << endl;
	cout << "	7. MENIU";
	cout << endl;
	cout << endl;
	cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
	cout << "[1 - 6 / 7 - MENIU]";
	cin >> alegere1;
	while (alegere1 > 6)
	{
		cout << "Optiunea nu exista! Va rugam incercati din nou!";
		cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
		cout << "[1 - 6 / 7 - MENIU]";
		cin >> alegere1;
	}
	if (alegere1 == 7)
		system("cls");
	else
	{
		cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
		cout << "[1 - 9 / 10 - MENIU]";
		cin >> alegere2;
		while (alegere2 == 7)
		{
			cout << "Optiunea nu exista! Va rugam incercati din nou!";
			cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
			cout << "[1 - 6 / 7 - MENIU]";
			cin >> alegere2;
		}
		if (alegere2 == 7)
			system("cls");
		else
		{
			cout << endl;
			cout << endl;
			cout << "Introduceti capacitatea pe care doriti sa o convertiti:  ";
			cin >> capacitate;
			cout << endl;
			cout << "TRANSFORMARE=  " << capacitate;
	if (alegere1 == 1 && alegere2 == 2)
	capacitate = capacitate * 60;
	if (alegere1 == 1 && alegere2 == 3)
	capacitate = capacitate * 3600000;
	if (alegere1 == 1 && alegere2 == 4)
	capacitate = capacitate * 3600000000000;
	if (alegere1 == 1 && alegere2 == 5)
	capacitate = capacitate * 3600000000000000;
	if (alegere1 == 1 && alegere2 == 6)
	capacitate = capacitate * 3600;
	
	if (alegere1 == 2 && alegere2 == 1)
	capacitate = capacitate * 0.016666666666666666;
	if (alegere1 == 2 && alegere2 == 3)
	capacitate = capacitate * 60000;
	if (alegere1 == 2 && alegere2 == 4)
	capacitate = capacitate * 60000000000;
	if (alegere1 == 2 && alegere2 == 5)
	capacitate = capacitate * 60000000000000;
	if (alegere1 == 2 && alegere2 == 6)
	capacitate = capacitate * 60;
	
	if (alegere1 == 3 && alegere2 == 1)
	capacitate = capacitate * 2.7777777777777776;
	if (alegere1 == 3 && alegere2 == 2)
	capacitate = capacitate * 0.000016666666666666667;
	if (alegere1 == 3 && alegere2 == 4)
	capacitate = capacitate * 1000000;
	if (alegere1 == 3 && alegere2 == 5)
	capacitate = capacitate * 1000000000;
	if (alegere1 == 3 && alegere2 == 6)
	capacitate = capacitate * 0.001;
	
	if (alegere1 == 4 && alegere2 == 1)
	capacitate = capacitate * 2.777777777777778;
	if (alegere1 == 4 && alegere2 == 2)
	capacitate = capacitate * 1.6666666666666667;
	if (alegere1 == 4 && alegere2 == 3)
	capacitate = capacitate * 0.000001;
	if (alegere1 == 4 && alegere2 == 5)
	capacitate = capacitate * 1000.0000000000001;
	if (alegere1 == 4 && alegere2 == 6)
	capacitate = capacitate * 1e-9;
	
	if (alegere1 == 5 && alegere2 == 1)
	capacitate = capacitate * 2.7777777777777775;
	if (alegere1 == 5 && alegere2 == 2)
	capacitate = capacitate * 1.6666666666666667;
	if (alegere1 == 5 && alegere2 == 3)
	capacitate = capacitate * 1e-9;
	if (alegere1 == 5 && alegere2 == 4)
	capacitate = capacitate * 0.001;
	if (alegere1 == 5 && alegere2 == 6)
	capacitate = capacitate * 1e-12;
	
	if (alegere1 == 6 && alegere2 == 1)
	capacitate = capacitate * 0.0002777777777777778;
	if (alegere1 == 6 && alegere2 == 2)
	capacitate = capacitate * 0.016666666666666666;
	if (alegere1 == 6 && alegere2 == 3)
	capacitate = capacitate * 1000;
	if (alegere1 == 6 && alegere2 == 4)
	capacitate = capacitate * 999999999.9999999;
	if (alegere1 == 6 && alegere2 == 5)
	capacitate = capacitate * 1000000000000;
	
	if (alegere1 == 1) cout << " Oră = ";
	if (alegere1 == 2) cout << " Minute = ";
	if (alegere1 == 3) cout << " Milisecundă = ";
	if (alegere1 == 4) cout << " Nanosecundă = ";
	if (alegere1 == 5) cout << " Picosecundă = ";
	if (alegere1 == 6) cout << " Secundă = ";
	
	cout << capacitate;

	if (alegere2 == 1) cout << "Oră";
	if (alegere2 == 2) cout << "Minute";
	if (alegere2 == 3) cout << "Milisecundă";
	if (alegere2 == 4) cout << "Nanosecundă";
	if (alegere2 == 5) cout << "Picosecundă";
	if (alegere2 == 6) cout << "Secundă";
	
	cout << endl;
	cout << endl;
	cout << "   Doriti sa efectuati alta transformare? (DA/NU)" << endl;
	cout << "   ";
	char verificare[3];
	cin >> verificare;
	if (strcmp(verificare, "NU") == 0 || strcmp(verificare, "Nu") == 0 || strcmp(verificare, "nU") == 0 || strcmp(verificare, "nu") == 0)
		alegere = 0;
	system("cls");

		}

	}
}
		
void Energie()
{
	system("cls");
	cout << "												CONVERTOR" << endl;
	int alegere1 = 0, alegere2 = 0;
	long double capacitate = 0;
	cout << endl;
	cout << endl;
	cout << "		UNITATI DE MASURA PENTRU ENERGIE" << endl;
	cout << "	1. Calorie" << endl;
	cout << "	2. Kilocalorie " << endl;
	cout << "	3. Kilojouli" << endl;
	cout << "	4. Kilowatt" << endl;
	cout <<	"	5. Watt / h " << endl;
	cout << "	6. Watt / s" << endl;
	cout << "	7. MENIU";
	cout << endl;
	cout << endl;
	cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
	cout << "[1 - 6 / 7 - MENIU]";
	cin >> alegere1;
	while (alegere1 > 6)
	{
		cout << "Optiunea nu exista! Va rugam incercati din nou!";
		cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
		cout << "[1 - 6 / 7 - MENIU]";
		cin >> alegere1;
	}
	if (alegere1 == 7)
		system("cls");
	else
	{
		cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
		cout << "[1 - 9 / 10 - MENIU]";
		cin >> alegere2;
		while (alegere2 == 7)
		{
			cout << "Optiunea nu exista! Va rugam incercati din nou!";
			cout << "Introduceti numarul de ordine al unitatii de masura din care doriti sa convertiti!";
			cout << "[1 - 6 / 7 - MENIU]";
			cin >> alegere2;
		}
		if (alegere2 == 7)
			system("cls");
		else
		{
			cout << endl;
			cout << endl;
			cout << "Introduceti capacitatea pe care doriti sa o convertiti:  ";
			cin >> capacitate;
			cout << endl;
			cout << "TRANSFORMARE=  " << capacitate;
			if (alegere1 == 1 && alegere2 == 2)
				capacitate = capacitate * 0.001;
			if (alegere1 == 1 && alegere2 == 3)
				capacitate = capacitate * 0.0041868;
			if (alegere1 == 1 && alegere2 == 4)
				capacitate = capacitate * 0.000001163;
			if (alegere1 == 1 && alegere2 == 5)
				capacitate = capacitate * 0.001163;
			if (alegere1 == 1 && alegere2 == 6)
				capacitate = capacitate * 4.1868;

			if (alegere1 == 2 && alegere2 == 1)
				capacitate = capacitate * 1000.0000000000001;
			if (alegere1 == 2 && alegere2 == 3)
				capacitate = capacitate * 4.1868;
			if (alegere1 == 2 && alegere2 == 4)
				capacitate = capacitate * 0.001163;
			if (alegere1 == 2 && alegere2 == 5)
				capacitate = capacitate * 1.163;
			if (alegere1 == 2 && alegere2 == 6)
				capacitate = capacitate * 4186.8;

			if (alegere1 == 3 && alegere2 == 1)
				capacitate = capacitate * 238.84589662749596;
			if (alegere1 == 3 && alegere2 == 2)
				capacitate = capacitate * 0.23884589662749592;
			if (alegere1 == 3 && alegere2 == 4)
				capacitate = capacitate * 0.0002777777777777778;
			if (alegere1 == 3 && alegere2 == 5)
				capacitate = capacitate * 0.2777777777777778;
			if (alegere1 == 3 && alegere2 == 6)
				capacitate = capacitate * 1000;

			if (alegere1 == 4 && alegere2 == 1)
				capacitate = capacitate * 859845.2278589854;
			if (alegere1 == 4 && alegere2 == 2)
				capacitate = capacitate * 859.8452278589854;
			if (alegere1 == 4 && alegere2 == 3)
				capacitate = capacitate * 3600;
			if (alegere1 == 4 && alegere2 == 5)
				capacitate = capacitate * 1000;
			if (alegere1 == 4 && alegere2 == 6)
				capacitate = capacitate * 3600000;

			if (alegere1 == 5 && alegere2 == 1)
				capacitate = capacitate * 859.8452278589854;
			if (alegere1 == 5 && alegere2 == 2)
				capacitate = capacitate * 0.8598452278589853;
			if (alegere1 == 5 && alegere2 == 3)
				capacitate = capacitate * 3.6;
			if (alegere1 == 5 && alegere2 == 4)
				capacitate = capacitate * 0.001;
			if (alegere1 == 5 && alegere2 == 6)
				capacitate = capacitate * 3600;

			if (alegere1 == 6 && alegere2 == 1)
				capacitate = capacitate * 0.23884589662749595;
			if (alegere1 == 6 && alegere2 == 2)
				capacitate = capacitate * 0.00023884589662749592;
			if (alegere1 == 6 && alegere2 == 3)
				capacitate = capacitate * 0.001;
			if (alegere1 == 6 && alegere2 == 4)
				capacitate = capacitate * 2.7777777777777776;
			if (alegere1 == 6 && alegere2 == 5)
				capacitate = capacitate * 0.0002777777777777778;

			if (alegere1 == 1) cout << " Calorie = ";
			if (alegere1 == 2) cout << " Kilocalorie = ";
			if (alegere1 == 3) cout << " Kilojouli = ";
			if (alegere1 == 4) cout << " Kilowatt = ";
			if (alegere1 == 5) cout << " Watt / h = ";
			if (alegere1 == 6) cout << " Watt / s= ";

			cout << capacitate;

			if (alegere2 == 1) cout << "Calorie";
			if (alegere2 == 2) cout << "Kilocalorie";
			if (alegere2 == 3) cout << "Kilojouli";
			if (alegere2 == 4) cout << "Kilowatt";
			if (alegere2 == 5) cout << "Watt / h";
			if (alegere2 == 6) cout << "Watt / s";

			cout << endl;
			cout << endl;
			cout << "   Doriti sa efectuati alta transformare? (DA/NU)" << endl;
			cout << "   ";
			char verificare[3];
			cin >> verificare;
			if (strcmp(verificare, "NU") == 0 || strcmp(verificare, "Nu") == 0 || strcmp(verificare, "nU") == 0 || strcmp(verificare, "nu") == 0)
				alegere = 0;
			system("cls");

		}

	}
}

int main()
{
	alegere = 3;
	while (alegere != 0)
	{
		cout << endl;
		cout << endl;
		cout << "                                                      CONVERTOR" << endl;
		cout << endl;
		cout << "		 OPTIUNI: " << endl;
		cout << "   1.Lungime" << endl;
		cout << "   2.Arie" << endl;
		cout << "   3.Volum" << endl;
		cout << "   4.Temperatura" << endl;
		cout << "   5.Viteza" << endl;
		cout << "   6.Masa" << endl;
		cout << "   7.Presiune" << endl;
		cout << "   8.Densitate" << endl;
		cout << "   9.Timp" << endl;
		cout << "   10.Energie" << endl;
		cout << "   0.Exit" << endl;;
		cout << endl;
		cout << "   Introduceti numarul optiunii pe care doriti sa o accesati (0-12): ";
		cin >> alegere;
		if (alegere == 1)
			Lungime();
		if (alegere == 2)
			Arie();
		if (alegere == 3)
			Volum();
		if (alegere == 4)
			Temperatura();
		if (alegere == 5)
			Viteza();
		if (alegere == 6)
			Masa();
		if (alegere == 7)
			Presiune();
		if (alegere == 8)
			Densitate();
		if (alegere == 9)
			Timp();
		if (alegere == 10)
			Energie();
		
		if (alegere>10)
		{
			system("cls");
			cout << endl;
			cout << endl;
			cout << "   Aceasta optiune nu exista! Incercati din nou!" << endl;

		}
	}
	return 0;
}
