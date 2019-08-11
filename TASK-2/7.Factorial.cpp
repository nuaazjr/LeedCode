#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



//编程实现求阶乘 n!
int Factorial(int n) {
	if (n < 0) {
		cout << "number n must greater than or equal to 0!" << endl;
		exit(1);
	}
	if (n == 0) {
		return 1;
	}
	return n * Factorial(n - 1);
}



extern void TestFactorial() {
	cout << "Factorial sequence from 0 to 9: ";
	for (int i = 0; i < 10; i++) {
		cout << Factorial(i) << " ";
	}
	cout << endl;
}

