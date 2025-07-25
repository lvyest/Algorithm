#include <string>
#include <algorithm>

using namespace std;

string solution(string a, string b) {
    string answer = "";
    int carry = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        //만약 인덱스가 음수면 문자열이 끝났다는 의미 → 0으로 처리해 다른 숫자와 더해도 그대로 
        int digitA = (i >= 0) ? a[i--] - '0' : 0;
        int digitB = (j >= 0) ? b[j--] - '0' : 0;
        int sum = digitA + digitB + carry;
        carry = sum / 10;
        answer += (sum % 10) + '0';
    }

    reverse(answer.begin(), answer.end());
    return answer;
}