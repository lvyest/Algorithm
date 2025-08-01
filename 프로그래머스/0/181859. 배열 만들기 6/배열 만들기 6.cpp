#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int i = 0;
    while(i<arr.size()){
        if(answer.empty() || (answer.back() != arr[i]))
             answer.push_back(arr[i]);
        
        else answer.pop_back();
        i++;
    }
    
    if(answer.empty()) answer.push_back(-1);
    return answer;
}