#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string sub,g;
    double d,s,sum=0.0,dsum=0.0;

    for (int t = 0; t < 20; t++) {
        cin >> sub >> d >> g;
        if (g == "A+") s = 4.5;
        else if (g == "A0") s = 4.0;
        else if (g == "B+") s = 3.5;
        else if (g == "B0") s = 3.0;
        else if (g == "C+") s = 2.5;
        else if (g == "C0") s = 2.0;
        else if (g == "D+") s = 1.5;
        else if (g == "D0") s = 1.0;
        else if (g == "F") s = 0.0;
        else continue;
        sum += s * d;
        dsum += d;
    }
    double result = sum / dsum;
    cout << result;
}
