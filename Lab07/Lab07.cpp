
#include <iostream>
#include <string>

using namespace std;


string ConvertToBin(int l, string result = "")
{
	if ((l / 2) == 0) {
		result = result + to_string(l % 2);
		string reversed_result = "";

		for (int i = result.length() - 1; i >= 0; i--)
			reversed_result += result[i];

		return reversed_result;
	}
	return ConvertToBin(l / 2, result + to_string(l % 2));
}
void Z1()
{
	cout << "Z1" << endl;
	cout << "Podaj liczbe: " << endl;
	int ToConvert{ 0 };
	cin >> ToConvert;
	string result = ConvertToBin(ToConvert);
	cout << result << endl;


}

int NWD(int a, int b)
{

	return b != 0 ? NWD(b, a % b) : a;
}

void Z2()
{
	cout << "Z2" << endl;
	cout << "Podaj 2 liczby: " << endl;

	int a{ 0 };
	int b{ 0 };

	cin >> a;
	cin >> b;
	cout << to_string(NWD(a, b)) << endl;
}

int fib(int n)
{
	if (n == 0)
		return 0;
	if (n == 1 || n == 2)
		return 1;
	return fib(n - 1) + fib(n - 2);

}

void Z3() {
	cout << "Z3" << endl;
	cout << "Podaj n: " << endl;
	int n{ 0 };
	cin >> n;
	int result = fib(n);
	cout << to_string(result) << endl;
}
int fact(int n)
{
	return (n == 0) ? 1 : n * fact(n - 1);
}

void Z4() {
	cout << "Z4" << endl;
	cout << "Podaj n: " << endl;
	int n{ 0 };
	cin >> n;
	int result = fact(n);
	cout << to_string(result) << endl;
}

float seq(int n) {
	switch (n)
	{
	case 1:
		return 0;
		break;
	case 2:
		return 0.5;
		break;
	default:
		if (n > 2)
		{
			return -seq(n - 1) * seq(n - 2);

		}
		else {

			cout << "Zbyt mala liczba" << endl;
			//throw invalid_argument("Zbyt mala liczba");
			return -1;
		}

		break;
	}
}

void Z5() {
	cout << "Z5" << endl;
	cout << "Podaj n: " << endl;
	int n{ 0 };
	cin >> n;
	float result = seq(n);
	cout << to_string(result) << endl;
}

int main()
{
	Z1();
	Z2();
	Z3();
	Z4();
	Z5();
}

