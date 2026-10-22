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

        if(!head || !head->next || k == 0)//edge case
            return head;

        int n = 1;
        ListNode* tail = head;

        while(tail->next){
            tail = tail->next;
            n++;
        }

        k %= n;//founding last node

        if(k == 0)
            return head;

        ListNode* curr = head;

        for(int i = 1; i < n - k; i++){
            curr = curr->next;
        }

        ListNode* newHead = curr->next;
        curr->next = nullptr;//break kar diye ll ko
        tail->next = head;

        return newHead;
    }
};