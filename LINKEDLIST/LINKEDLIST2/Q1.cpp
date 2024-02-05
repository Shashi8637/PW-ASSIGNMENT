// You are given the head of a linked list. Delete the middle node, and return the head of the
// modified linked list. [Leetcode 2095]


// class Solution {
// public:
//     ListNode* deleteMiddle(ListNode* head) {
//         if(head->next==NULL) return NULL;
//         ListNode *slow = head;
//         ListNode *fast = head;
//         while(fast!=NULL && fast->next!=NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         ListNode *temp = head;
//         while(temp->next!=slow){
//             temp = temp->next;
//         }
//         temp->next = temp->next->next;
//         return head;
//     }
// };


