#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    for (char& c : my_string) {
        if (islower(c)) {
            c = toupper(c);  // 소문자 → 대문자
        } else if (isupper(c)) {
            c = tolower(c);  // 대문자 → 소문자
        }
    }
    return my_string;
}