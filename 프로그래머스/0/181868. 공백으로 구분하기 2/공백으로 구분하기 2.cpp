#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    istringstream ss(my_string);
    string word;

    while (ss >> word) { 
        answer.push_back(word);
    }

    return answer;
}