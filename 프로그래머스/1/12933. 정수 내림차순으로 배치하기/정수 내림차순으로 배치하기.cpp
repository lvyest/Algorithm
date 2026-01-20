#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    string s= to_string(n);
    vector<int> v;
    for (char c : s){
        v.push_back(c-'0');
    }
    sort(v.begin(), v.end(), greater<int>());
    
    s = "";
    for(int i = 0; i < v.size(); i++){
        s += to_string(v[i]);
    }
    
    return stoll(s);
}