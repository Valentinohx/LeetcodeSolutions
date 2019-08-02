#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if( s.length() != t.length() ) return false;

        vector<int> counter(26,0);
        for(int i = 0; i < s.length(); i++)
        {
            counter[s.at(i) - 'a']++;
            counter[t.at(i) - 'a']--;
        }

        for (int count : counter) {
            cout<<count;
            if (count != 0) {
                return false;
            }
        }
        return true;
    }
};

int main(){
    return 0;
}