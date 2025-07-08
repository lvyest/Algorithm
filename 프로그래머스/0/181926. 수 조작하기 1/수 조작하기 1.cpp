#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    for (char s : control){
        if(s == 'w') n++;
        else if( s=='s') n--;
        else if( s=='d') n+=10;
        else n-=10;
    } 
    return n;
}