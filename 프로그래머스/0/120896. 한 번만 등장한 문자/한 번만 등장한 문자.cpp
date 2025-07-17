#include <string>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

string solution(string s) {
    map<char, int> count;
    
    // 각 문자 등장 횟수 세기
    for (char c : s) {
        count[c]++;
    }

    set<char> resultSet;

    // 한 번만 나온 문자만 set에 저장
    for (auto p : count) {
        if (p.second == 1) {
            resultSet.insert(p.first);  // 자동으로 정렬됨
        }
    }

    // set을 문자열로 변환
    string result(resultSet.begin(), resultSet.end());
    return result;
}
