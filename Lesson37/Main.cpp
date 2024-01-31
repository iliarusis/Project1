#include <iostream>

int sum(int num1, int num2);

using namespace std;
int main() {
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	cout << sum(num1, num2, num3);
	return 0;
}
