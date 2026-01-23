#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int min = arr[0];
    int min_i = 0;
    for(int i = 0; i < arr.size(); i++){
        if(min>arr[i]) {
            min = arr[i];
            min_i = i;
        }
    }
    arr.erase(arr.begin()+min_i);
    if(arr.empty()) arr.push_back(-1);
    return arr;
}