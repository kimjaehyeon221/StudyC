////32200983 영미인문학과 김재현 
////2-8번 문제 : cin.getline()으로 문자열 읽기 문제
//// 문제를 간결하게 풀기위해서 cstring과 string 헤더 파일을 모두 사용하여 풀었다. 
//
//#include<iostream> // 입출력을 위한 전처리기 삽입
//#include<cstring> // C 프로그래밍에서 사용해왔던 C라이브러리 함수들을 사용하기 위한 전처리기 삽입
//#include<string> // string 클래스를 사용하기 위한 헤더 파일 삽입
//using namespace std;  //using 지시어를 사용하여 std::의 생략
//
//int main() {
//	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요" << endl;
//
//	char name[100];
//	string longName;   // 가장 긴 이름을 저장하기 위한 문자열 변수 
//
//	for (int i = 0; i < 5; i++) {    //5개를 읽어야 하니 5번 루트를 돈다.
//		cin.getline(name, 100, ';'); //문제 요구 사항: cin.getline()으로 문자열 읽기 
//		cout << i + 1 << " : " << name << endl; //순서를 표시
//		if (longName.length() < strlen(name)) {  // 전의 문자열 길이와 비교하여 클 경우 + 문자열 변수의 길이는 length()로 구한다. 
//			longName = name;  // 가장 긴 이름을 현재 이름으로 대체한다.
//		}
//	}
//
//	cout << "가장 긴 이름은 " << longName << endl;
//
//	return 0;
//}