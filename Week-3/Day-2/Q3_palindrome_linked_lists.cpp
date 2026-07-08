class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> ans;
        ListNode *temp=head;
        while(temp)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int first=0;
        int second=ans.size()-1;
        while(first<second)
        {
            if(ans[first]!=ans[second])
            {
                return false;
            }
             
            first++;
            second--;
        }
        return true;;
    }
};
