#include <iostream>
#include<vector>
#include<unordered_map>
#include <algorithm>
#include <utility>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> mz;
        for ( int num : nums){
            mz[num]++;
        }
        vector<pair<int,int>> sx;
        for ( auto& z : mz){
            sx.push_back({z.second,z.first});
        }
        sort(sx.rbegin(),sx.rend());
        vector<int> rs;
        for ( int i =0 ;i < k ;i++){
            rs.push_back(sx[i].second);
        }
        return rs;

    }
};
