#include <string>
#include <vector>
#include <cmath>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    int i = 0;
    while(i < numbers.size()){
        answer += numbers[i];
        i++;
    }
    answer = answer / numbers.size();
    return answer;
}