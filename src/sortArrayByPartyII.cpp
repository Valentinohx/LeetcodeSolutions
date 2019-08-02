#include <vector>
#include <iostream>
#include <unordered_set>
#include <algorithm>


using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> odd;


        vector<int> res;
        std::vector<int>::iterator it = A.begin();
        while(it != A.end())
        {
            if( (*it)%2 == 1 )
            {
                odd.push_back(*it);
                A.erase(it);
            }
            else it++;
        }

        for(int i = 0; i < A.size(); i++)
        {
            res.push_back(A[i]);
            res.push_back(odd[i]);
        }
        return res;
    }
};

int main(){
    return 0;
}