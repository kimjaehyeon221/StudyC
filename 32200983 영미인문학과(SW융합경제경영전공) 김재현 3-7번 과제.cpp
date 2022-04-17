////32200983 영미인문학과 김재현 
////3-7번 과제
////클래스 작성에서 매개 변수를 가진 생성자의 활용. 
////느낀점: 조건문에서 지역 변수와 전역 변수에서 오류를 겪음. 랜덤 함수의 사용법과 생성자의 멤버 변수 초기화의 중요성 파악하였다. 
//
//#include <iostream> //입출력을 위한 전처리
//#include <cstdlib>   //무작위 함수를 사용하기 위한 전처리 
//#include <ctime> //무작위 함수를 사용하기 위한 전처리 
//#include <string>  //짝수와 홀수 글자를 string 으로 받기 위한 전처리이다. 
//using namespace std;
//
//class SelectableRandom {
//private: //멤버 변수는 private로 지정하였다. 
//	int x = 0;
//	int select = 0;
//public: //생성자는 public으로 
//	SelectableRandom(int c);
//	int next();
//	int nextInRange(int a, int b);
//};
//
//SelectableRandom::SelectableRandom(int c)  { //클래스 작성에서 매개 변수를 가진 생성자의 활용. 
//	srand((unsigned)time(0)); //프로그램이 실행될 때 마다 현재의 시간으로 변환되는 씨드값을 준다. 
//	select = c;
//}
//
//int SelectableRandom::next(){
//	if (select == 0) { //select가 0이라는 것은 짝수를 반환하기 원한다는 뜻이다. 
//		int x = rand();
//		if (x % 2 == 1) {  //나머지가 1이라면 홀수를 의미한다. 따라서 짝수 값을 반환하기 위해 여기에 1을 더해준다. 
//			x = x + 1;
//		}
//		return x;
//	}
//	else {  //select가 1이라는 것은 홀수를 반환하기 원한다는 뜻이다. 
//		int x = rand();
//		if (x % 2 == 0) {  //나머지가 0이라면 짝수를 의미한다. 따라서 홀수 값을 반환하기 위해 여기에 1을 더해준다. 
//			x = x + 1;  //만약 0이라면 -1을 할 경우 음수를 반환할 수도 있으므로 +1을 해준다. 
//		}
//		return x;
//	}
//}
//
//int SelectableRandom::nextInRange(int a, int b) {  //범위가 지정되어있는 경우 랜덤 숫자의 호출. 
//	
//	if (select == 0) {  //select가 0이라는 것은 짝수를 반환하기 원한다는 뜻이다. 
//		int x = rand() % (b - a + 1) + a;  //범위가 지정되어있는 경우 랜덤 숫자의 호출. 
//		if (x % 2 == 1) {
//			x = x + 1;
//		}
//		return x;
//	}
//	else {  //홀수 일 때.
//		int x = rand() % (b - a + 1) + a;
//		if (x % 2 == 0) {
//			x = x + 1;  //나머지가 0이라면 짝수를 의미한다. 따라서 홀수 값을 반환하기 위해 여기에 1을 더해준다. 
//		}    //만약 0이라면 -1을 할 경우 음수를 반환할 수도 있으므로 +1을 해준다.
//		return x;
//	}
//}
//
//
//int main() {
//
//	string ChoiceResult;
//
//	do {
//		cout << "짝수와 홀수 중 하나를 선택하여 입력하세요 : ";
//		getline(cin, ChoiceResult);  //getline을 이용하여 ChoiceResult를 받기 
//
//		if (ChoiceResult == "짝수") {
//			SelectableRandom r(0);  //짝수면 인자는 0이다.
//			cout << "--0에서" << RAND_MAX << "까지의 랜덤 " << ChoiceResult << " 정수 10개-- " << endl;
//			for (int i = 0; i < 10; i++) {
//				int n = r.next();
//				cout << n << ' ';
//			}
//			cout << endl << endl << "--2에서" << "9 까지의 랜덤 " << ChoiceResult << " 정수 10개 -- " << endl;
//			for (int i = 0; i < 10; i++) {
//				int n = r.nextInRange(2, 9);
//				cout << n << ' ';
//			}
//			cout << endl;
//		}
//		else if (ChoiceResult == "홀수") {
//			SelectableRandom r(1); //홀수면 인자는 1이다. 
//			cout << "--0에서" << RAND_MAX << "까지의 랜덤 " << ChoiceResult << " 정수 10개-- " << endl;
//			for (int i = 0; i < 10; i++) {
//				int n = r.next();
//				cout << n << ' ';
//			}
//			cout << endl << endl << "--2에서" << "9 까지의 랜덤 " << ChoiceResult << " 정수 10개 -- " << endl;
//			for (int i = 0; i < 10; i++) {
//				int n = r.nextInRange(2, 9);
//				cout << n << ' ';
//			}
//			cout << endl;
//		}
//		else {
//			cout << "짝수와 홀수 글자를 제대로 입력하시오" << endl;
//		}
//	} while (ChoiceResult != "짝수"  &&  ChoiceResult != "홀수"); //do while을 이용하여서 짝수와 홀수가 아닌 다른 값을 바르면 다시 하기. 
//
//}