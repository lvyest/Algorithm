#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for (int n = 0; n < queries.size(); n++){
        int temp = arr[queries[n][0]];
        arr[queries[n][0]] = arr[queries[n][1]];
        arr[queries[n][1]] = temp;
    } 
    return arr;
}