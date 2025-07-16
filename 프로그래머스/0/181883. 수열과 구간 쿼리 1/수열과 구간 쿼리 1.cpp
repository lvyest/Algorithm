#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for(int t = 0; t < queries.size(); t++){
        int s = queries[t][0];
        int e = queries[t][1];
        for(int i = 0; i < arr.size(); i++){
            if(s <= i && i <= e) arr[i]++;
        }
    }
    return arr;
}