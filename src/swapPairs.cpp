#include <stdlib.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL) return NULL;
        if ( head->next == NULL ) return head;

        ListNode* t1 = head;
        ListNode* t2 = head->next;
        ListNode* t3 = t2->next;
        ListNode* t4 = t1;

        head = t2;
        t2->next = t1;
        t1->next = t3;

        while( t3 != NULL)
        {
            if( t3->next == NULL  ) return head;

            t1 = t3;
            t2 = t1->next;
            t3 = t2->next;

            t4->next = t2;
            t2->next = t1;
            t1->next = t3;
            t4 = t1;
        }
        return head;
    }
};

int main()
{
    return  0;
}