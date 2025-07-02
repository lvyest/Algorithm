#include<iostream>
using namespace std;

int main() {
	int H,M,RM,temp1,temp2;

	cin >> H >> M;
	cin >> RM;


	if (M + RM >= 60) {
		temp1 = (RM + M) / 60;
		M = (RM + M) % 60;

		H = H + temp1;
		if (H >= 24) {
			H = H - 24;
		}
	}
	else {
		M = M + RM;
	}

	cout << H <<" "<< M;

	

}