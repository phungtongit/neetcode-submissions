#include <iostream>
#include <vector>
#include<unordered_set>

using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
     unordered_set<int> mz;
     for ( int num : nums){
        if ( mz.count(num)){
            return true;
        }else {
            mz.insert(num);
        }
     }
     return false;
    }
};
