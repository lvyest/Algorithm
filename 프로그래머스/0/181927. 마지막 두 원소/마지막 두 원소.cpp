#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int end = num_list[num_list.size()-1];
    int send = num_list[num_list.size()-2];
    if (end > send) {
        num_list.push_back(end - send);
    } else {
        num_list.push_back(end * 2);
    }

    return num_list;
}