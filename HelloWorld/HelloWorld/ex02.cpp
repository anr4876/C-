#include <iostream>
using namespace std;
//
//���ӽ����̽��� Ŭ������ ����ü �׸��� �Լ��� ������ �ĺ��ϴµ�
//����ϴ� ������ ����

//���ӽ����̽� Ư¡
// ���� ���ӽ����̽��� �����ִ� �ĺ���(Ŭ����, �Լ�)ȣ���ϴ� ��� ���ӽ����̽� �̸��� ������ �� �ִ�
// �ܺ� ���ӽ����̽��� �ִ� �ĺ��ڸ� ȣ���ϴ� ��� :: �� �̿��Ѵ�.
// ���� �̸��� ���� �ĺ��ڴ� ���ӽ����̽� ���ο� �ϳ� �̻� ������ �� ����.

int x;
void setX() {
	::x = 100;
}

namespace kia {
	int x;
	void setX() {
		kia::x = 200;
	}
}
 
namespace hyundai {
	int x;
	void setX() {
		hyundai::x = 300;
	}
}

namespace daewoo {
	int x;
	void setX() {
		daewoo::x = 400;
	}
}

int main() {
	::setX();
	kia::setX();
	hyundai::setX();
	daewoo::setX();
	cout << x << endl;
	cout << kia::x << endl;
	cout << hyundai::x << endl;
	cout << daewoo::x << endl;
}