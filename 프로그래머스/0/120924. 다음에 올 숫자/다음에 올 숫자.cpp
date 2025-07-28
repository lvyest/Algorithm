#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    for(int i = 0; i < common.size(); i++){
        if(common[i+1] - common[i] == common[common.size()-1] - common[common.size()-2]) {
            return common[common.size()-1] + common[i+1] - common[i];
        }
        else if(common[i+1]/common[i] == common[common.size()-1]/common[common.size()-2]){
            return common[common.size()-1]*common[i+1] / common[i];
        }
    }
}