#include <stdlib.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(head == NULL || head->next == NULL) return head;

        ListNode *root = new ListNode(0);
        root->next = head;
        ListNode* pre = root;
        ListNode* target = NULL;
        ListNode* tail = NULL;
        ListNode* tmp  = NULL;

        int index = 0;
        for (tmp  = head; tmp != NULL; tmp = tmp->next){
            index++;

            if(index < m)  pre = pre->next;
            if(index == m)  target = tmp;
            if(index == n) {
                tail = tmp;
                tmp = tmp->next;
                tail->next = NULL;
                break;
            }
        }
        target = reverseList(target);
        ListNode* targetTail = target;
        while(targetTail->next != NULL) targetTail = targetTail->next;
        pre->next = target;
        targetTail->next = tmp;

        return root->next;
    }

    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
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