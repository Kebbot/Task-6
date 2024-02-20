#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float s, t, v;

	cout << "Введите расстояние до Аэропорта (в км): ";
	cin >> s;
	cout << "\nВведите время за которое надо доехать (в мин): ";
	cin >> t;
	v = s / t;
	cout << "\nСкорость с которой надо ехать: ";
	cout << v << " Км/мин.";


	return 0;

}
