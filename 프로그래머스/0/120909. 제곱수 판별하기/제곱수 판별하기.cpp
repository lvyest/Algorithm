#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    for(int i = 2; i <= n/2; i++){
         if((double)n / i == (double)i) return 1;
}
    return 2;
}