#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



//���ʵ��һ�����ݼ��ϵ�ȫ����
// ����begin ������end,[begin,end)
void FullPermutation(vector<int> v, int begin, int end) {
	//begin=endʱ����ʾ�ݹ�������ҵ���һ���������
	if (begin == end)
	{
		// ��ͷ�������������
		for (int i = 0; i < end; i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;
		return; // ����ֱ�ӷ��أ��ڵ���ջ��ֱ�ӵ���
	}
	for (int i = begin; i < end; i++)
	{
		swap(v[begin], v[i]); // ÿ�ΰѺ���Ľ�������һ��λ��
		FullPermutation(v,begin + 1, end);
		swap(v[i], v[begin]);//����,��˳��ԭ
	}
}



extern void TestFullPermutation() {
	vector<int> v = { 4,3,7,9};
	FullPermutation(v, 0, v.size());
}