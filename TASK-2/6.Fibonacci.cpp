#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



//���ʵ��쳲�����������ֵ f(n) = f(n-1) + f(n-2)
int Fibonacci(int n) {
	if (n < 1) {
		cout << "number n must greater than 0!" << endl;
		exit(1);
	}
	if (n == 1 || n == 2) {
		return 1; 
	}
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}


// ���Ժ���
extern void TestFibonacci() {
	cout << "Fibonacci sequence from 1 to 9: ";
	for (int i = 1; i < 10; i++) {
		cout << Fibonacci(i) << " ";
	}
	cout << endl;
}

