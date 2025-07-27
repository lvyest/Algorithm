#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    //v == numlist와 n 차이
    vector<int> v(numlist.size());
    for(int i = 0; i < numlist.size(); i ++){
        v[i] = abs(numlist[i] - n);
    }
    
    for(int k = 0; k < numlist.size(); k++){
        //차이 가장 적은 v 요소 찾아 answer에 삽입
        int min_val = v[0]; 
        int min_index = 0;
        for(int i = 1; i < v.size(); i++){
            if(min_val > v[i]){
                min_val = v[i];
                min_index = i;
            }
            //차이 같을 경우 numlist 요소 큰값
            else if(min_val == v[i]){
                if(numlist[min_index] < numlist[i]){
                    min_val = v[i];
                    min_index = i;
                }
            }
        }
        answer.push_back(numlist[min_index]);
        v[min_index] = 100000;
    }
    
    return answer;
}