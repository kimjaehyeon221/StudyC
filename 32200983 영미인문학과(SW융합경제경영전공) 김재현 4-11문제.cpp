////32200983 �����ι��а� ������ 
////4-11�� ����
////��ü �迭�� ���� : Ŭ���� CoffeeVendingMachine�� Ŭ���� Container�� �̿��Ѵ�. �̶� Ŭ���� ���� private, public�� ��밡���� �޼ҵ�� �ʵ带 �˷��ش�. 
//// �������� �־��� �䱸���׿� ���Ͽ� if else���� switch���� �̿��Ͽ� fill �Լ��� ���û��װ� ���Ḧ ������ �� � ���ᰡ ���������� �����Ͽ���. 
//// ������ : �������� ������ ������ �򰥷��Ͽ� �̸� �ٽ� �����Ͽ���. 
//
//#include <iostream> 
//using namespace std;
//
//
//class Container { //�� �ϳ��� ��Ÿ���� Ŭ���� 
//	int size; //���� ���� ��, �ִ� ���差�� 10
//public: //Conteainer�� �����ڳ� ����Լ��� ��� ũ�Ⱑ �����Ƿ� Ŭ������ ����ο� ���� �����Ͽ���. 
//	Container() { size = 10; }
//	void fill(int x) { size = x; } //�ִ뷮(10)���� ä��� 
//	void consume(int y) { size = size - y; } //1��ŭ �Ҹ��ϱ� 
//	int getSize() { return size; } //���� ũ�� ���� 
//};
//
//
//class CoffeeVendingMachine { //Ŀ�����Ǳ⸦ ǥ���ϴ� Ŭ���� 
//	Container tong[3]; // tong[0]�� Ŀ��, tong[1]�� ��, tong[2]�� ������ -> ��ü �迭�� �����Ѵ�. �̶� ��ü �迭 ������ ���� �Ű� ���� ���� �⺻ �����ڸ� ȣ���Ѵ�. 
//	// 3���� Container ��ü�� �����ȴ�. 
//	void fill();
//	void selectEspresso();
//	void selectAmericano();
//	void selectSugarCoffee();
//	void show();
//public:
//	void run();
//};
//
//void CoffeeVendingMachine::fill() {  //switch �Լ��� �̿��Ͽ� ��ü ���� �޴��� ����Ͽ� �� ������� ���� ä�� �� �ֵ��� �����Ͽ���. 
//
//	int menu = 0;
//
//	cout << "[ä���] � ���Ḧ ä��ڽ��ϱ�.(1:Ŀ��, 2:��, 3:����, 4: ��ü ) >> ";
//	cin >> menu;
//
//	switch (menu) { 
//	case 1:
//		tong[0].fill(10);
//		cout << "Ŀ�ǰ� 10���� ä�����ϴ�." << endl;
//		break;
//	case 2:
//		tong[1].fill(10);
//		cout << "���� 10���� ä�����ϴ�." << endl;
//		break;
//	case 3:
//		tong[2].fill(10);
//		cout << "���� 10���� ä�����ϴ�." << endl;
//		break;
//	case 4:
//		tong[0].fill(10);
//		tong[1].fill(10);
//		tong[2].fill(10);
//		cout << "Ŀ�ǿ� �� �׸��� ������ 10���� ä�����ϴ�." << endl;
//		break;
//	default:
//		cout << "�� �� ���� �޴��Դϴ�. �ٽ� �����ϼ���" << endl;
//		fill();  //����Լ��� �̿��Ͽ� �� �� ���� �޴��� �� fill() �Լ��� �ٽ� ȣ���Ͽ���. 
//	}
//
//	cout << "Ŀ�� " << tong[0].getSize() << ", " << "�� " << tong[1].getSize() << ", " << "���� " << tong[2].getSize() << endl;
//}
//
//void CoffeeVendingMachine:: selectEspresso() { //if - else ���ǹ��� && ���� �����ڸ� �̿��Ͽ� �����Ͽ���. 
//	if (tong[0].getSize() >= 1 && tong[1].getSize() >= 1) {
//		tong[0].consume(1);
//		tong[1].consume(1);
//		cout << "���������� �弼��" << endl;
//	}
//	else {  //Ŀ�ǿ� ���� ������ ��� ����ڰ� �ʿ��� ���Ḧ �ڼ��ϰ� �˰��Ͽ���.
//		if (tong[0].getSize() >= 1 && tong[1].getSize() < 1) {
//			cout << "���� �����մϴ�." << endl;
//		}
//		else if (tong[0].getSize() < 1 && tong[1].getSize() >= 1) {
//			cout << "Ŀ�ǰ� �����մϴ�." << endl;
//		}
//		else {
//			cout << "Ŀ�ǿ� ���� �����մϴ�." << endl;
//		}
//	}
//}
//void CoffeeVendingMachine::selectAmericano() {
//
//	if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2) { //if - else ���ǹ��� && ���� �����ڸ� �̿��Ͽ� �����Ͽ���. 
//		tong[0].consume(1);
//		tong[1].consume(2);
//		cout << "�Ƹ޸�ī�� �弼��" << endl;
//	}
//	else { //����ڰ� �ʿ��� ���Ḧ �ڼ��ϰ� �˰��Ͽ���.
//		if (tong[0].getSize() >= 1 && tong[1].getSize() < 2) {
//			cout << "���� �����մϴ�." << endl;
//		}
//		else if (tong[0].getSize() < 1 && tong[1].getSize() >= 2) {
//			cout << "Ŀ�ǰ� �����մϴ�." << endl;
//		}
//		else {
//			cout << "Ŀ�ǿ� ���� �����մϴ�." << endl;
//		}
//	}
//}
//void CoffeeVendingMachine::selectSugarCoffee() {
//
//	if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2 && tong[2].getSize() >= 1) {  //if - else ���ǹ��� && ���� �����ڸ� �̿��Ͽ� �����Ͽ���. 
//		tong[0].consume(1);
//		tong[1].consume(2);
//		tong[2].consume(1);
//		cout << "����Ŀ�� �弼��" << endl;
//	}
//	else {  //����ڰ� �ʿ��� ���Ḧ �ڼ��ϰ� �˰��Ͽ���.
//		if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2 && tong[2].getSize() < 1) {
//			cout << "������ �����մϴ�." << endl;
//		}
//		else if (tong[0].getSize() < 1 && tong[1].getSize() >= 2 && tong[2].getSize() >= 1) {
//			cout << "Ŀ�ǰ� �����մϴ�." << endl;
//		}
//		else if(tong[0].getSize() >= 1 && tong[1].getSize() < 2 && tong[2].getSize() >= 1){
//			cout << "���� �����մϴ�." << endl;
//		}
//		else if(tong[0].getSize() < 1 && tong[1].getSize() < 2 && tong[2].getSize() >= 1){
//			cout << "Ŀ�ǿ� ���� �����մϴ�." << endl;
//		}
//		else if (tong[0].getSize() < 1 && tong[1].getSize() >= 2 && tong[2].getSize() < 1) {
//			cout << "Ŀ�ǿ� ������ �����մϴ�." << endl;
//		}
//		else if (tong[0].getSize() >= 1 && tong[1].getSize() < 2 && tong[2].getSize() < 1) {
//			cout << "���� ������ �����մϴ�." << endl;
//		}
//		else {
//			cout << "Ŀ�ǿ� ���� ������ �����մϴ�." << endl;
//		}
//	}
//}
//void CoffeeVendingMachine::show() {
//	cout << "Ŀ�� " << tong[0].getSize() << ", " << "�� " << tong[1].getSize() << "," << "���� " << tong[2].getSize() << endl;
//}
//void CoffeeVendingMachine::run() {
//	cout << " ***** Ŀ�����Ǳ⸦ �۵��մϴ�. ***** " << endl; //�۵� ����.
//
//	int menu = 0;
//	bool quitChoice = false;  // while ���� Ż���ϱ� ���� end point�� �����Ͽ���. �̴� �⺻������ false ���� ������. 
//
//	while (!quitChoice) { //while �� ���ǹ��� �⺻������ true�̴�. 
//		cout << "�޴��� �����ּ���(1: ����������, 2: �Ƹ޸�ī��, 3: ����Ŀ��, 4: �ܷ�����, 5: ä���, 6: ������) >> ";
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
//		case 6:  //6�� �Է��Ұ�� quitChoice�� true ������ �ٲ�� �ȴ�. �̷� ���� while ���� Ż���ϰ� �ȴ�. 
//			quitChoice = true;
//			break;
//		default:   // �߸� �Է��Ͽ��� ��쿡�� ,�ٽ� �Է��϶�� �ȳ��� �Ѵ�. 
//			cout << "�� �� ���� �޴��Դϴ�. �ٽ� �����ϼ���" << endl;
//		}
//	}
//	cout << " ***** Ŀ�����Ǳ��� ����ϴ�. ***** " << endl;
//}
//
//int main() {
//	CoffeeVendingMachine* coffee = new CoffeeVendingMachine; //new�� �̿��� ���� �޸� �Ҵ�, ���̶�� �������ι��� �޸𸮸� �Ҵ�ް�
//	coffee->run(); //���α׷��� �۵���Ų��.
//	delete coffee; //delete �����ڴ� �Ҵ���� �޸𸮸� ������ ��ȯ�Ѵ�. 
//}