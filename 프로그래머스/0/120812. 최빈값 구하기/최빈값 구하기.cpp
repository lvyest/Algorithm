#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;    
    int count[1000] = {0};
    for (int num: array){
        count[num]++;
    }
    
    int maxCount = 0;
    int mode = -1;
    bool isDuplicate = false;
    
    for (int i = 0; i < 1000; i++){
        if(count[i] > maxCount){
            maxCount = count[i];
            mode = i;
            isDuplicate = false;
        } else if(count[i] == maxCount && maxCount > 0){
            isDuplicate = true;
        } 
    }
    answer = isDuplicate ? -1 : mode;         
    return answer;
}