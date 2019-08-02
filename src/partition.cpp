#include <stdlib.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head == NULL || head->next == NULL) return head;

        ListNode *root = new ListNode(x-1);
        root->next = head;

        ListNode* pre = root;
        ListNode* fistBigVal = root;
        ListNode* tmp = root;
        ListNode* tmp_L = root;
        ListNode* tmp_R = root;

        while(fistBigVal != NULL && fistBigVal->next != NULL ){
            if( fistBigVal->next->val >= x ) break;
            else fistBigVal = fistBigVal->next;
        }
        pre = fistBigVal;
        fistBigVal = fistBigVal->next;
        tmp = fistBigVal;
        tmp_L = pre;

        while( tmp != NULL ){
            if(tmp->val >= x)
            {
                tmp = tmp->next;
                tmp_L = tmp_L->next;
            }
            else{
                tmp_R = tmp->next;
                pre->next = tmp;
                tmp->next = fistBigVal;
                tmp_L->next = tmp_R;

                pre = pre->next;
                tmp = tmp_R;
            }
        }
        return root->next;
    }
};

int main()
{
    return  0;
}