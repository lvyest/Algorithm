#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int big_w = 0, big_h = 0;
    for(int i = 0; i < sizes.size(); i++){
            int w = sizes[i][0], h = sizes[i][1];
            if(w > h) {
                if(big_w < h) { big_w = h; }
                if(big_h < w) { big_h = w; }
            } else {
                if(big_w < w) { big_w = w; }
                if(big_h < h) { big_h = h; }
            }
    }
    
    return big_w * big_h;
}