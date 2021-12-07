#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int f(int a) {
    int x, y;
    x = 1;
    y = 1;
    int b;
    if (a == 1) {
        return 1;
    }
    else if (a == 2) {
        return 1;
    }
    else if (a >= 3) {
        for (int i = 2; i < a; i++) {
            b = x + y;
            x = y;
            y = b;
        }
    }
    else { return 0; }
    return b;
}
int main() {
    setlocale(LC_ALL, "Rus");
    int a;
    cin >> a;
    cout << f(a);
}