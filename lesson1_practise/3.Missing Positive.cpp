class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int pos=0;
        int len=nums.size();
        //��һ�ˣ�����0�͸���
        while(pos < len)
        {
            if(nums[pos]<=0)
                nums[pos]=len+2;
            ++pos;
        }
        //�ڶ��ˣ��������ֵ��1-len֮������֡����ڴ�������л��ٴγ��ָ�����
        pos=0;
        while(pos < len)
        {
            if(nums[pos] <=len && nums[pos] +len >=0 )
                nums[abs(nums[pos])-1]=-abs(nums[abs(nums[pos])-1]);
            ++pos;
        }
        //�����ˣ��ҵ���һ������������λ��pos������pos+1
        pos=0;
        while(pos < len)
        {
            if(nums[pos]>0)
                return pos+1;
            ++pos;
        }
        return len+1;
    }
};
