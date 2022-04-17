////32200983 영미인문학과 김재현 
////4-11번 과제
////객체 배열의 응용 : 클래스 CoffeeVendingMachine은 클래스 Container을 이용한다. 이때 클래스 내의 private, public은 사용가능한 메소드와 필드를 알려준다. 
//// 문제에서 주어진 요구사항에 더하여 if else문과 switch문을 이용하여 fill 함수의 선택사항과 음료를 선택할 때 어떤 원료가 부족한지를 구현하였다. 
//// 느낀점 : 기초적인 논리곱과 논리합을 헷갈려하여 이를 다시 복습하였다. 
//
//#include <iostream> 
//using namespace std;
//
//
//class Container { //통 하나를 나타내는 클래스 
//	int size; //현재 저장 량, 최대 저장량은 10
//public: //Conteainer의 생성자나 멤버함수는 모두 크기가 작으므로 클래스의 선언부에 직접 구현하였다. 
//	Container() { size = 10; }
//	void fill(int x) { size = x; } //최대량(10)으로 채우기 
//	void consume(int y) { size = size - y; } //1만큼 소모하기 
//	int getSize() { return size; } //현재 크기 리턴 
//};
//
//
//class CoffeeVendingMachine { //커피자판기를 표현하는 클래스 
//	Container tong[3]; // tong[0]은 커피, tong[1]은 물, tong[2]은 설탕통 -> 객체 배열을 선언한다. 이때 객체 배열 선언문은 오직 매개 변수 없는 기본 생성자를 호출한다. 
//	// 3개의 Container 객체가 생성된다. 
//	void fill();
//	void selectEspresso();
//	void selectAmericano();
//	void selectSugarCoffee();
//	void show();
//public:
//	void run();
//};
//
//void CoffeeVendingMachine::fill() {  //switch 함수를 이용하여 전체 재우기 메뉴를 비롯하여 각 원료들을 따로 채울 수 있도록 제작하였다. 
//
//	int menu = 0;
//
//	cout << "[채우기] 어떤 원료를 채우겠습니까.(1:커피, 2:물, 3:설탕, 4: 전체 ) >> ";
//	cin >> menu;
//
//	switch (menu) { 
//	case 1:
//		tong[0].fill(10);
//		cout << "커피가 10으로 채워집니다." << endl;
//		break;
//	case 2:
//		tong[1].fill(10);
//		cout << "물이 10으로 채워집니다." << endl;
//		break;
//	case 3:
//		tong[2].fill(10);
//		cout << "설탕 10으로 채워집니다." << endl;
//		break;
//	case 4:
//		tong[0].fill(10);
//		tong[1].fill(10);
//		tong[2].fill(10);
//		cout << "커피와 물 그리고 설탕이 10으로 채워집니다." << endl;
//		break;
//	default:
//		cout << "알 수 없는 메뉴입니다. 다시 선택하세요" << endl;
//		fill();  //재귀함수를 이용하여 알 수 없는 메뉴일 때 fill() 함수를 다시 호출하였다. 
//	}
//
//	cout << "커피 " << tong[0].getSize() << ", " << "물 " << tong[1].getSize() << ", " << "설탕 " << tong[2].getSize() << endl;
//}
//
//void CoffeeVendingMachine:: selectEspresso() { //if - else 조건문과 && 논리곱 연산자를 이용하여 구현하였다. 
//	if (tong[0].getSize() >= 1 && tong[1].getSize() >= 1) {
//		tong[0].consume(1);
//		tong[1].consume(1);
//		cout << "에스프레소 드세요" << endl;
//	}
//	else {  //커피와 물이 부족한 경우 사용자가 필요한 원료를 자세하게 알게하였다.
//		if (tong[0].getSize() >= 1 && tong[1].getSize() < 1) {
//			cout << "물이 부족합니다." << endl;
//		}
//		else if (tong[0].getSize() < 1 && tong[1].getSize() >= 1) {
//			cout << "커피가 부족합니다." << endl;
//		}
//		else {
//			cout << "커피와 물이 부족합니다." << endl;
//		}
//	}
//}
//void CoffeeVendingMachine::selectAmericano() {
//
//	if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2) { //if - else 조건문과 && 논리곱 연산자를 이용하여 구현하였다. 
//		tong[0].consume(1);
//		tong[1].consume(2);
//		cout << "아메리카노 드세요" << endl;
//	}
//	else { //사용자가 필요한 원료를 자세하게 알게하였다.
//		if (tong[0].getSize() >= 1 && tong[1].getSize() < 2) {
//			cout << "물이 부족합니다." << endl;
//		}
//		else if (tong[0].getSize() < 1 && tong[1].getSize() >= 2) {
//			cout << "커피가 부족합니다." << endl;
//		}
//		else {
//			cout << "커피와 물이 부족합니다." << endl;
//		}
//	}
//}
//void CoffeeVendingMachine::selectSugarCoffee() {
//
//	if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2 && tong[2].getSize() >= 1) {  //if - else 조건문과 && 논리곱 연산자를 이용하여 구현하였다. 
//		tong[0].consume(1);
//		tong[1].consume(2);
//		tong[2].consume(1);
//		cout << "설탕커피 드세요" << endl;
//	}
//	else {  //사용자가 필요한 원료를 자세하게 알게하였다.
//		if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2 && tong[2].getSize() < 1) {
//			cout << "설탕이 부족합니다." << endl;
//		}
//		else if (tong[0].getSize() < 1 && tong[1].getSize() >= 2 && tong[2].getSize() >= 1) {
//			cout << "커피가 부족합니다." << endl;
//		}
//		else if(tong[0].getSize() >= 1 && tong[1].getSize() < 2 && tong[2].getSize() >= 1){
//			cout << "물이 부족합니다." << endl;
//		}
//		else if(tong[0].getSize() < 1 && tong[1].getSize() < 2 && tong[2].getSize() >= 1){
//			cout << "커피와 물이 부족합니다." << endl;
//		}
//		else if (tong[0].getSize() < 1 && tong[1].getSize() >= 2 && tong[2].getSize() < 1) {
//			cout << "커피와 설탕이 부족합니다." << endl;
//		}
//		else if (tong[0].getSize() >= 1 && tong[1].getSize() < 2 && tong[2].getSize() < 1) {
//			cout << "물과 설탕이 부족합니다." << endl;
//		}
//		else {
//			cout << "커피와 물과 설탕이 부족합니다." << endl;
//		}
//	}
//}
//void CoffeeVendingMachine::show() {
//	cout << "커피 " << tong[0].getSize() << ", " << "물 " << tong[1].getSize() << "," << "설탕 " << tong[2].getSize() << endl;
//}
//void CoffeeVendingMachine::run() {
//	cout << " ***** 커피자판기를 작동합니다. ***** " << endl; //작동 문구.
//
//	int menu = 0;
//	bool quitChoice = false;  // while 문을 탈출하기 위한 end point를 설정하였다. 이는 기본적으로 false 값을 가진다. 
//
//	while (!quitChoice) { //while 의 조건문은 기본적으로 true이다. 
//		cout << "메뉴를 눌러주세요(1: 에스프레소, 2: 아메리카노, 3: 설탕커피, 4: 잔량보기, 5: 채우기, 6: 끝내기) >> ";
//		cin >> menu;
//		switch (menu) {
//		case 1:
//			selectEspresso();
//			break;
//		case 2:
//			selectAmericano();
//			break;
//		case 3:
//			selectSugarCoffee();
//			break;
//		case 4:
//			show();
//			break;
//		case 5:
//			fill();
//			break;
//		case 6:  //6을 입력할경우 quitChoice가 true 값으로 바뀌게 된다. 이로 인해 while 문을 탈출하게 된다. 
//			quitChoice = true;
//			break;
//		default:   // 잘못 입력하였을 경우에는 ,다시 입력하라는 안내를 한다. 
//			cout << "알 수 없는 메뉴입니다. 다시 선택하세요" << endl;
//		}
//	}
//	cout << " ***** 커피자판기이 멈춥니다. ***** " << endl;
//}
//
//int main() {
//	CoffeeVendingMachine* coffee = new CoffeeVendingMachine; //new를 이용한 동적 메모리 할당, 힙이라는 공간으로무터 메모리를 할당받고
//	coffee->run(); //프로그램을 작동시킨다.
//	delete coffee; //delete 연산자는 할당받은 메모리를 힙으로 반환한다. 
//}