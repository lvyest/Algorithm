#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> result = {n};
    while(n!=1){
        result.push_back(n % 2 == 0 ? n/=2 : n=3*n+1);
    }
    return result;
}