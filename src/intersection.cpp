#include <vector>
#include <iostream>
#include <unordered_set>
#include <algorithm>


using namespace std;


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int>::iterator it;
        std::unordered_set<int> res;

        for(int i = 0; i < nums1.size(); i++)
        {
            if( (it = std::find(nums2.begin(), nums2.end(), nums1[i])) != nums2.end())
            {
                res.insert(nums1[i]);
                nums2.erase(it);
            }
        }
        std::vector<int> resvec;
        for(auto x : res) resvec.push_back(x);
        return resvec;
    }
};

int main(){

    return 0;
}