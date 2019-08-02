#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {

        auto itmin = min_element(std::begin(prices), std::end(prices));
        auto itmax = max_element(std::begin(prices), std::end(prices));

        if (itmin < itmax ) return *itmax - *itmin;
        int MProfit = 0;

        for(int i = 0; i < prices.size(); i++)
        {
            itmax = max_element(std::begin(prices) + i, std::end(prices));
            MProfit = max(MProfit, *itmax - prices[i]);
        }
        return MProfit;

        // int MProfit = 0;
        // for( int i = 0; i < prices.size(); i++ ){
        //     for ( int j = i + 1; j < prices.size(); j++ ){
        //         MProfit = max(prices[j] - prices[i], MProfit);
        //     }
        // }
        // return MProfit;

    }
};

int main(){
    return 0;
}