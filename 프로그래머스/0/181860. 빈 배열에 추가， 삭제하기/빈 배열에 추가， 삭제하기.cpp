#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;
    for(int i = 0; i < flag.size(); i++){
        if(flag[i]) {
            for(int t = 0; t < arr[i]*2; t++){
                 answer.push_back(arr[i]);
            }
        }
        else {
            for(int t = 0; t < arr[i]; t++){
                 answer.pop_back();
            }
        }
     }
    return answer;
}