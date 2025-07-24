#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    int x = 0, y = 0;
    int max_x = (board[0]-1) /2, max_y = (board[1]-1) /2;
    for(int i = 0; i < keyinput.size(); i ++){
        
        if(keyinput[i] == "left" && x!=max_x*(-1)) x--;
        if(keyinput[i] == "right" && x!= max_x) x++;
        if(keyinput[i] == "up"&& y!= max_y) y++;
        if(keyinput[i] == "down" && y != max_y*(-1)) y--;
    }
    return {x, y};
}