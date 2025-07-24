#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    for(int i = 0; i < dots.size()-1; i++){
        int x, y;
        for(int t = i+1; t < dots.size(); t++){
            if(dots[i][0] != dots[t][0]) {
                x = dots[i][0] - dots[t][0];
                break;
            }
        }
        for(int t = i+1; t < dots.size(); t++){
            if(dots[i][1] != dots[t][1]) {
                y = dots[i][1] - dots[t][1];
                break;
            }
        }
        return abs(x * y);
    }
}