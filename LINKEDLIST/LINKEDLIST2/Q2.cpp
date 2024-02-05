// You are given two linked lists: list1 and list2 of sizes n and m respectively.
// Remove list1 's nodes from the ath node to the bth node, and put list2 in their place.
// [Leetcode 1669]


// class Solution {
// public:
//     ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
//         ListNode *tempA = list1;
//         ListNode *tempB = list1;
//         for(int i=1; i<a; i++){
//             tempA = tempA->next;
//         }
//         for(int i=1; i<=b; i++){
//             tempB = tempB->next;
//         }
//         ListNode *tempList2 = list2;
//         while(tempList2->next!=NULL){
//             tempList2 = tempList2->next;
//         }
//         tempList2->next = tempB->next;
//         tempA->next = list2;

//         return list1;
//     }
// };