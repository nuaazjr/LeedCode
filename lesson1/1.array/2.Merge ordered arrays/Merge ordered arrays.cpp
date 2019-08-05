struct node{
		int value;
		int out_index;//����������	
		int in_index;//����������	
		node(int v, int o,int i){		
			value = v;		
			out_index = o;		
			in_index = i;	
			}	
			
			bool operator<(node a)const{		
				return value < a.value;	
				}	
				
			bool operator>(node a)const{		
				return value > a.value;	
				}
};

vector<int> mergeSort(vector<vector<int>> &nums){
		vector<int> res;	
		priority_queue <node, vector<node>,greater<node>> order;	
		int N = nums.size(), M = nums[0].size();	
		//��ÿ������ĵ�һ��Ԫ�أ���С������С����	
		for (int k = 0; k < N; k++){		
			order.push(node(nums[k][0], k, 0));	
		}	
		int i = 0, j = 0;	
		//���ȶ�������ȡ��СԪ�ط������飬Ȼ��������Ϊ��СԪ�ض�Ӧ�������е�����	
		while (res.size() < N*M){		
			node tmp = order.top();//������ȶ�������СֵԪ��		
			res.push_back(tmp.value);//����Ŀ������		
			i = tmp.out_index;//��СֵԪ�ض�Ӧ����		
			j = tmp.in_index + 1;//��СֵԪ�ض�Ӧ��������һ����Ԫ��		
			order.pop();		
			if (j == M)//�ﵽĳ����ĩβ		
				{			
					order.push(node(INFTY, i, j));		
				}		
			else		
				{			
					order.push(node(nums[i][j], i, j));		
				}	
		}	
		return res;				
}
