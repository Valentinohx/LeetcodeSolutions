#include <stdlib.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode *root = new ListNode(head->val/2);
        root->next = head;

        ListNode * pre   = root;
        ListNode * left  = root->next;
        ListNode * right = root->next->next;

        while(right != NULL)
        {
            if (left->val != right->val){
                pre = pre->next;
                left = left->next;
                right = right->next;
            }
            else{
                while(right != NULL && left->val == right->val ) right = right->next;
                left = right;
                pre->next = left;
                if (right != NULL ) right = right->next;
            }
        }
        return root->next;
    }
};

int main(){
    return 0;
}