
#include <stdlib.h>

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if(head == NULL) return NULL;
        if(head->next == NULL) return head;

        ListNode* current = head;
        ListNode* currentNext = head->next;
        while(currentNext != NULL){
            while(current->val == currentNext->val )
            {
                if(currentNext->next != NULL)
                    currentNext = currentNext->next;
                else
                {
                    currentNext = NULL;
                    current->next = NULL;
                    return head;
                }
            }
            current->next = currentNext;
            current = current->next;
            currentNext = currentNext->next;
        }
        return head;
    }

    ListNode* deleteDuplicates1(ListNode* head) {


        ListNode* current = head;
        while(current != NULL && current->next != NULL){
            if(current->next->val == current->val)
            {
                current->next = current->next->next;
            }
            else{
                current = current->next;
            }
        }
        return head;
    }
};

int main(){
    return 0;
}