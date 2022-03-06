
#include <iostream>
using namespace std;

// main 함수의 3종류 타입
// int main(){ 코드 }
// int main(int argc, char *argv[]){ 코드}
// int main(int arggc, char *argv[], parameters){ 코드}


int main()
{
	// std는 "standard"의 약자 : 표준 네임스페이스를 의미
	// :: 더블콜론, 범위확인연산자(Scope resolution operator)
	/*
	std::cout << "Hello World!!!!" << std::endl;
	std::cout << "Hello " << "World!!!" << std::endl;
	*/

	int num;

	cout << "Enjoy c++.\n";
	cin >> num;
	cout << "입력값 :  " << num << endl;

	   

	
	

	return 0;

}