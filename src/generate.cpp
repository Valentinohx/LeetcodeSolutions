
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 0) return vector<vector<int>>();
        if(numRows == 1) return vector<vector<int>>{{1}};
        if(numRows == 2) return vector<vector<int>>{{1}, {1,1}};

        vector<vector<int>> res(2);
        res[0] = {1};
        res[1] = {1, 1};

        for (int i = 3; i <= numRows; i++){
            vector<int> tmp(i,1);
            int h = 0;
            for (int j = 1; j < i - 1; j++)
            {
                tmp[j] = res[i-2][h] + res[i-2][(h) + 1];
                h++;
            }
            res.push_back(tmp);
        }
        return res;
    }
};

int main(){
    Solution sl;
    sl.generate(5);
}