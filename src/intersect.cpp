#include <vector>
#include <iostream>
#include <unordered_set>
#include <algorithm>


using namespace std;


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int>::iterator it;
        std::vector<int> res;

        for(int i = 0; i < nums1.size(); i++)
        {
            if( (it = std::find(nums2.begin(), nums2.end(), nums1[i])) != nums2.end())
            {
                res.push_back(nums1[i]);
                nums2.erase(it);
            }
        }
        return res;
    }
};

int main(){
    std::unordered_set<int> s;
    s.insert(1);
    s.insert(5);
    s.insert(1);



    std::cout<<s.size();


}