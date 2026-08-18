#include <string>
#include <vector>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    while(1){
        if((wallet[0]-bill[0]>=0 && wallet[1]-bill[1]>=0)||(wallet[1]-bill[0]>=0 && wallet[0]-bill[1]>=0)) {
            return answer;
        }
        (bill[0]>=bill[1]?bill[0]:bill[1]) /= 2; 
        answer ++;
    }
}