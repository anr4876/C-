
#include <iostream>

using namespace std;

int a;
void setValue() {
	a = 10;
}

namespace kia {
	int a;
	void setValue();
	namespace daewoo {
		int a;
		void setValue();
	}
}

namespace {
	int a;
	void setValue() {
		a = 11;
	}
}

namespace kd = kia::daewoo;

int main() {
	::setValue();
	kia::setValue();
	kia::daewoo::setValue();
	

	cout << ::a << endl;
	cout << kia::a << endl;
	cout << kd::a << endl;
}

void kia::setValue() {
	a = 100;
}

void kd::setValue() {
	a = 1000;
}