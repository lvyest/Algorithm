#include<iostream>
using namespace std;

int main() {
	int H,M;

	cin >> H >> M;

	if ( M < 45 ) {
		H = H - 1;
		M = 60 - (45 - M);
		if (H < 0) {
			H = 23;
		}
	}
	else {
		M = M - 45;
	}

	cout << H <<" "<< M;

	

}