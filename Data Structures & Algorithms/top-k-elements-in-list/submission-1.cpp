class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      unordered_map<int,int> mz;
      for ( int num : nums){
        mz[num]++;
      }
        int n = nums.size();
        vector<vector<int>> bucket(n+1);
        for ( auto &p : mz){
            bucket[p.second].push_back(p.first);
        }
        vector<int> rs;
        for ( int i = n; i>= 1 ; i--){
            for ( int so : bucket[i]){
                rs.push_back(so);
                if ( rs.size()== k) return rs;
            }
        }
        return rs;
        
    }
};
