#include <iostream>
using namespace std;
//
//네임스페이스는 클래스나 구조체 그리고 함수나 변수를 식별하는데
//사용하는 논리적인 공간

//네임스페이스 특징
// 같은 네임스페이스에 속해있는 식별자(클래스, 함수)호출하는 경우 네임스페이스 이름을 생략할 수 있다
// 외부 네임스페이스에 있는 식별자를 호출하는 경우 :: 을 이용한다.
// 같은 이름을 갖는 식별자는 네임스페이스 내부에 하나 이상 존재할 수 없다.

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