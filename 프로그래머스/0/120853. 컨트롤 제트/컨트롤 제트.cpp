#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    // 문자열을 스트림화
    stringstream ss(s);

    // 공백 분리 결과를 저장할 배열
    vector<string> words;

    string word;
    // 스트림을 한 줄씩 읽어, 공백 단위로 분리한 뒤, 결과 배열에 저장
    while (getline(ss, word, ' ')){
        words.push_back(word);
    }
    
    for(int i = 0; i < words.size(); i++){
        if(words[i] == "Z") {
            if(i != 0)
                answer -= stoi(words[i-1]);
        }
        else answer += stoi(words[i]);
    } 
    return answer;
}