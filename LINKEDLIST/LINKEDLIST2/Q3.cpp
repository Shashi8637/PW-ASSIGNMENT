// You are given the head of a linked list, and an integer k .
// Return the head of the linked list after swapping the values of the kth node from the beginning
// and the kth node from the end (the list is 1-indexed). [Leetcode 1721]



// class Solution {
// public:
//     ListNode* swapNodes(ListNode* head, int k) {
//         ListNode* tempA = head;
//         ListNode* tempB = head;
//         if(head==NULL) return NULL;
//         int len = 0;
//         ListNode *temp = head;
//         while(temp){
//             temp = temp->next;
//             len++;
//         }

//         for(int i=1; i<k; i++){
//             tempA = tempA->next;
//         }

//         for(int i=0; i<len-k; i++){
//             tempB = tempB->next;
//         }
        
//        int tempC = tempA->val;
//         tempA->val = tempB->val;
//         tempB->val = tempC;

//         return head;
        
//     }
// };