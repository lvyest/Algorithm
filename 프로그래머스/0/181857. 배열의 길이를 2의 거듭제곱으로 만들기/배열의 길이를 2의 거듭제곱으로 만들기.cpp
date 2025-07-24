#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {

    int i = arr.size();
    int t = 1;
    while(t < i){
        t *= 2;
    }
    while(arr.size() < t){
        arr.push_back(0);
    }
    return arr;
}