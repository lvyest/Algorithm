#include <iostream>
#include <string>
using namespace std;

int checkArr[4];
int currentArr[4];
int check = 0;

void Add(char c){
    switch (c){
        case 'A' : 
            currentArr[0]++;
            if(currentArr[0] == checkArr[0]) check++;
        break;
        case 'C': 
            currentArr[1]++;
            if(currentArr[1]== checkArr[1]) check++;
        break;
        case 'G' : 
            currentArr[2]++;
            if(currentArr[2] == checkArr[2]) check++;
        break;
        case 'T' : 
            currentArr[3]++;
            if(currentArr[3] == checkArr[3]) check++;
        break;
    }
}

void Remove(char c){
    switch (c){
        case 'A' : 
            if(currentArr[0] == checkArr[0]) check--;
            currentArr[0]--;
        break;
        case 'C': 
            if(currentArr[1]== checkArr[1]) check--;
            currentArr[1]--;
        break;
        case 'G' : 
            if(currentArr[2] == checkArr[2]) check--;
            currentArr[2]--;
        break;
        case 'T' : 
            if(currentArr[3] == checkArr[3]) check--;
            currentArr[3]--;
        break;
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int S, P, result = 0;
    string s;
    cin >> S >> P;
    cin >> s;
    
    for(int i = 0; i < 4; i++){
        cin >> checkArr[i]; 
        if(checkArr[i] == 0) check++; // 조건이 0? 무조건 만족

    }

    //첫 윈도우 
    for(int i = 0; i < P; i++){
        Add(s[i]);
    }
    if(check == 4){
        result ++;
    }

    for(int i = P; i < S; i++){
        int j = i - P;
        Add(s[i]);
        Remove(s[j]);

        if(check == 4){
            result ++;
        }
    }
    cout << result << '\n';
    return 0;
}

