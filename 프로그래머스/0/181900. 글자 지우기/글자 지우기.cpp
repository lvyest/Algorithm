#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    vector<bool> erase(my_string.size(), false);  
    
    for (int idx : indices) {
        erase[idx] = true;
    }

    string result = "";
    for (int i = 0; i < my_string.size(); i++) {
        if (!erase[i]) {
            result += my_string[i];
        }
    }

    return result;
}