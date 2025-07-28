#include <string>
#include <vector>

using namespace std;

int solution(string before, string after) {
    for(int i = 0; i < before.length(); i ++){
        size_t index = after.find(before[i]);
        if(index != string::npos){
            after.replace(index,1,"*");  
        }
        else return 0;
    }
    
    return 1;
}