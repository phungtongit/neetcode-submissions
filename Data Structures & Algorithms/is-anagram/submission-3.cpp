class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mz;
        if ( s.length() != t.length()){
            return false;
        }
        for ( char c : s ){
            mz[c]++;
        }
        for ( char c  : t){
            mz[c]--;
            if ( mz[c] < 0 )
            {
              return  false;
            }
        }
        return true;
        
    }
};
