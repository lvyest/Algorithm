#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    int i = bin1.size() - 1;
    int j = bin2.size() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += bin1[i--] - '0';
        if (j >= 0) sum += bin2[j--] - '0';
        answer = char('0' + (sum % 2)) + answer;
        carry = sum / 2;
    }
    return answer;
}