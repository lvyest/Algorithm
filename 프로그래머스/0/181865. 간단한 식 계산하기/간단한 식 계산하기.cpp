#include <string>
#include <sstream>
#include <vector>

using namespace std;

int solution(string binomial) {
    stringstream ss(binomial);
    int a, b;
    char op;

    ss >> a >> op >> b;

    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;

    return 0; 
}