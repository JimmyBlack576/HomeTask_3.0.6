#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    //Программа вывода линии на экран
    char symbol;
    int construction,speednum,amount,speed=0;
    cout << "Программа вывода линии на экран\n\n";
    cout << "Введите символ из которых будет построена линия -> ";
    cin >> symbol;
    cout << "\nУкажите количество символов для вашей линии -> ";
    cin >> amount;
    cout << "\n\nВыберите способ построения: \n"
        << "1. Горизонтально \n"
        << "2. Вертикально \n";
    cin >> construction;
    cout << "Выберите скорость построения: \n"
        << "1. Быстро \n"
        << "2. Нормально \n"
        << "3. Медленно \n";
    cin >> speednum;
    switch (speednum) 
    {
    case 1: {speed = 0; break; }
    case 2: {speed = 500; break; }
    case 3: {speed = 1000; break; }
    default: {cout << "Нет такой скорости!"; exit(0); }
    }
    if (construction == 1) {
        for (amount; amount != 0; amount--) {
            Sleep(speed);
            cout << symbol;
        }
    }
    else if (construction == 2) {
        for (amount; amount != 0; amount--) {
            Sleep(speed);
            cout << symbol << endl;
        }
    }
    else cout << "Неверно указан тип линии! \n";

}

