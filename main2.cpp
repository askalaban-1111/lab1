#include <iostream>

using namespace std;

int main() {
    unsigned int planned;
    int completed;

    cout << "Введите запланированное количество: ";
    cin >> planned;

    cout << "Введите выполненное количество: ";
    cin >> completed;

    int diff = static_cast<int>(planned) - completed;

    if (diff > 0) {
        cout << "Осталось выполнить:" << diff << endl;
    } else if (diff < 0) {
        cout << "Перевыполнено на: " << -diff << endl;
    } else {
        cout << "План выполнен точно!" << endl;
    }
    return 0;
}
