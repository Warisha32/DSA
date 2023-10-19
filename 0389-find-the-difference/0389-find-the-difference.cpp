class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(mp.find(t[i])==mp.end())
                return t[i];
                 if(mp[t[i]]>1)
            mp[t[i]]--;       //decreasing the frequency of the character
            else
            mp.erase(t[i]);
        }
        return 0;
    }
};