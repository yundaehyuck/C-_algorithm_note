#include <iostream>
using namespace std;

int main() {

	int h, m;

	cin >> h >> m;

	int t = m - 45;

	if (t < 0) {
		t = t + 60;
		h -= 1;

		if (h < 0) {
			h += 24;
		}
	}

	cout << h << " " << t;

	return 0;
}