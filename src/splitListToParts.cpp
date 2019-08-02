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
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        ListNode* tmp = NULL;
        int len = 0;
        for( tmp = root; tmp; tmp = tmp->next ) len++;

        vector<ListNode*> res;
        ListNode* tNode = new ListNode(5);

        if(k >= len)
        {
            tmp = root;
            for(int i = 0; i < k; i++)
            {

                if (tmp != NULL){
                    res.push_back(new ListNode(tmp->val));
                    tmp = tmp->next;
                }
                else res.push_back(NULL);
            }
        }

        else{   //len > k, the first len
            int m = len / k;
            int n = len % k;

            ListNode* head = root;
            ListNode* tail = root;
            tmp = root;

            for(int i = 0; i < k; i++)
            {
                if( n > 0 )
                {
                    for( int j = 0; j < m ; j++ ) tmp = tmp->next;
                    tail = tmp;
                    tmp = tmp->next;
                    tail->next = NULL;
                    res.push_back(head);
                    head = tmp;
                    n--;

                }
                else
                {
                    for( int j = 0; j < m-1; j++ ) tmp = tmp->next;
                    tail = tmp;
                    tmp = tmp->next;
                    tail->next = NULL;
                    res.push_back(head);
                    head = tmp;
                }
            }
        }
        return res;
    }
};

int main()
{
    return  0;
}