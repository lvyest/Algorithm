#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int count = 0;
    if(a % 2 == 0) count++;
    if(b % 2 == 0) count++;
    
    switch(count) {
        case 0:
            return a*a + b*b;
        case 1:
            return 2*(a+b);
        case 2:
            return abs(a-b);
    }
    
}