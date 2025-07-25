#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    set<int> s; 
    // 가장 긴 변
    int i = max(sides[0], sides[1]); 
    while(i < sides[0] + sides[1]){
        s.insert(i);
        i++;
    }
    
    // 긴 변 X
    int t = max(sides[0], sides[1]) - 1;
    while(max(sides[0], sides[1]) < min(sides[0], sides[1]) + t && t > 0){
        s.insert(t);
        t--;
    }
    
    return s.size();
}