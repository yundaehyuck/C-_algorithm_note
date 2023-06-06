#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	int T;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {

		int N;
		scanf("%d", &N);

		int answer = 0;

		for (int i = 0; i < N; i++) {
			int a;
			scanf("%d", &a);

			answer += a;
		}
		printf("%d\n", answer);
	}


	return 0;
}