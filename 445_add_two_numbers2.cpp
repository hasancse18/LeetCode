ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int>st1,st2;
        while(l1)
        {
            st1.push(l1->val);
            l1=l1->next;
        }
        while(l2)
        {
            st2.push(l2->val);
            l2=l2->next;
        }
        vector<int>v;
        int c=0;
        while(!st1.empty() && !st2.empty())
        {
            int x=st1.top() + st2.top()+c;
            c=x/10;
            v.push_back(x%10);
            st1.pop();
            st2.pop();
        }
        
         while(!st1.empty())
         {
            int x=st1.top()+c;
            c=x/10;
            v.push_back(x%10);
            st1.pop();
         }
         while(!st2.empty())
         {
            int x=st2.top()+c;
            c=x/10;
            v.push_back(x%10);
            st2.pop();
         }
         if(c!=0)
         {
            v.push_back(c);
         }
         ListNode* head = new ListNode(0);
         ListNode* temp=head;
         reverse(v.begin(),v.end());
         for(auto it:v)
         {
            ListNode* ptr= new ListNode(it);
            temp->next = ptr;
            temp=temp->next;
         }
         return head->next;
    }