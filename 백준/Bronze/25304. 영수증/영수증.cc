#include <iostream>

using namespace std;

int main() {
	int X, N, a, b;
	int sum = 0;
	cin >> X;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		sum = sum + (a * b);
	}
	if (sum == X) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	
	
}