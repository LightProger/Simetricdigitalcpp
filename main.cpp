#include <iostream>
using namespace std;
int main() {
    int a, b, c, d, number, f;
    cin >> number;
    a = number / 1000;
    b = number / 100 % 10;
    c = number / 10 % 10;
    d = number % 10;
    f = (a - d) * (a - d) + (b - c) * (b - c) + 1;
    cout << f << endl;
    return 0;
}