#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> numbers) {
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int i = 0; i < numbers.size(); i ++){
        v[numbers[i]] = 0;
    }
    return accumulate(v.begin(), v.end(), 0);
}