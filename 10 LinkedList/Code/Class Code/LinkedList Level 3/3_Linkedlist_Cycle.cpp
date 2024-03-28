/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        //Create map table 
        map<ListNode*,bool>table;
        //Sore head address in temp
        ListNode* temp =head;
        while(temp !=NULL){
            if(table[temp]==false){
                table[temp]=true;
            }
            else{
                //cycle present hai
                return true;
            }
            temp=temp->next;
        }
        //Loop not present 
        return false;
    }
};