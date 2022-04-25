#include <iostream>

using namespace std;

int main()
{
    /* Программа, которая считает сколько денег уходит на корм,
    за день, месяц, год. */

    setlocale(0, "rus");
    
    // Variable initialization
    int amount_of_pets;
    float gr_per_day, kg_price, per_day, per_month, per_year;
    // Info
    cout << "Эта программа считает сколько денег уходит на корм за день, месяц, год.\n";
    // Input
    cout << "Введите колличество домашних питомцев: ";
    cin >> amount_of_pets;
    cout << "Введите среднее колличество гр корма, необходимого каждому питомцу на день: ";
    cin >> gr_per_day;
    cout << "Введите цену корма за 1 кг: ";
    cin >> kg_price;
    // Calculate
    per_day = (amount_of_pets * gr_per_day) / 1000 * kg_price;
    per_month = 31 * per_day;
    per_year = 12 * per_month;
    // Output
    cout << "Денег на корм за день: " << per_day << "\n";
    cout << "Денег на корм за месяц: " << per_month << "\n";
    cout << "Денег на корм за год: " << per_year << "\n";
}