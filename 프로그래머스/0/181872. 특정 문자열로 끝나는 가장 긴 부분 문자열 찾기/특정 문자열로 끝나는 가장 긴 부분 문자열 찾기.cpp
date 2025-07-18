#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string myString, string pat) {
    int lastIndex = -1;
    for(int i = 0; i <= myString.length() - pat.length(); i++){
        bool matched = true;
        for(int t = 0; t < pat.length(); t++){
            if(myString[i + t] != pat[t]){
                matched = false;
                break;
            }
        }
        if(matched) lastIndex = i;
    }

    if(lastIndex != -1){
        myString.erase(myString.begin() + lastIndex + pat.length(), myString.end());
    }

    return myString;
}
