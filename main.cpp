#include <iostream>
#include <clocale>

using namespace std;
int main() {
    setlocale(LC_ALL, "russian");

    double distance;
    double time;

    cout << "Введите расстояние в км: ";
    cin >> distance;

    cout << "Введите время в часах: ";
    cin >> time;

    if (time > 0) {
        double average = distance / time;

        cout << "Средняя скорость: " << average << endl;
    } else {
        cout << "Ошибка ввода времени" << endl;
    }
    return 0;
}


