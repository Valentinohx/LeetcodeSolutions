//
// Created by valentinohx on 03/06/19.
//

#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    std::string longestPalindrome(std::string s) {
        int len = s.size();
        if (len == 0) return s;
        std::string resultStr = "";
        for (int i=0; i<len; ++i){
            int left = i;
            int right = i;

            while (left > 0 && right < len - 1 && s[left - 1] == s[right + 1]){
                --left;
                ++right;
            }
            if (right - left + 1 > resultStr.size()){
                resultStr = s.substr(left, right - left + 1);
            }
        }

        for (int i = 0; i < len - 1; ++i){
            if (s[i] == s[i+1]){
                int left = i;
                int right = i+1;
                while (left > 0 && right < len - 1 && s[left - 1] == s[right + 1]){
                    --left;
                    ++right;
                }
                if (right - left + 1 > resultStr.size()){
                    resultStr = s.substr(left, right - left + 1);
                }
            }
        }
        return resultStr;
    }
};

int main()
{
    std::string ss = "cccc";
//        std::string ss = "abaxabaxabb";

    Solution sl;
    std::cout << sl.longestPalindrome(ss);

    return  0;
}
