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
	string vac1 = "화이자";  //포인터 배열에 포함될 주소값을 가진 변수
	string vac2 = "아스트라제네카";
	string* arr[2] = { &vac1, &vac2 };
};

Vaccine::Vaccine() {  //생성자 선언
	cout << "코로나 19 백신 접종 안내 프로그램입니다." << endl;
	cout << endl;
}


void Vaccine::classification() {

	cout << "특이사항 여부(임산부,알레르기 질환자)를 명시해 주십시오.(해당되면 1, 해당되지 않으면 0으로 표시) : ";
	cin >> spec;

	if (spec == 1) { 
		cout << endl;
		cout << "접종 대상자가 아닙니다. 안녕히 가십시오." << endl;
	}
	else {
		cout << "나이를 입력하십시오. : ";
		cin >> age;

	    if (18<=age && age<50) {
			cout << endl;
			cout << "접종 백신 : " << *arr[0]<< endl; //포인터배열의 0번째 원소 
			cout << "접종 대기실로 이동해 주십시오." << endl;
		}
		else if (50<=age && age<=64) {
			cout << endl;
			cout << "접종 백신 : " << *arr[1] << endl;
			cout << "접종 대기실로 이동해 주십시오." << endl;
		}
		else {
			cout << endl;
			cout << "접종 대상자가 아닙니다. 안녕히 가십시오." << endl;
		}
	}
}

Vaccine::~Vaccine() {  //소멸자 선언
	cout << endl;
	cout << "프로그램을 종료합니다." << endl;
}


int main(){
	Vaccine a;
	a.classification();

}

