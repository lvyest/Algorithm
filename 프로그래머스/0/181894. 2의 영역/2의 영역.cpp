#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int begin = -1, end = -1; //시작, 끝 인덱스
    
    //2 탐색
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 2) {
            if(begin >= 0) end = i;
            else begin = i;
        }
    }

    if(begin >= 0){
        if(end >=0){
            for(int i = begin; i <= end; i++){
                answer.push_back(arr[i]);
            }
        } 
        else answer.push_back(2);
    }
    else answer.push_back(-1);
    
    return answer;
}