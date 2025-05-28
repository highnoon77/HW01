#include <iostream>
using namespace std;

int sum(int arr[5]) {     // 배열을 받아 합계를 구하는 함수 (정수형 반환)
	int s = 0;            // 합계를 저장할 변수 s를 0으로 초기화
	for (int i = 0; i < 5; i++)  // 배열의 5개 요소를 하나씩 더함
		s += arr[i];      // s = s + arr[i]; 와 같은 뜻
	return s;             // 최종 합계를 반환
}

double avg(int arr[5]) {  // 배열을 받아 평균을 구하는 함수 (실수형 반환)
	return sum(arr) / 5.0; // sum 함수 결과를 5.0으로 나누어 평균 계산
	// 5가 아닌 5.0으로 나누는 이유는 실수 평균을 얻기 위함
}

int main() {              // 메인 함수 (프로그램 시작 지점)
	int nums[5];          // 정수 5개를 저장할 배열 선언

	cout << "숫자 5개 입력: ";  // 사용자에게 입력 안내 메시지 출력
	for (int i = 0; i < 5; i++) // 5번 반복하면서
		cin >> nums[i];   // 사용자로부터 숫자 하나 입력받아 배열에 저장

	int total = sum(nums);      // sum 함수 호출해서 합계를 구해 total에 저장
	double average = avg(nums); // avg 함수 호출해서 평균을 구해 average에 저장

	cout << "합계: " << total << endl;    // 합계 출력
	cout << "평균: " << average << endl;  // 평균 출력

	return 0;                // 프로그램 정상 종료

}


