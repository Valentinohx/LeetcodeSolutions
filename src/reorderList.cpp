

#include <stdlib.h>


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    void reorderList(ListNode* head) {

        if(head == NULL || head->next == NULL || head->next->next == NULL) return;

        ListNode* last = NULL;
        ListNode* tmp = head;
        ListNode * tmpN = head->next;

        while(  tmpN != NULL && tmpN->next )
        {

            last = tmp;
            while( last->next->next != NULL )
            {
                last = last->next;
            }

            tmp->next = last->next;
            last->next->next = tmpN;
            last->next = NULL;

            if(tmp->next->next)
                tmp = tmp->next->next;
            else return;
            tmpN = tmp->next;

        }
    }
};


int main()
{
    return  0;
}