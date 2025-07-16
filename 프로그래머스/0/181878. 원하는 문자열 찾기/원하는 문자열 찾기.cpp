#include <string>
#include <vector>
#include <cctype>

using namespace std;

int solution(string myString, string pat) {
    for(int i = 0; i < myString.length(); i++){
        myString[i] = tolower(myString[i]);
    }
    for(int i = 0; i < pat.length(); i++){
        pat[i] = tolower(pat[i]);

    }
    if(myString.length()>=pat.length()){
        for(int i = 0; i < myString.length()-pat.length()+1; i++){
            for(int t = 0; t < pat.length(); t++){
                if(myString[i + t]!=pat[t]) break;
                else if(t == pat.length()-1){return 1;}
            }  
        }
    }

    return 0;
}