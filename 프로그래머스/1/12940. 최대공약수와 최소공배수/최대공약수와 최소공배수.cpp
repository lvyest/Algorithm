#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int min_v = min(n, m);
    int max_v = max(n, m);
    //최대공약수를 구해보자
    for(int i = min_v; i >= 1; i--){
        if(!(min_v % i) & !(max_v % i)){
            answer.push_back(i);
            break;
        }
    }
    //최소공배수를 구해보자
    for(int i = max_v; i <= max_v * min_v; i++){
        if(!(i % max_v) & !(i % min_v)){
            answer.push_back(i);
            break;
        }
    }
    return answer;
}