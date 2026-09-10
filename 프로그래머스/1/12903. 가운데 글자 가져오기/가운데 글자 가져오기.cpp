#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string str = string(1, s[s.length()/2]);
    return s.length() % 2 == 0 ? string(1, s[s.length() / 2-1]) + str : str; 
}
