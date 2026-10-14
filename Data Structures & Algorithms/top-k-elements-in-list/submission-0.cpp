#include <iostream>
#include<vector>
#include<unordered_map>
#include <algorithm>
#include <utility>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mz;
        for ( int num : nums){
           mz[num]++;
        }
        vector <pair<int,int>> z;
        for  ( auto& p : mz){
            z.push_back({p.second,p.first});
        }
        sort(z.rbegin(),z.rend());
         vector<int> a;
     for ( int i =0 ; i < k; i++){
        a.push_back(z[i].second);
     }
    return a;
    }
};
