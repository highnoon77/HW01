#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "크기를 입력하세요(양의 정수): ";
	cin >> n;

	while (n <= 0) {
		cout << "양의 정수를 입력하세요: ";
		cin >> n;
	}
	// 상단
	for (int i = 1; i <= n; ++i) { // 현재 줄 번호
		// 공백
		for (int j = 1; j <= n - i; ++j) {
			cout << " ";
		}
		// 별
		for (int k = 1; k <= 2 * i - 1; ++k) {
			cout << "*";
		}
		cout << endl;
	}
	// 하단
	for (int i = n - 1; i >= 1; --i) {
		// 공백 출력
		for (int j = 1; j <= n - i; ++j) {
			cout << " ";
		}
		// 별 출력
		for (int k = 1; k <= 2 * i - 1; ++k) {
			cout << "*";
		}
		cout << endl; // 줄 바꿈
	}
	return 0;
}