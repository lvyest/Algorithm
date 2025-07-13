#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    
    int t = num_list.size() / n;
    for(int i=0; i<t; i++){
        vector<int> row;
        for(int k = 0; k < n ; k++){
            row.push_back(num_list[i * n + k]);
        }
        answer.push_back(row);
    }
    return answer;
}