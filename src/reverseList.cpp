#include <stdlib.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return head;
        if(head->next == NULL) return head;

        ListNode* tmp = head;
        ListNode* cur = head->next;
        head = head->next;
        tmp->next = NULL;

        while(head != NULL)
        {
            head = head->next;
            cur->next = tmp;
            tmp = cur;
            cur = head;
        }
        return tmp;
    }
};

int main()
{
    return  0;
}