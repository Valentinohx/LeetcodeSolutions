#include<stdlib.h>
#include<vector>
#include <algorithm>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    int numComponents(ListNode* head, std::vector<int>& G) {

        ListNode* tmp = head;
        int n = 0;
        std::vector<int>::iterator it;
        int j = 0;

        while( tmp != NULL )
        {
            j = 0;
            while(tmp != NULL && (it = std::find(G.begin(), G.end(), tmp->val)) != G.end() )
            {
                j++;
                G.erase(it);
                tmp = tmp->next;
            }
            if(j) n++;
            if (!tmp) break;
            tmp = tmp->next;
        }
        return n;
    }
};

int main()
{
    return  0;
}