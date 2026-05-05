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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0)return head;
        ListNode* temp = head;

        int n =1;
        while(temp->next){
            temp = temp->next;
            n++;
        }
        k = k%n;
        if(k==0) return head;
        temp->next = head;

        int move = n-k;
        ListNode* res = head;
        while(--move){
            res = res->next;
        }
        ListNode* newhead = res->next;
        res->next = NULL;

        return newhead;
    }
};