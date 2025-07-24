#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    for(int i = 0; i < str1.length(); i++){
          for(int t = 0; t < str2.length(); t++){
              if(str1[i+t] == str2[t]) { if(t==str2.length()-1){
                  return 1;
              }
                  
              }
              else break;
         }
    }
    return 2;
}