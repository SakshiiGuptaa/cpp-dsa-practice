#include <iostream>
#include <cstdio>
#include <iomanip>
#include <string>
using namespace std;

int getDecimalPlaces(const string& s) {
    size_t dot = s.find('.');
    if (dot == string::npos) return 0;
    return s.size() - dot - 1;
}

int main() {
    int a;
    long b;
    char c;
    string ds, es;  // read float and double as strings first

    cin >> a >> b >> c >> ds >> es;

    float d = stof(ds);
    double e = stod(es);

    int dPrec = getDecimalPlaces(ds);
    int ePrec = getDecimalPlaces(es);

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << fixed << setprecision(dPrec) << d << endl;
    cout << fixed << setprecision(ePrec) << e << endl;

    return 0;
}