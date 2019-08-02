#include <iostream>
#include <vector>
#include <algorithm>


class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<int> dst;
        std::merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(),  std::back_inserter(dst));
        int s = dst.size();

        if( s % 2 == 0 )
            return  ((double)(dst[ s / 2 ] + dst[ s / 2 - 1 ] )) / 2.0;
        else return  dst[s / 2];
    }
};


int main()
{
    std::vector<int> n1 = {1};
    std::vector<int> n2 = {2, 3};
    Solution sl;
    std::cout<< sl.findMedianSortedArrays(n1, n2) << std::endl;
    return 0;
}
