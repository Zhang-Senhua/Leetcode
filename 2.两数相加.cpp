/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
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
        ListNode* probe = new ListNode();
        auto dummy = probe;
        int carry = 0,sum=0;
        while(l1!=nullptr && l2!=nullptr){
            sum = l1->val + l2->val + carry;
            l1 = l1->next, l2 = l2->next;
            carry = sum/10;
            sum = sum%10;
            probe->next = new ListNode(sum);
            probe = probe->next;
        }
        while(l1!=nullptr){
            sum = l1->val + carry;
            l1 = l1->next;
            carry = sum/10;
            sum = sum%10;
            probe->next = new ListNode(sum);
            probe = probe->next;
        }
        while(l2!=nullptr){
            sum = l2->val + carry;
            l2 = l2->next;
            carry = sum/10;
            sum = sum%10;
            probe->next = new ListNode(sum);
            probe = probe->next;
        }
        if(carry!=0){
            probe->next = new ListNode(carry);
            probe = probe->next;
        }
        return dummy->next;
    }
};

// @lc code=end

