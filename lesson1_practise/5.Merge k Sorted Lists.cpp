/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* result = new ListNode(-100000);
        ListNode* tmp;
        for(int i = 0; i < lists.size(); i ++){
            ListNode* head = new ListNode(-100000);
            ListNode* ptemp = head;
            tmp = result;
            while(tmp!=NULL && lists[i]!=NULL){
                if(tmp->val <= lists[i]->val){
                    ptemp->next = tmp;
                    tmp = tmp->next;
                }
                else{
                    ptemp->next = lists[i];
                    lists[i] = lists[i]->next;
                }
                ptemp = ptemp->next;
            }
            ptemp->next = tmp!=NULL ? tmp : lists[i];
            delete head;
        }
        return result->next;
    }
};
