#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) {
    int answer = 0;
    for(int i = 0; i < my_string.length(); i ++){
        for(int t = 0; t < target.length(); t++){
            if(my_string[i+t] != target[t]) break;
            else if(t == target.length()-1) return 1;
        }
    }
    return 0;
}