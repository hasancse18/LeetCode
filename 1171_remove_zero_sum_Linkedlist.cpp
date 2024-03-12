/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        map<int,ListNode*>mp;
        int psum =0;
        ListNode* dummy= new ListNode(0);
        dummy->next=head;
        mp[0]=dummy;
        while(head!=NULL)
        {
            psum+=head->val;
            if(mp.find(psum)!=mp.end())
            {// delete the node that sum to zero
                ListNode* start=mp[psum];
                ListNode* ptr=start;
                int csum=psum;
                while(ptr!=head)
                {//je sob node delete kora lagbe tader psum gulo map thake erase kora hosce//
                    ptr=ptr->next;
                    csum+=ptr->val;
                    if(ptr!=head) mp.erase(csum);
                }
                 start->next=head->next;
            }
            else{
                mp[psum]=head;
            }
            head = head->next;
        }
        return dummy->next;
    }
};