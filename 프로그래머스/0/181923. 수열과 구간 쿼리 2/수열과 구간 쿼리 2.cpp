#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> result; 
    int num = 1000001;

    for (int n = 0; n < queries.size(); n++){
        for(int t = queries[n][0]; t <= queries[n][1]; t++){
            if(arr[t] > queries[n][2] && arr[t] < num) num = arr[t];
        }
        num == 1000001? result.push_back(-1) : result.push_back(num);
        num = 1000001;
    }
    return result;
}