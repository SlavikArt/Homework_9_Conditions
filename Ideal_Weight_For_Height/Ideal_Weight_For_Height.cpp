#include <iostream>
#include <string>

using namespace std;

inline double idealWeight(double height, int num) {
	return height - (double)num;
}

inline string weightCalc(double weight, double ideal_weight) {
	return weight > ideal_weight ? "сбросить " + to_string((int)round(weight - ideal_weight)) : "набрать " + to_string((int)round(ideal_weight - weight));
}

int main()
{
	setlocale(0, "rus");

	char gender;

	double height;
	double weight;
	double ideal_weight;

	cout << "Введите ваш пол:\n";
	cout << "1) M - Man\n";
	cout << "2) W - Woman\n";
	cout << "3) N - Not yet decided\n";

	cin >> gender;

	cout << "Введите ваш рост: ";
	cin >> height;

	cout << "Введите ваш вес: ";
	cin >> weight;

	switch (gender)
	{
	case 'm':
	case 'M':
		ideal_weight = idealWeight(height, 100);
		cout << "Ваш идеальный вес: " << ideal_weight << "\n";
		cout << "Вам нужно " << weightCalc(weight, ideal_weight) << " кг.\n";
		break;
	case 'w':
	case 'W':
		ideal_weight = idealWeight(height, 110);
		cout << "Ваш идеальный вес: " << ideal_weight << "\n";
		cout << "Вам нужно " << weightCalc(weight, ideal_weight) << " кг.\n";
		break;
	case 'n':
	case 'N':
		cout << "Ну тогда возьмем среднее значение... (105)\n";
		ideal_weight = idealWeight(height, 105);
		cout << "Ваш идеальный вес: " << ideal_weight << "\n";
		cout << "Вам нужно " << weightCalc(weight, ideal_weight) << " кг.\n";
		break;
	default:
		cout << "По моему вы где то ошиблись :(\n";
		break;
	}
}