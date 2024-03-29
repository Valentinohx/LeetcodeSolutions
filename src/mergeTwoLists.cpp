#include <stdlib.h>

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL)
            return l2;

        if(l2 == NULL)
            return l1;

        ListNode *nextNode = NULL;
        if(l1->val <= l2->val) {
            nextNode = l1;
            l1 = l1->next;
        }
        else {
            nextNode = l2;
            l2 = l2->next;
        }
        nextNode->next = mergeTwoLists(l1,l2);
        return nextNode;
    }
};

int main() {
    return 0;
}