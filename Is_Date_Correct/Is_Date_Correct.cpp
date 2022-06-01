#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "rus");

    int day;
    int month;
    int year;

    bool leapYear = false;

    cout << "Введите дату (30 05 2022): ";
    cin >> day >> month >> year;

    if (day > 0 && day <= 31 && month > 0 && month <= 12 && year > 0)
    {
        if (year % 4 == 0)
        {
            leapYear = true;
        }
        switch (month)
        {
        case 1:
            cout << "Дата коректна.\n";
            if (day == 31)
            {
                cout << "Дата следующего дня: " << "01" << ".0" << month + 1 << "." << year;
            }
            else
            {
                cout << "Дата следующего дня: " << day + 1 << ".0" << month << "." << year;
            }
            break;
        case 2:
            if (day != 30 && day != 31)
            {
                if (leapYear)
                {
                    if (day == 29)
                    {
                        cout << "Дата коректна.\n";
                        cout << "Дата следующего дня: " << "01" << ".0" << month + 1 << "." << year;
                    }
                    else
                    {
                        cout << "Дата коректна.\n";
                        cout << "Дата следующего дня: " << day + 1 << ".0" << month << "." << year;
                    }
                }
                else
                {
                    if (day != 29)
                    {
                        if (day == 28)
                        {
                            cout << "Дата коректна.\n";
                            cout << "Дата следующего дня: " << "01" << ".0" << month + 1 << "." << year;
                        }
                        else
                        {
                            cout << "Дата коректна.\n";
                            cout << "Дата следующего дня: " << day + 1 << ".0" << month << "." << year;
                        }
                    }
                    else
                    {
                        cout << "Неправильная дата.\n";
                    }
                }
            }
            else
            {
                cout << "Неправильная дата.\n";
            }
            break;
        case 3:
            cout << "Дата коректна.\n";
            if (day == 31)
            {
                cout << "Дата следующего дня: " << "01" << ".0" << month + 1 << "." << year;
            }
            else
            {
                cout << "Дата следующего дня: " << day + 1 << ".0" << month << "." << year;
            }
            break;
        case 4:
            if (day != 31)
            {
                cout << "Дата коректна.\n";
                if (day == 30)
                {
                    cout << "Дата следующего дня: " << "01" << ".0" << month + 1 << "." << year;
                }
                else
                {
                    cout << "Дата следующего дня: " << day + 1 << ".0" << month << "." << year;
                }
            }
            else
            {
                cout << "Неправильная дата.\n";
            }
            break;
        case 5:
            cout << "Дата коректна.\n";
            if (day == 31)
            {
                cout << "Дата следующего дня: " << "01" << ".0" << month + 1 << "." << year;
            }
            else
            {
                cout << "Дата следующего дня: " << day + 1 << ".0" << month << "." << year;
            }
            break;
        case 6:
            if (day != 31)
            {
                cout << "Дата коректна.\n";
                if (day == 30)
                {
                    cout << "Дата следующего дня: " << "01" << ".0" << month + 1 << "." << year;
                }
                else
                {
                    cout << "Дата следующего дня: " << day + 1 << ".0" << month << "." << year;
                }
            }
            else
            {
                cout << "Неправильная дата.\n";
            }
            break;
        case 7:
            cout << "Дата коректна.\n";
            if (day == 31)
            {
                cout << "Дата следующего дня: " << "01" << ".0" << month + 1 << "." << year;
            }
            else
            {
                cout << "Дата следующего дня: " << day + 1 << ".0" << month << "." << year;
            }
            break;
        case 8:
            cout << "Дата коректна.\n";
            if (day == 31)
            {
                cout << "Дата следующего дня: " << "01" << ".0" << month + 1 << "." << year;
            }
            else
            {
                cout << "Дата следующего дня: " << day + 1 << ".0" << month << "." << year;
            }
            break;
        case 9:
            if (day != 31)
            {
                cout << "Дата коректна.\n";
                if (day == 30)
                {
                    cout << "Дата следующего дня: " << "01" << "." << month + 1 << "." << year;
                }
                else
                {
                    cout << "Дата следующего дня: " << day + 1 << ".0" << month << "." << year;
                }
            }
            else
            {
                cout << "Неправильная дата.\n";
            }
            break;
        case 10:
            cout << "Дата коректна.\n";
            if (day == 31)
            {
                cout << "Дата следующего дня: " << "01" << "." << month + 1 << "." << year;
            }
            else
            {
                cout << "Дата следующего дня: " << day + 1 << "." << month << "." << year;
            }
            break;
        case 11:
            if (day != 31)
            {
                cout << "Дата коректна.\n";
                if (day == 30)
                {
                    cout << "Дата следующего дня: " << "01" << "." << month + 1 << "." << year;
                }
                else
                {
                    cout << "Дата следующего дня: " << day + 1 << "." << month << "." << year;
                }
            }
            else
            {
                cout << "Неправильная дата.\n";
            }
            break;
        case 12:
            cout << "Дата коректна.\n";
            if (day == 31)
            {
                cout << "Дата следующего дня: " << "01" << "." << "01" << "." << year;
            }
            else
            {
                cout << "Дата следующего дня: " << day + 1 << "." << month << "." << year;
            }
            break;
        }
    }
    else
    {
        cout << "Неправильная дата.\n";
    }
}