
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> res(2);
        res[0] = {1};
        res[1] = {1, 1};

        for (int i = 2; i <= rowIndex; i++){
            vector<int> tmp(i+1,1);
            int h = 0;
            for (int j = 1; j < i; j++)
            {
                tmp[j] = res[i-1][h] + res[i-1][(h) + 1];
                h++;
            }
            res.push_back(tmp);
        }
        return res[rowIndex];
    }
};

int main(){
    return 0;
}