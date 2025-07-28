#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int M, int N) {
    M = M != 1 ? M - 1 : 0;
    N = N != 1 ? (N-1) * (M+1) : 0; 
    return M+N;
}