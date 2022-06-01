﻿#include <iostream>
#include <string>

using namespace std;

int myRandom(int min, int max) {
	int k = max - min + 1;
	return rand() % k + min;
}

void giveMoney(int i, int *mon, int *fix_mon) {
	switch (i)
	{
	case 1:
		*mon = 500;
		break;
	case 2:
		*mon = 1000;
		break;
	case 3:
		*mon = 2000;
		break;
	case 4:
		*mon = 3000;
		break;
	case 5:
		*mon = 5000;
		*fix_mon = *mon;
		break;
	case 6:
		*mon = 10000;
		break;
	case 7:
		*mon = 15000;
		break;
	case 8:
		*mon = 25000;
		break;
	case 9:
		*mon = 50000;
		break;
	case 10:
		*mon = 100000;
		*fix_mon = *mon;
		break;
	case 11:
		*mon = 200000;
		break;
	case 12:
		*mon = 400000;
		break;
	case 13:
		*mon = 800000;
		break;
	case 14:
		*mon = 1500000;
		break;
	case 15:
		*mon = 3000000;
		*fix_mon = *mon;
		break;
	}
}

int main()
{
	setlocale(0, "rus");
	srand(time(0));
	rand();

	const int SIZE1 = 15;
	const int SIZE2 = 2;
	const int SIZE3 = 5;

	string arr[SIZE1][SIZE2][SIZE3]
	{
		{
			{"Какая кошка самая большая на планете?",
			"Лев", "Тигр", "Гепард", "Барс"},
			{"2", "0", "1", "0", "0"}
		},
		{
			{"Какое сухопутное животное может открыть рот максимально широко?",
			"Аллигатор", "Крокодил", "Бабуин", "Бегемот"},
			{"2", "0", "0", "0", "1"}
		},
		{
			{"Какое животное самое крупное на Земле?",
			"Африканский слон", "Синий кит", "Кашалот", "Гигантский кальмар"},
			{"2", "0", "1", "0", "0"}
		},
		{
			{"Какое млекопитающее умеет летать?",
			"Летучая мышь", "Белка-летяга", "Белоголовый орлан", "Колуго"},
			{"2", "1", "0", "0", "0"}
		},
		{
			{"Как называется животное, которое употребляет в пищу растения и мясо?",
			"Плотоядное животное", "Травоядное животное", "Всеядное животное", "Пескатариан"},
			{"2", "0", "0", "1", "0"}
		},
		{
			{"Почему каланы («морские выдры») держатся за руки?",
			"Потому что они любят друг друга", "Чтобы показать, что они в одной семье", "Чтобы они не уплывали, когда спят", "Потому что они играют"},
			{"2", "0", "0", "1", "0"}
		},
		{
			{"Как отличить насекомое от паука?",
			"У насекомых три части тела, у пауков – две", "У насекомых шесть ног, у пауков – восемь", "У насекомых могут быть крылья, у пауков они отсутствуют", "Все вышеперечисленные факты"},
			{"2", "0", "0", "0", "1"}
		},
		{
			{"Чем утконос отличается от других млекопитающих?",
			"Крякает, как утка", "Откладывает яйца", "Строит гнезда", "Ковыляет"},
			{"2", "0", "1", "0", "0"}
		},
		{
			{"Почему змеи высовывают язык?",
			"Чтобы напугать хищников", "Чтобы облизать добычу", "Чтобы издать шипящий звук", "Чтобы «понюхать» воздух"},
			{"2", "0", "0", "0", "1"}
		},
		{
			{"Как называется явление, обозначающее, что на Земле не осталось ни одного животного конкретного вида?",
			"Эволюция", "Сохранение", "Вымирание", "Находящиеся под угрозой исчезновения"},
			{"2", "0", "0", "1", "0"}
		},
		{
			{"Какая планета самая большая в Солнечной системе?",
			"Юпитер", "Сатурн", "Нептун", "Меркурий"},
			{"2", "1", "0", "0", "0"}
		},
		{
			{"На какой планете самый короткий день?",
			"Меркурий", "Земля", "Нептун", "Юпитер"},
			{"2", "0", "0", "0", "1"}
		},
		{
			{"Какая звезда ближе всего к Земле?",
			"Полярная звезда", "Сириус", "Солнце", "Андромеда"},
			{"2", "0", "0", "1", "0"}
		},
		{
			{"Как называется метеорит, который упал на Землю 15 февраля 2013 года?",
			"Тунгусский", "Челябинский", "Гоба", "Альенде"},
			{"2", "0", "1", "0", "0"}
		},
		{
			{"Когда состоялся первый в мире полет человека в космос?",
			"12 апреля 1961 года", "19 марта 1965 года", "12 июня 1956 года", "10 сентября 1973 года"},
			{"2", "1", "0", "0", "0"}
		}
	};

	string answer;
	int money = 0;
	int fixed_money = 0;
	int n = 0;

	for (int i = 0; i < SIZE1; i++)
	{
		int answer = 0;

		n = myRandom(0, SIZE1 - 1);

		while (arr[n][0][0] == "0")
		{
			n = myRandom(0, SIZE1 - 1);
		}
		
		cout << i + 1 << "]" << arr[n][0][0] << "\n\n";

		int j = 1;

		for (j; j < SIZE3; j++)
		{
			cout << j << ")" << arr[n][0][j] << "\n";
		}

		cout << "\nВведите: ";
		cin >> answer;

		if (arr[n][1][answer] == "1")
		{
			cout << "\nВерно!\n\n";
			giveMoney(i + 1, &money, &fixed_money);
			cout << "Теперь у вас " << money << " грн.!\n\n";
			if ((i + 1) % 5 == 0)
			{
				if ((i + 1) == 15)
				{
					cout << "ПОЗДРАВЛЯЮ!!! ВЫ СЧАСТЛИВЧИК!!!\n\n";
					cout << "ВЫ ВЫИГРАЛИ 3000000 ГРН.!!!\n\n";
				}
				else
				{
					cout << "А также, ваша несогораемая сумма " << fixed_money << " грн.!\n\n";
				}
			}
		}
		else if (fixed_money != 0)
		{
			cout << "\nУвы, это неверный ответ.\n";
			cout << "Вы выиграли " << fixed_money << " грн. ответив на " << i << " вопросов!\n";
			cout << "Может в следующий раз вам повезет больше!\n";
			break;
		}
		else
		{
			cout << "\nУвы, это неверный ответ.\n";
			cout << "И вы ничего не выиграли\n";
			cout << "Может в следующий раз вам повезет больше!\n";
			break;
		}

		arr[n][0][0] = "0";

		system("pause");
		system("cls");
	}
}