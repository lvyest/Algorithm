#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<int> food) {
    string answer = "", oneeat = "";
    for(int i = 1; i < food.size(); i++){ 
        food[i] /= 2;
        for(int j = 0; j < food[i]; j++){ 
            oneeat += i + '0';
        }
    }
    answer += oneeat + '0';
    reverse(oneeat.begin(), oneeat.end());
    return answer+oneeat;
}