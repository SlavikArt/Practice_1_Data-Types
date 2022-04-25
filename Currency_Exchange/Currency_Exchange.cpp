#include <iostream>

using namespace std;

int main()
{
    // Программа, которая переводит HRN в USD, EUR, BTC, ETH, GOLD, SILV

    setlocale(0, "rus");

    // Variable initialization
    float hrn, usd, eur, btc, eth, gold, silv;
    const float hrn_usd = 30.25;
    const float hrn_eur = 32.41;
    const float hrn_btc = 1186660.50;
    const float hrn_eth = 87262.12;
    const float hrn_gold = 2270.35;
    const float hrn_silv = 23.093;
    // Info
    cout << "Пожалуйста, введите ГРН и я переведу их в другие валюты.\n";
    // Input
    cout << "Введите ГРН: ";
    cin >> hrn;
    // Calculate
    usd = hrn / hrn_usd;
    eur = hrn / hrn_eur;
    btc = hrn / hrn_btc;
    eth = hrn / hrn_eth;
    gold = hrn / hrn_gold;
    silv = hrn / hrn_silv;
    // Output
    cout << "USD: " << usd << "\n";
    cout << "EUR: " << eur << "\n";
    cout << "BTC: " << btc << "\n";
    cout << "ETH: " << eth << "\n";
    cout << "GOLD: " << gold << "\n";
    cout << "SILV: " << silv << "\n";
}