// Find the length of loop in Cycle of Linked List.

//     int
//     findLength()
// {
//     node *fast = head->next;
//     node *slow = head;
//     int fl = 0;
//     while (fast and fast->next)
//     {
//         if (fast == slow)
//         {
//             fl = 1;
//             break;
//         }
//         fast = fast->next->next;
//         slow = slow->next;
//     }
//     if (fl == 0)
//         return 0;
//     int cnt = 1;
//     slow = slow->next;

//     while (slow != fast)
//     {
//         cnt++;
//         slow = slow->next;
//     }
//     return cnt;
// }