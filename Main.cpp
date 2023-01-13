#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "ukr");
    int n; // days
    double speed = 1.5; // speed (m)
    double total = 0.0;
    cout << "Введiть цiле число n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (i != 0)
            speed += 0.2; // 20см
        total += speed;
    }
    cout << "Черепаха проповзла: " << total << "m. За " << n << " Днiв\n";
    return 0;
}
