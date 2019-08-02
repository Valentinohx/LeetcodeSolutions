#include <stdlib.h>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* tmp;
        int len = 0;
        for( tmp = head; tmp != NULL; tmp = tmp->next ){
            len++;
        }
        tmp = head;
        for(int i = 0; i < len/2; i++)
        {
            tmp = tmp->next;
        }
        return tmp;
    }
};

int main(){
    return 0;
}