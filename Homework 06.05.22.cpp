#include <iostream>
using namespace std;

int main()
{
    /*setlocale(0, "UKR");
    double km;
    double t;
    cout << "Укажите расстояние до аэропорта в километрах: ";
    cin >> km;
    cout << "Укажите время, за которое нужно доехать в минутах: ";
    cin >> t;
    double V = (km * 1000) / (t * 60) * 3.6;
    cout << "\nВам необходимо ехать со скоростью: " << V << " км/ч" << "\n";*/

    /*setlocale(0, "UKR");
    int s;
    int workday = 8 * 60 * 60;
    cout << "Укажите время в секундах, прошедшее с начала рабочего дня: ";
    cin >> s;
    int result = (workday - s) / 60 / 60;
    cout << "\nКоличество часов, которые осталось сидеть на работе: " << result << "\n";*/

    /*setlocale(0, "UKR");
    int cost;
    int amount;
    int percent;
    cout << "Укажите стоимость одного ноутбука: ";
    cin >> cost;
    cout << "Укажите количество ноутбуков: ";
    cin >> amount;
    cout << "Укажите процент скидки: ";
    cin >> percent;
    double result = (cost - (cost / 100 * percent)) * amount;
    cout << "\nОбщая сумма заказа: " << result << "\n";*/

    /*setlocale(0, "UKR");
    double cool;
    double owe;
    cout << "Укажите количество студентов, сдавших домашние задание: ";
    cin >> cool;
    cout << "Укажите количество 'должников': ";
    cin >> owe;
    double total = cool + owe;
    double result = owe * 100 / total;
    cout << "\nПроцент 'должников': " << result << "%\n";*/

    //setlocale(0, "UKR");
    //int s;
    //int day = 24 * 60 * 60;
    //cout << "Укажите время в секундах, прошедшее с начала дня: ";
    //cin >> s;
    //int result = (day - s);
    //int hours = result / 3600;
    //int minutes = result / 60 - hours * 60;
    //int seconds = result - minutes * 60 - hours * 3600;
    //cout << "\nКоличество времени, оставшееся до полуночи: " << "\nЧасы: " << hours << "\nМинуты: " << minutes << "\nСекунды: " << seconds << "\n";

    setlocale(0, "UKR");
    double hrn;
    int months;
    double percent;
    cout << "Укажите сумму депозита в гривнах: ";
    cin >> hrn;
    cout << "Укажите срок вклада в месяцах: ";
    cin >> months;
    cout << "Укажите процентную ставку за год: ";
    cin >> percent;
    percent = (percent / 100) / 12 * months;
    hrn = hrn * percent + hrn;
    cout << "\nКоличество денег в конце срока: " << hrn << "\n" << endl;

}
