////32200983 영미인문학과 김재현 
////2-12 
////C++에서는 함수의 원형 선언에 매개 변수를 모두 선언하여야 한다는 점을 고려한 문제 풀이.
//
//#include<iostream> // 입출력을 위한 전처리기 삽입
//using namespace std;  //using 지시어를 사용하여 std::의 생략
//
//int sum(int a, int b); //C++에서는 함수의 원형 선언에 매개 변수를 모두 선언하여야 한다. 
//
//int main() {
//	int n = 0;
//	cout << "끝 수를 입력하세요>>"; //표준 출력 스트림 객체
//	cin >> n; //표준 입력 스트림 객체
//	cout << "1에서 " << n << "까지의 합은 " << sum(1, n) << "입니다." << endl; 
//
//	return 0;
//}
//
//int sum(int a, int b) {  //총합을 구하는 함수
//	int k, res = 0;
//	for (k = a; k <= b; k++) {
//		res += k;
//	}
//
//	return res;
//}