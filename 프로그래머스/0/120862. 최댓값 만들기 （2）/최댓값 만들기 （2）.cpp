#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int max = -100000001;
    for(int i = 0; i < numbers.size()-1; i++){
        for(int t = i+1; t < numbers.size(); t++){
            int var = numbers[i] * numbers[t];
            if(var > max) {max = var;}
        }
    }
    return max;
}