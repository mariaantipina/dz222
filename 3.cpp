#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int d(int n) {
    int c = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            c += i;
        }
    }
    return c;
}
int main() {
    setlocale(LC_ALL, "Rus");
    for (int i = 1; i <= 10000; i++) {
        int x = d(i);
        if (x <= i) continue;
        if (i == d(x) && x <= 10000) {
            cout << i << endl;
            cout << x << endl;
        }
    }
}