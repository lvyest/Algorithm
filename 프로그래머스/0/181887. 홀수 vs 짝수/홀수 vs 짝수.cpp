#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int val1 = 0, val2 = 0;
    for(int i = 0; i< num_list.size(); i++){
        if(i % 2 == 0){
            val1 += num_list[i];
        }
        else {
            val2 += num_list[i];
        }
    }
    return val1 > val2 ? val1 : val2;
}