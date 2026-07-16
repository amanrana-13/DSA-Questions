// Question - 237. Delete Node in a Linked List
// Question Link - https://leetcode.com/problems/delete-node-in-a-linked-list/description/
// Definition for singly-linked list.
struct ListNode {
int val;
ListNode *next;
ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        if (node == nullptr || node->next == nullptr) {
            return;
        }
        ListNode* ptr = node->next;
        node->val = ptr->val;
        node->next = ptr->next;
        delete ptr;
    }
};
