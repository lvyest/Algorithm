#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    stringstream ss(my_string);
    string token;

    int result = 0;
    int num = 0;
    char op = '+'; 

    while (ss >> token) {
        if (token == "+" || token == "-") {
            op = token[0]; 
        } else {
            num = stoi(token); 
            if (op == '+') {
                result += num;
            } else if (op == '-') {
                result -= num;
            }
        }
    }

    return result;
}