
#include <vector>
#include <iostream>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int carry = 1;
        int i = digits.size() - 1;
        int curBit;

        while( carry != 0 )
        {
            curBit = digits[i] + carry;
            carry = curBit / 10;
            digits[i]  = curBit % 10;
            i--;

            if( i == -1 && carry == 1)
            {
                int head [] = {1};
                digits.insert( digits.begin(), head, head+1 );
                return  digits;
            }
        }
        return digits;
    }
};

int main(){
    std::vector<int> num = {9,8,9};
    Solution sl;
    for(auto &i : sl.plusOne(num))
        std::cout<<i;

}