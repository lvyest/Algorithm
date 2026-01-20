#include <iostream>
#include <string>
using namespace std;
int solution(int n)
{
    int sum = 0;
    string s = to_string(n);
    
    for(char c : s){
        sum  += c - '0';
    }
   
    return sum;
}