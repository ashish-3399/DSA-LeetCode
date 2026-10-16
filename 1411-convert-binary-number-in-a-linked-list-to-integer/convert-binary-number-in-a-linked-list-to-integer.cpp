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
    int getDecimalValue(ListNode* head) {
        int sz = 0, ans = 0;
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        while(temp1 != NULL) {
            temp1 = temp1->next;
            sz++;
        }
        int v = sz;
        for(int i = 0; i < sz; i++) {
            int x = temp2->val;
            ans += x * pow(2, v - 1);
            temp2 = temp2->next; v--;
        }
        return ans;
    }
};