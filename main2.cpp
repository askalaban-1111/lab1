#include <iostream>

using namespace std;

int main() {
    int planned;
    int completed;
    int diff;

    setlocale(LC_ALL, "Russian");
    
    cout << "Введите запланированное количество: ";
    cin >> planned;

    cout << "Введите выполненное количество: ";
    cin >> completed;

    if (planned < 0 || completed < 0) {
        cout << "Ошибка ввода данных" << endl;
    }

    diff = planned - completed;

    if (diff > 0) {
        cout << "Осталось выполнить:" << diff << endl;
    } else if (diff < 0) {
        cout << "Перевыполнено на: " << -diff << endl;
    } else {
        cout << "План выполнен точно!" << endl;
    }
    return 0;
}
