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
    ListNode* reverseList(ListNode* head) {
        //Step 1
        ListNode* prev=NULL;
        ListNode* curr=head;
        //Step 2
        while(curr!=NULL){
            //Now no track lost due to curr->next=prev
            ListNode* nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }
        //Step 3
        //head=prev;
        //return head
        return prev;
    }
};