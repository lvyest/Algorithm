#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    for(int i = 0; i < str2.length(); i++){
        for(int t = 0; t < str1.length(); t++){
            if(str2[i+t] != str1[t]){
                break;
            }   
            else if(t == str1.length()-1){
                return 1;
            }
        }                                  
    }
    return 0;
}