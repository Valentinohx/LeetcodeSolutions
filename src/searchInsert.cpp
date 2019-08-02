
#include <vector>
#include <iostream>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {

        if ( target < nums[0] || nums.empty() ) return 0;
        if ( nums.size() == 1)
        {
            if(target <= nums[0]) return 0;
            else return 1;
        }

        auto it = nums.begin();
        int index = 0;

        while( (it+1) != nums.end() && it != nums.end() )
        {
            if( *it == target) return index;

            if( *it < target)
            {
                if( *(it+1) < target )
                {
                    it ++;
                    index++;
                }
                else return ++index;
            }
        }
        return ++index;
    }
};

int main(){

    std::vector<int> s ={1, 3, 5, 6};

    Solution sl;
    std::cout<< sl.searchInsert(s, 2);
}
