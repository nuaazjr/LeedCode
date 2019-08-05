struct node{
		int value;
		int out_index;//数组外索引	
		int in_index;//数组内索引	
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
		//将每个数组的第一个元素（最小）放入小顶堆	
		for (int k = 0; k < N; k++){		
			order.push(node(nums[k][0], k, 0));	
		}	
		int i = 0, j = 0;	
		//优先队列满，取最小元素放入数组，然后将索引改为最小元素对应的数组中的索引	
		while (res.size() < N*M){		
			node tmp = order.top();//获得优先队列中最小值元素		
			res.push_back(tmp.value);//存入目标数组		
			i = tmp.out_index;//最小值元素对应数组		
			j = tmp.in_index + 1;//最小值元素对应数组内下一个的元素		
			order.pop();		
			if (j == M)//达到某数组末尾		
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
