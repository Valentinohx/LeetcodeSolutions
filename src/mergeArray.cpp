#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {

        std::vector<int> dst;
        std::merge(nums1.begin(), nums1.begin()+m, nums2.begin(), nums2.begin()+n, std::back_inserter(dst));
        nums1 = dst;
    }
};

int main(){
    return  0;
}