#include <string>
#include <cctype>

using namespace std;

string solution(string myString) {
    for (char& c : myString) {
        if (c == 'a') {
            c = 'A';  
        } else if (isupper(c) && c != 'A') {
            c = tolower(c); 
        }
    }
    return myString;
}
