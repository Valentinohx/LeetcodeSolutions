#include <stdlib.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL) return true;
        if(head->next == NULL) return true;

        ListNode* tmp = NULL;
        int len = 0;
        for(tmp = head; tmp != NULL; tmp = tmp->next){
            len++;
        }

        ListNode* head2 = head;
        tmp = head;
        int center;
        if( len%2 == 0)
        {
            center = len/2;
            for(int i=1; i<center; i++){
                tmp = tmp->next;
            }
            head2 = tmp->next;
            tmp->next = NULL;
            head2 = reverseList(head2);
        }
        else
        {
            center = len/2 + 1;
            for(int i=1; i<center-1; i++){
                tmp = tmp->next;
            }

            head2 = tmp->next->next;
            tmp->next = NULL;
            head2 = reverseList(head2);
        }

        while(head != NULL)
        {
            if (head->val != head2->val) return false;
            head = head->next;
            head2 = head2->next;
        }
        return true;
    }
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