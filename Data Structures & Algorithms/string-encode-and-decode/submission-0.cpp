#include<bits/stdc++.h>

class Solution {
public:

    string encode(vector<string>& strs) {
       string rs;
       for ( const string & s : strs){
        rs += to_string(s.size()) +'#' + s;
       }
       return rs;
    }

    vector<string> decode(string s) {
     vector<string> rs;
        size_t i = 0;
        while ( i < s.size()){
            size_t j = s.find('#',i);
            int length = stoi(s.substr(i,j-i));
            rs.push_back(s.substr(j+1,length));
            i = j + 1 + length;
        }
        return rs;
    }
};
