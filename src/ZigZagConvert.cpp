

#include <string>
#include <iostream>
#include <vector>

class Solution {
public:
    std::string convert(std::string s, int numRows) {
        std::string res = "";
        int n = s.length();
        std::vector<int> indexVec;


        int r = 0;
        while(r < numRows && r < n){
            int index = r;
            int step = 2*(numRows - 2 - r) + 1;
            while( (index + step)  < n){
                if (r==0){
                    indexVec.push_back(index);
                    index += step;
                } else{

                }

            }

        }

        for (int r = 0; r < numRows; r++){
            int j = r;
            while()
        }

    }
};


int main()
{
    return 0;
}
