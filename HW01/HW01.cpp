#include <iostream>
using namespace std;

// 5. 배열 원소들의 합계를 반환하는 함수
int sum(int arr[5]) {
	int s = 0;
	for (int i = 0; i < 5; i++) {
		s += arr[i];
	}
	return s;
}

// 6. 배열 원소들의 평균을 반환하는 함수
double avg(int arr[5]) {
	return sum(arr) / 5.0;
}

int main() {
	// 1~2. 사용자로부터 5개의 숫자를 입력받아 배열에 저장
	int nums[5];
	cout << "숫자 5개를 입력하세요: ";
	for (int i = 0; i < 5; i++) {
		cin >> nums[i];
	}

	// 3~4. 합계와 평균 계산 및 출력
	int total = sum(nums);
	double average = avg(nums);

	// 7. 함수 호출 결과 출력
	cout << "합계: " << total << endl;
	cout << "평균: " << average << endl;

	return 0;
}