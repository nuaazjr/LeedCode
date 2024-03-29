#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



//编程实现一组数据集合的全排列
// 包含begin 不包含end,[begin,end)
void FullPermutation(vector<int> v, int begin, int end) {
	//begin=end时，表示递归结束，找到了一个排列组合
	if (begin == end)
	{
		// 从头起，输出整个排列
		for (int i = 0; i < end; i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;
		return; // 这里直接返回，在调用栈里直接弹出
	}
	for (int i = begin; i < end; i++)
	{
		swap(v[begin], v[i]); // 每次把后面的交换到第一个位置
		FullPermutation(v,begin + 1, end);
		swap(v[i], v[begin]);//回溯,把顺序还原
	}
}



extern void TestFullPermutation() {
	vector<int> v = { 4,3,7,9};
	FullPermutation(v, 0, v.size());
}