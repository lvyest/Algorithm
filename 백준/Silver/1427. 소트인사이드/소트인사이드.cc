#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cin >> str;
    vector<int> v(str.length(), 0);

    for(int i = 0; i < str.length(); i++){
        v[i] = str[i] - '0';
    }
    for(int i = 0; i < str.length(); i++){
        int max = i;
        for(int j = i+1; j < str.length(); j++){
            if(v[j] > v[max]){
                max = j;
            }
        }
        if(v[i] < v[max]) {
            swap(v[i], v[max]);
        }
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i];
    }
}