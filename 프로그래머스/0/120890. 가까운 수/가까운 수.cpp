#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int min = 101;
    int min_index;
    
    for(int i = 0; i < array.size(); i++){
        if(abs(array[i] - n) < min){
            min = abs(array[i]-n);
            min_index = i;        
        }
        else if(abs(array[i] - n) == min){
            if(array[i] < array[min_index]) {
                min = abs(array[i] - n);
                min_index = i;
            }
        }
    }
    return array[min_index];
}