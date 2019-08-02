

#include <stdlib.h>
#include <unordered_set>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        std::unordered_set<ListNode*> nodeSet;
        ListNode* headA = head;

        while(headA != NULL){

            if(nodeSet.find(headA) == nodeSet.end())
            {
                nodeSet.insert(headA);
                headA = headA->next;
            }
            else break;
        }
        return headA;
    }
};

int main()
{
    return  0;
}