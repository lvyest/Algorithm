#include<iostream>
using namespace std;

int main() {
	int A, B;

	cin >> A >> B;
	
	int temp1, temp2, temp3;
	temp3 = A * (B / 100);
	temp2 = A * (B / 10 - temp3 / A * 10);
	temp1 = A * (B - (temp2 / A * 10 + temp3 / A * 100));


	cout << temp1 << endl << temp2 << endl << temp3 << endl << A*B;
}