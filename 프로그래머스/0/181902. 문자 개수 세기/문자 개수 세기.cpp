#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> result(52, 0); 

    for (char c : my_string) {
        if ('A' <= c && c <= 'Z') {
            result[c - 'A']++;
        }
        else if ('a' <= c && c <= 'z') {
            result[c - 'a' + 26]++;
        }
    }

    return result;
}