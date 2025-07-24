#include <string>
#include <sstream>
using namespace std;

string solution(string polynomial) {
    stringstream ss(polynomial);
    string token;
    int x_sum = 0;
    int num_sum = 0;

    while (ss >> token) {
        if (token == "+") continue; // 연산자는 건너뜀

        if (token.find('x') != string::npos) {
            // 일차항
            if (token == "x") {
                x_sum += 1; // 계수 생략된 경우 1
            } else {
                x_sum += stoi(token.substr(0, token.find('x')));
            }
        } else {
            // 상수항
            num_sum += stoi(token);
        }
    }

    // 결과 조립
    if (x_sum == 0) return to_string(num_sum); // 일차항 없음
    if (num_sum == 0) {
        return x_sum == 1 ? "x" : to_string(x_sum) + "x";
    }

    // 일차항과 상수항 모두 있는 경우
    string x_part = x_sum == 1 ? "x" : to_string(x_sum) + "x";
    return x_part + " + " + to_string(num_sum);
}
