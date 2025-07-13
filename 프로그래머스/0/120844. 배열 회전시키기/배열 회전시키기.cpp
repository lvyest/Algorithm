#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    int n = numbers.size();
    
    if (direction == "right") {
        int last = numbers[n - 1];
        numbers.pop_back();
        numbers.insert(numbers.begin(), last);
    } else if (direction == "left") {
        int first = numbers[0];
        numbers.erase(numbers.begin());
        numbers.push_back(first);
    }
    
    return numbers;
}