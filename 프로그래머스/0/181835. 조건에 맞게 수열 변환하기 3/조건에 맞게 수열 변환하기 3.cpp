#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    if(k % 2 == 0) for(int &a : arr) a+=k;
    else for(int &t : arr) t*=k;
    return arr;
}