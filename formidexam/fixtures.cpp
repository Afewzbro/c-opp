#include <iostream>
#include <iomanip>
using namespace std;
enum Basliklar
{
	GAL, MAG, BER, AV, PUAN
};
class Fikstur 
{

	size_t TAKIM_SAYISI = 3;
	int puanlar[3][5]{};
	string takimlar[3] = { "FB","GS","BJK" };
public:
	int skor1, skor2;
	char c;
	void maclar()
	{
		for (int ev = 0; ev < TAKIM_SAYISI; ev++)
		{
			for (int dep = 0; dep < TAKIM_SAYISI; dep++)
			{
				if (ev == dep) continue;
				cout << takimlar[ev] << "-" << takimlar[dep] <<" Skor: ";
				cin >> skor1 >> c >> skor2;

				//cout << "Gelen skor : " << skor1 << "-" << skor2;
				if (skor1 > skor2)
				{
					puanlar[ev][GAL]++;
					puanlar[ev][PUAN]+=3;
					puanlar[ev][AV]+=skor1-skor2;

					puanlar[dep][MAG]++;
					puanlar[dep][AV] -= skor1 - skor2;
				}
				else if(skor1 == skor2)
				{
					puanlar[ev][BER]++;
					puanlar[ev][PUAN] += 1;

					puanlar[dep][BER]++;
					puanlar[dep][PUAN] += 1;

				}
				else
				{
					puanlar[dep][GAL]++;
					puanlar[dep][PUAN] += 3;
					puanlar[dep][AV] += skor1 - skor2;

					puanlar[ev][MAG]++;
					puanlar[ev][AV] -= skor1 - skor2;

				}
			}
		}
	
	}
	void sirala()
	{
		for (int i = 0; i < TAKIM_SAYISI; i++)
		{
			for (int j = i; j < TAKIM_SAYISI; j++)
			{
				if (puanlar[j][PUAN] > puanlar[i][PUAN])
				{
					string tmp = takimlar[i];
					takimlar[i] = takimlar[j];
					takimlar[j] = tmp;
					for (size_t k = 0; k < 5; k++)
					{
						int tmp2 = puanlar[i][k];
						puanlar[i][k] = puanlar[j][k];
						puanlar[j][k] = tmp2;
					}
				}
			}
		}

	}
	void yazdir()
	{
		cout << setw(10)<<left << "TAKIM";
		cout << "G  M  B  A  P" << endl;
		for (int i = 0; i < TAKIM_SAYISI; i++)
		{
			cout << left << setw(10)<< takimlar[i];
			for (int j = 0; j < 5; j++)
			{
				cout << setw(2)<<puanlar[i][j] << " ";
			}
			cout << endl;
		}
	}


};
int main()
{
	Fikstur f;
	f.maclar();
	f.yazdir();
	f.sirala();
	f.yazdir();
}
