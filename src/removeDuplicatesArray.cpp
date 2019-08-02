
#include <vector>
#include <iostream>


class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {

        auto it = nums.begin();
        while ((it + 1 ) != nums.end() && it != nums.end())
        {
            if( *it == *(it + 1) ){
                nums.erase( it + 1 );
            }
            else it++;
        }
        return nums.size();

    }
};

int main(){
    std::vector<int> num = {0,0,1,1,1,2,2,3,3,4};
    Solution sl;
    std::cout << sl.removeDuplicates(num);

}