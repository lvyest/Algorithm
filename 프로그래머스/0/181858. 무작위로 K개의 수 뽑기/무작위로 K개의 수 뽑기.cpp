#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    int count = k;
    for(int i = 0; i < arr.size(); i++){
        if(count == 0) break;
        else if(find(answer.begin(),answer.end(),arr[i]) == answer.end()) {
            answer.push_back(arr[i]); 
            count--;
        }
    }
    
     while(count > 0){
         answer.push_back(-1);
         count--;
     }

    return answer;
}