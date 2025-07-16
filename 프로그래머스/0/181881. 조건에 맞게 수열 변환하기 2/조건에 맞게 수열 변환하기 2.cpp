#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int x = 1;
    vector<int> flag = arr;
    
    while(true){
        // arr 규칙 반복
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] >= 50 && arr[i] % 2 == 0) arr[i] /= 2;
            if(arr[i] < 50 && arr[i] % 2 != 0) arr[i] = arr[i]*2+1;
        }
        
        // x-1과 x 의 arr 비교 
        if(arr == flag) return x-1;
        else {
            flag = arr;
            x++;   
        }
 
    }
}