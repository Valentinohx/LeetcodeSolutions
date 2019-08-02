
#include <stdlib.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head != NULL && head->val == val ) head = head->next;
        if(head == NULL) return head;
        ListNode *rm = head;
        while(rm != NULL && rm->next != NULL ){
            if(rm->next->val == val)
            {
                rm->next = rm->next->next;
            }
            else rm = rm->next;
        }
        return head;
    }
};

int main(){
    return 0;
}