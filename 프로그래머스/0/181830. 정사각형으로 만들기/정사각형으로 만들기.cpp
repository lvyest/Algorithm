#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    int i = arr.size(), j = arr[0].size();
    if(i > j){
        for(int t = 0; t < i; t++) {
            for(int f = 0; f < i - j; f++){
                arr[t].push_back(0);
            }
        }
    }
    else if(i < j){
        vector<int> insert(j);
        for(int f = 0; f < j - i; f++){
            arr.push_back(insert);
        }
    }
    return arr;
}