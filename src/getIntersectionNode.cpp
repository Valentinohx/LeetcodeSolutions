
#include <unordered_set>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        std::unordered_set<ListNode*> nodeSet;
        while(headA != NULL){
            nodeSet.insert(headA);
            headA = headA->next;
        }

        while(headB != NULL){
            if(nodeSet.find(headB) == nodeSet.end())
            {
                nodeSet.insert(headB);
                headB = headB->next;
            }
            else
            {
                return headB;
            }
        }
        return NULL;
    }
};


int main(){
    return  0;
}