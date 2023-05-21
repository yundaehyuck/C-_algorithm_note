#include <iostream>
using namespace std;

int main() {

	int a, b, c;

	cin >> a >> b >> c;

	int t = b + c;

	a += t / 60;

	if (a >= 24) {
		a -= 24;
	}

	int m = t % 60;

	cout << a << " " << m;

	return 0;

}