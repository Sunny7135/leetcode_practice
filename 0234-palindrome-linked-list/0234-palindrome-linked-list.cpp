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
    bool isPalindrome(ListNode* head) {
        
        ListNode* temp = head;
        stack<int>st;
        int n =0;
        while(temp){
            n++;
            temp= temp->next;
        }
        temp =head;
        for(int i=0; i<n/2; i++){
            st.push(temp->val);
            temp= temp->next;
        }

        if(n%2==1)temp= temp->next;

        while(temp){
            if(st.top() != temp->val)return false;

            st.pop();
            temp= temp->next;
        }
        return true;

    }
};