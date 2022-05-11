//Celsius - Fahrenayt:
#include <iostream>
using namespace std;

class Temp {
public:
	void celsius() {
		double celsius, fahrenayt, celsiusDonusum, fahrenaytDonusum;

		celsiusDonusum = fahrenayt * 33.8;
		cout << "Celsius Degerini Giriniz : " << endl;
		cin >> celsius;
	}

	void fahrenayt() {
		double celsius, fahrenayt, celsiusDonusum, fahrenaytDonusum;

		fahrenaytDonusum = celsius / 33.8;
		cout << "Fahrenayt Degerini Giriniz : " << endl;
		cin >> fahrenayt;
	}
};

int main()
{
	Temp temp1;
	double celsius, fahrenayt, celsiusDonusum, fahrenaytDonusum;

	temp1.celsius();
	temp1.fahrenayt();

	cout << "Girdiginiz Celsius Degeri : " << fahrenaytDonusum << " askdhsgafdsfdsfsghas Fahrenayt'tir." << endl;
	cout << "Girdiginiz Fahrenayt Degeri : " << celsiusDonusum << " Celsius'tur. " << endl;
}