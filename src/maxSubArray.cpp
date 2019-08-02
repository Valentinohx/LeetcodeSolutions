#include <vector>
#include <iostream>


//class Solution {
//public:
//    int maxSubArray(std::vector<int>& nums) {
//
//        int maxSum = nums[0];
//        int curSum = 0;
//
//        int len = nums.size();
//
//        if( len == 1 ) return maxSum;
//
//        for(int i = 0; i < len; i++)
//        {
//            curSum = nums[i];
//            if( maxSum < curSum ) maxSum = curSum;
//
//            for ( int j = i + 1; j < len; j++)
//            {
//                curSum += nums[j];
//                if( maxSum < curSum ) maxSum = curSum;
//            }
//        }
//        return maxSum;
//    }
//};

 class Solution {
 public:
 int maxSubArray(std::vector<int>& nums) {

     int cursum=nums[0],maxsum=nums[0];
     for(int i=1;i<nums.size();i++)
     {
         cursum = std::max(nums[i],cursum+nums[i]);
         maxsum = std::max(maxsum,cursum);
     }
     return maxsum;

 }

 };

int main(){
    std::vector<int> num = {-2,1,-3,4,-1,2,1,-5,4};
        Solution sl;
    std::cout<< sl.maxSubArray(num);
}