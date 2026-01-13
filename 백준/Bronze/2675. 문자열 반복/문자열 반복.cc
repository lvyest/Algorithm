#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int t ;
    cin >> t;

    while(t--){
        int n; 
        string str;
        cin >> n >> str;
        
        string result = "";
        for( int i = 0; i < str.length(); i++){
            for(int j = 0; j < n; j++) result += str[i];
        }
        cout << result << "\n";
    }

    return 0;
}
