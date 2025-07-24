#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    bool isOdd = arr.size() % 2 == 1;

    for (int i = 0; i < arr.size(); i++) {
        if (isOdd && i % 2 == 0) {
            arr[i] += n;
        } else if (!isOdd && i % 2 == 1) {
            arr[i] += n;
        }
    }

    return arr;
}