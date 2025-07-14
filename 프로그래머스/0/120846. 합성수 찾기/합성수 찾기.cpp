#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int count = 0;
    for(int i = 4; i <= n; i++){
        for(int t = 2; t < i; t++){
            if(i % t == 0) {
                count++;
                break;
            }
        }
    }
    return count;
}