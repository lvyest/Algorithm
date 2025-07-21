#include <string>

using namespace std;

int solution(string myString, string pat) {
    for (int i = 0; i < myString.length(); i++) {
        if (myString[i] == 'A') myString[i] = 'B';
        else if (myString[i] == 'B') myString[i] = 'A';
    }

    if (myString.length() < pat.length()) return 0;

    for (int i = 0; i <= myString.length() - pat.length(); i++) {
        bool match = true;
        for (int j = 0; j < pat.length(); j++) {
            if (myString[i + j] != pat[j]) {
                match = false;
                break;
            }
        }
        if (match) return 1;
    }

    return 0;
}