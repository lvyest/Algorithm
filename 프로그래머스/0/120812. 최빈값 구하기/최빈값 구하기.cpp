#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int n = array.size();
    vector<int>answern(n); 
    for(int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++}{
            if(array[i]==array[i+1]){
                answern[i] += 1;
            }
        }
    }
             
    sort(answern.begin(), answern.end());
    
        
             
    return answer;
}