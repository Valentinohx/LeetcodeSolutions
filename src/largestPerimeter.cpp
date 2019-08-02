#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        std::sort(A.begin(), A.end());
        for(int i = A.size() - 3; i >= 0; --i){
            if ( A[i] + A[i+1] > A[i+2] )
            {
                return A[i] + A[i+1] + A[i+2] ;
            }
        }
        return 0;
    }
};

int main(){

    return 0;
}