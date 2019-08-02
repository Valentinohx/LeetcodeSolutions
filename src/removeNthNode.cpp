

#include <stdlib.h>


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* current;
        for(current = head; current != NULL; current = current->next) len++;
        if(len == 0 || len == 1) return NULL;
        if(len == n){
            head = head->next;
            return head;
        }
        ListNode* dummy = head;
        int j = 0;
        while( j < len - n - 1  )
        {
            j++;
            dummy = dummy->next;
        }
        dummy->next = dummy->next->next;
        return head;
    }
};



int main()
{
    return  0;
}