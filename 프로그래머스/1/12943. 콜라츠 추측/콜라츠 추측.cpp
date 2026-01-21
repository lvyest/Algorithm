#include <iostream>

using namespace std;

int solution(int num) {
    int count = 0;
    long long n = num; 
    if(n == 1) return 0;
    
    while(n != 1 && count<500){
         if(n%2) n = n * 3 + 1;
         else n /= 2;
         count ++;
    }
    return (n == 1? count : -1);
}