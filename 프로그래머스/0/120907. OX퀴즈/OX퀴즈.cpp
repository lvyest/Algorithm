#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;

    for (const string& q : quiz) {
        stringstream ss(q);  
        int x, y, z;
        char op, eq;

        ss >> x >> op >> y >> eq >> z;

        int result = (op == '+') ? (x + y) : (x - y);

        if (result == z) {
            answer.push_back("O");
        } else {
            answer.push_back("X");
        }
    }

    return answer;
}