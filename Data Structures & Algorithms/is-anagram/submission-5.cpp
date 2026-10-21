class Solution {
public:
    bool isAnagram(string s, string t) {
        if ( s.length() != t.length() ) return false;
        vector<int> nz(26,0);
        for ( int i =0 ;i < s.length();i++){
            nz[s[i] -'a']++;
            nz[t[i] -'a']--; 
        }
        for ( int num : nz){
            if ( num != 0)
                return false;
            
           
        }
         return true;
    }
};
