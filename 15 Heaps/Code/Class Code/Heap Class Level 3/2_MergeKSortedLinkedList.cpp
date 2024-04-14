#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Assuming ListNode is defined somewhere else
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    struct Compare {
        bool operator()(ListNode* first, ListNode* second) {
            return first->val > second->val;
        }
    };

    ListNode* mergeKList(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Compare> pq;

        for (ListNode* listHead : lists) {
            if (listHead != nullptr) {
                pq.push(listHead);
            }
        }

        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        while (!pq.empty()) {
            ListNode* topNode = pq.top();
            pq.pop();
            if (head == nullptr && tail == nullptr) {
                head = topNode;
                tail = topNode;
            } else {
                tail->next = topNode;
                tail = topNode;
            }
            if (topNode->next != nullptr) {
                pq.push(topNode->next);
            }
        }
        return head;
    }
};

int main() {
    // Example usage
    Solution solution;

    // Create some sample linked lists
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(4);
    list1->next->next = new ListNode(5);

    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    ListNode* list3 = new ListNode(2);
    list3->next = new ListNode(6);

    vector<ListNode*> lists = {list1, list2, list3};

    // Merge the lists
    ListNode* mergedList = solution.mergeKList(lists);

    // Print the merged list
    while (mergedList != nullptr) {
        cout << mergedList->val << " ";
        mergedList = mergedList->next;
    }

    return 0;
}
