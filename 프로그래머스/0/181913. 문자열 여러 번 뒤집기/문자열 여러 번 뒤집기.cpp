#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    for (int t = 0; t < queries.size(); t++ ){
        int s = queries[t][0];
        int e = queries[t][1];
        reverse(my_string.begin()+s,my_string.begin()+e+1);

}
    return my_string;
}