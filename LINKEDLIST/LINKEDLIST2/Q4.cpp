// Given the head of a linked list and an integer val , remove all the nodes of the linked list that has
// Node.val == val , and return the new head.

// [203 Remove Linked List Elements]


// class Solution {
// public:
//     ListNode* removeElements(ListNode* head, int val) {
       
//         if(head==NULL){
//             return NULL;
//         } 
//         while(head!=NULL && head->val==val){
//             head = head->next;
//         }
//          ListNode* temp = head;

//         while(temp!=NULL ){
//             if(temp->next!=NULL && temp->next->val==val){
//                 temp->next = temp->next->next;
//             }else{
//                 temp = temp->next;
//             }
            
//         }
//         return head;
//     }
// };