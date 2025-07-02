#include<iostream>
using namespace std;

int main() {
	int D1, D2, D3, reward;

	cin >> D1 >> D2 >> D3;


	if (D1 == D2) {
		if (D1 != D3) {
			//D3만 틀림
			reward = 1000 + (D1 * 100);
		}
		else {
			// 모두 같음
			reward = 10000 + (D1 * 1000);
		}
	}
	else if (D1 == D3) {
		// D2만 틀림
		reward = 1000 + (D1 * 100);
	}
	else if (D2 == D3) {
		// D1만 틀림
		reward = 1000 + (D2 * 100);
	}
	else {
		// 다 틀림
		if (D1 > D2 && D1 > D3) {
			// D1이 제일큼
			reward = D1 * 100;
		}
		else if (D2 > D1 && D2 > D3) {
			// D2가 제일 큼
			reward = D2 * 100;
		}
		else {
			// D3이 제일 큼
			reward = D3 * 100;
		}
	}
	
	cout << reward;
}