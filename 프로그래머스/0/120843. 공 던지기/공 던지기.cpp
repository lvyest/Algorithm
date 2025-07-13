#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int t = 0;
    for(int i = 1; i < k; i++) {
        t = (t + 2) % numbers.size();  
    }
    return numbers[t];
}