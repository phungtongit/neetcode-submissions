#include <iostream>
#include <vector>
#include<unordered_set>

using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_set<int> hash;
       for (int  num : nums ){
        if ( hash.count(num)){
            return true;
        }
        hash.insert(num);
       }
       return false;
    }
};
