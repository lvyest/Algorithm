#include <string>
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string S;
    cin >> S;

    int result = 0;

    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'c' && (S[i + 1] == '=' || S[i + 1] == '-')) {
            result++;
            i++;
        }
        else if (S[i] == 'd') {
            if (S[i + 1] == 'z' && S[i + 2] == '=') {
                result++;
                i += 2;
            }
            else if (S[i + 1] == '-') {
                result++;
                i++;
            }
            else result++;
        }
        else if ((S[i] == 'l' || S[i] == 'n') && S[i + 1] == 'j') {
            result++;
            i++;
        }
        else if ((S[i] == 's' || S[i] == 'z') && S[i + 1] == '=') {
            result++;
            i++;
        }
        else {
            result++;
        }
    }

    cout << result;
}
