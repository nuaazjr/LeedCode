class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL||head->next==NULL)
            return false;
        ListNode *k=head;//���ڵ�
        ListNode *q=head->next;//�����ڵ�
        int count=0;//��¼���ڵ����˶��ٲ�
        while(q)
        {
            for(int i=count;i>0;i--)
            {
                k=k->next;
                if(k==q)
                    return true;
            }
            k=head;//��ԭ
            q=q->next;
            count++;
        }
        return false;
    }
};

