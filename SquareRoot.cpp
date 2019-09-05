#include "iostream"
#include "vector"
using namespace std;

void Root(double a)
{
	double epicilon = 0.00001;
	double low = 0;
	double high = a;
	double mid = (high + low) / 2;

	while (abs(pow(mid, 2) - a) >= epicilon)
	{
		if (pow(mid, 2) < a)
		{
			low = mid;
		}
		else
		{
			high = mid;
		}
		mid = (high + low) / 2;
	}
	cout << "Квадратный корень числа " << a << " равен " << mid << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");
	int X;
	cout << "Введите число, квадратный корень которого необходимо вычислить:\n";
	cin >> X;
	Root(X);
	return 0;
}