#include <stdlib.h>
#include <vector>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

using namespace std;

class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {

        if(!head || !head->next) return {0};

        ListNode* tmp = head;
        int len = 0;
        for(tmp = head; tmp; tmp = tmp->next) len++;
        std::vector<int> res(len, 0);
        
        // std::vector<int> res;
        tmp = head;
        ListNode* fast = NULL;
        ListNode* last_fast = NULL;
        int last_val;
        int iter = 0;

        while(tmp)
        {
            if (iter && tmp->val >= last_val) fast = last_fast;
            else fast = tmp->next;

            while(fast && fast->val <= tmp->val )
            {
                fast = fast->next;
            }
            last_fast = fast;
            last_val = tmp->val;

            // if(fast) res.push_back(fast->val);
            // else res.push_back(0);

            if(fast) res[iter] = fast->val;
            else  res[iter] = 0;

            iter ++;
            tmp = tmp->next;
        }
        return res;
    }
};

int main(){
    return 0;
}