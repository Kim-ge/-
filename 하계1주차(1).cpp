#include <iostream>
#include <string>
using namespace std;

class Vaccine {
public:
	Vaccine();
	~Vaccine();
	void classification();
	int age = 0;
	int spec = 0;
	string vac1 = "ȭ����";
	string vac2 = "�ƽ�Ʈ������ī";
	string* arr[2] = { &vac1, &vac2 };
};

Vaccine::Vaccine() {
	cout << "�ڷγ� 19 ��� ���� �ȳ� ���α׷��Դϴ�." << endl;
	cout << endl;
}


void Vaccine::classification() {

	cout << "Ư�̻��� ����(�ӻ��,�˷����� ��ȯ��)�� ����� �ֽʽÿ�.(�ش�Ǹ� 1, �ش���� ������ 0���� ǥ��) : ";
	cin >> spec;

	if (spec == 1) {
		cout << endl;
		cout << "���� ����ڰ� �ƴմϴ�. �ȳ��� ���ʽÿ�." << endl;
	}
	else {
		cout << "���̸� �Է��Ͻʽÿ�. : ";
		cin >> age;

	    if (18<=age && age<50) {
			cout << endl;
			cout << "���� ��� : " << *arr[0]<< endl;
			cout << "���� ���Ƿ� �̵��� �ֽʽÿ�." << endl;
		}
		else if (50<=age && age<=64) {
			cout << endl;
			cout << "���� ��� : " << *arr[1] << endl;
			cout << "���� ���Ƿ� �̵��� �ֽʽÿ�." << endl;
		}
		else {
			cout << endl;
			cout << "���� ����ڰ� �ƴմϴ�. �ȳ��� ���ʽÿ�." << endl;
		}
	}
}

Vaccine::~Vaccine() {
	cout << endl;
	cout << "���α׷��� �����մϴ�." << endl;
}


int main(){
	Vaccine a;
	a.classification();

}

