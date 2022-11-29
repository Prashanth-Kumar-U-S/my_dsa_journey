// https://leetcode.com/problems/add-two-numbers/

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *res = new ListNode(0), *head = nullptr;
        int sum = 0;
        int carry = 0;
        head = res;

        while(l1 != nullptr || l2 != nullptr || carry != 0)
        {
            sum = carry;
            if(l1 != nullptr)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != nullptr)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum / 10;
            sum = sum % 10;
            head->next = new ListNode(sum);
            head = head->next;
        }
        return res->next;
    }
};


/* We are given two linked lists

LL1 and  LL2
order is --> in reverse means: first elemet is lowest decemal place
1. 1st Approach would be to traverese through both the  LLs and make an integer and then add then and put the result back to new LL. This may no work for large integers
2. 2nd approach would be two traverse both the list together and keep adding and carry should be taken to next sum.
*/
