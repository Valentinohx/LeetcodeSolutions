

#include <unordered_set>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    bool hasCycle(ListNode *head) {
        std::unordered_set<ListNode*> nodeSet;
        while ( head != NULL ){
            if( nodeSet.find(head) != nodeSet.end() ) return true;
            else nodeSet.insert(head);
            head = head->next;
        }
        return false;
    }
};


int main(){
    return  0;
}