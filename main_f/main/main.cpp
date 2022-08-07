#include <iostream>
using namespace std;



int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, c, summa, proiz, sred;

	cout << "Введите 3 числа: \n";
	cin >> a >> b >> c;

	cout << "\n\n";

	cout << "Вы ввели: " << a << ", " << b << ", " << c << "\n";
	summa = a + b + c;
	cout << "Сумма чисел равна: " << summa<<"\n";
	proiz = a * b * c;
	cout << "Произведение чисел равно: " << proiz<<'\n';
	sred = (a + b + c) / 3;
	cout << "Среднее Арифметическое чисел: " << sred<<"\n\n";
}	