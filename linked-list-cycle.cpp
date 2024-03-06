#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr) {return false;}

        auto slow = head;
        auto fast = head->next;

        while(slow != fast) {
            if (fast == nullptr || fast->next == nullptr) {return false;}
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
    }
};

int main() {
    ListNode *node1 = new ListNode(3);
    ListNode *node2 = new ListNode(2);
    ListNode *node3 = new ListNode(0);
    ListNode *node4 = new ListNode(-4);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node2;

    Solution solution;
    bool has_cycle = solution.hasCycle(node1);

    cout << (has_cycle ? "true" : "false") << endl;
    return 0;
}
