#include <string>
#include <vector>
#include <algorithm>


using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int sum = 0;
    int max = *max_element(sides.begin(), sides.end());
    int max_index = max_element(sides.begin(), sides.end())- sides.begin();
    
    for(int i = 0; i < 3; i++){
        if(i != max_index) sum += sides[i];
    }
    
    return sum > max ? 1 : 2;
}