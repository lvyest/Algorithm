#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> babbling) {
    vector<string> can = {"aya", "ye", "woo", "ma"};
    int count = 0;

    for (string word : babbling) {
        for (string say : can) {
            if (word.find(say) != string::npos) {
                word.replace(word.find(say), say.length(), "*");  // 임시 마커로 교체
            }
        }

        // 모든 유효 발음들이 딱 한 번씩만 제거되었는지 확인
        bool valid = true;
        for (char c : word) {
            if (c != '*') {
                valid = false;
                break;
            }
        }
        if (valid) count++;
    }

    return count;
}
