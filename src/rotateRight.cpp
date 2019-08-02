#include <stdlib.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;

        ListNode* tmp ;
        int len = 0;
        for( tmp = head; tmp != NULL; tmp = tmp->next){
            len++;
        }

        int rotateLen = k%len;
        if( rotateLen == 0 ) return head;

        tmp = head;
        for (int i  = 0; i < len - rotateLen - 1; i++)
        {
            tmp = tmp->next;
        }
        ListNode* res = tmp->next;
        tmp->next = NULL;
        ListNode* tail;

        for(tail = res; tail->next != NULL; tail = tail->next);
        tail->next=head;
        return res;
    }
};

int main()
{
    return  0;
}