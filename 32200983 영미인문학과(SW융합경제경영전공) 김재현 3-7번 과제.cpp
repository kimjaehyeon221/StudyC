////32200983 �����ι��а� ������ 
////3-7�� ����
////Ŭ���� �ۼ����� �Ű� ������ ���� �������� Ȱ��. 
////������: ���ǹ����� ���� ������ ���� �������� ������ ����. ���� �Լ��� ������ �������� ��� ���� �ʱ�ȭ�� �߿伺 �ľ��Ͽ���. 
//
//#include <iostream> //������� ���� ��ó��
//#include <cstdlib>   //������ �Լ��� ����ϱ� ���� ��ó�� 
//#include <ctime> //������ �Լ��� ����ϱ� ���� ��ó�� 
//#include <string>  //¦���� Ȧ�� ���ڸ� string ���� �ޱ� ���� ��ó���̴�. 
//using namespace std;
//
//class SelectableRandom {
//private: //��� ������ private�� �����Ͽ���. 
//	int x = 0;
//	int select = 0;
//public: //�����ڴ� public���� 
//	SelectableRandom(int c);
//	int next();
//	int nextInRange(int a, int b);
//};
//
//SelectableRandom::SelectableRandom(int c)  { //Ŭ���� �ۼ����� �Ű� ������ ���� �������� Ȱ��. 
//	srand((unsigned)time(0)); //���α׷��� ����� �� ���� ������ �ð����� ��ȯ�Ǵ� ���尪�� �ش�. 
//	select = c;
//}
//
//int SelectableRandom::next(){
//	if (select == 0) { //select�� 0�̶�� ���� ¦���� ��ȯ�ϱ� ���Ѵٴ� ���̴�. 
//		int x = rand();
//		if (x % 2 == 1) {  //�������� 1�̶�� Ȧ���� �ǹ��Ѵ�. ���� ¦�� ���� ��ȯ�ϱ� ���� ���⿡ 1�� �����ش�. 
//			x = x + 1;
//		}
//		return x;
//	}
//	else {  //select�� 1�̶�� ���� Ȧ���� ��ȯ�ϱ� ���Ѵٴ� ���̴�. 
//		int x = rand();
//		if (x % 2 == 0) {  //�������� 0�̶�� ¦���� �ǹ��Ѵ�. ���� Ȧ�� ���� ��ȯ�ϱ� ���� ���⿡ 1�� �����ش�. 
//			x = x + 1;  //���� 0�̶�� -1�� �� ��� ������ ��ȯ�� ���� �����Ƿ� +1�� ���ش�. 
//		}
//		return x;
//	}
//}
//
//int SelectableRandom::nextInRange(int a, int b) {  //������ �����Ǿ��ִ� ��� ���� ������ ȣ��. 
//	
//	if (select == 0) {  //select�� 0�̶�� ���� ¦���� ��ȯ�ϱ� ���Ѵٴ� ���̴�. 
//		int x = rand() % (b - a + 1) + a;  //������ �����Ǿ��ִ� ��� ���� ������ ȣ��. 
//		if (x % 2 == 1) {
//			x = x + 1;
//		}
//		return x;
//	}
//	else {  //Ȧ�� �� ��.
//		int x = rand() % (b - a + 1) + a;
//		if (x % 2 == 0) {
//			x = x + 1;  //�������� 0�̶�� ¦���� �ǹ��Ѵ�. ���� Ȧ�� ���� ��ȯ�ϱ� ���� ���⿡ 1�� �����ش�. 
//		}    //���� 0�̶�� -1�� �� ��� ������ ��ȯ�� ���� �����Ƿ� +1�� ���ش�.
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
//		cout << "¦���� Ȧ�� �� �ϳ��� �����Ͽ� �Է��ϼ��� : ";
//		getline(cin, ChoiceResult);  //getline�� �̿��Ͽ� ChoiceResult�� �ޱ� 
//
//		if (ChoiceResult == "¦��") {
//			SelectableRandom r(0);  //¦���� ���ڴ� 0�̴�.
//			cout << "--0����" << RAND_MAX << "������ ���� " << ChoiceResult << " ���� 10��-- " << endl;
//			for (int i = 0; i < 10; i++) {
//				int n = r.next();
//				cout << n << ' ';
//			}
//			cout << endl << endl << "--2����" << "9 ������ ���� " << ChoiceResult << " ���� 10�� -- " << endl;
//			for (int i = 0; i < 10; i++) {
//				int n = r.nextInRange(2, 9);
//				cout << n << ' ';
//			}
//			cout << endl;
//		}
//		else if (ChoiceResult == "Ȧ��") {
//			SelectableRandom r(1); //Ȧ���� ���ڴ� 1�̴�. 
//			cout << "--0����" << RAND_MAX << "������ ���� " << ChoiceResult << " ���� 10��-- " << endl;
//			for (int i = 0; i < 10; i++) {
//				int n = r.next();
//				cout << n << ' ';
//			}
//			cout << endl << endl << "--2����" << "9 ������ ���� " << ChoiceResult << " ���� 10�� -- " << endl;
//			for (int i = 0; i < 10; i++) {
//				int n = r.nextInRange(2, 9);
//				cout << n << ' ';
//			}
//			cout << endl;
//		}
//		else {
//			cout << "¦���� Ȧ�� ���ڸ� ����� �Է��Ͻÿ�" << endl;
//		}
//	} while (ChoiceResult != "¦��"  &&  ChoiceResult != "Ȧ��"); //do while�� �̿��Ͽ��� ¦���� Ȧ���� �ƴ� �ٸ� ���� �ٸ��� �ٽ� �ϱ�. 
//
//}