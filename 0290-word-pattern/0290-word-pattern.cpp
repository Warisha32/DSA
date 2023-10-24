class Solution {
public:
    bool wordPattern(string p, string s) {
        map<char,string>mp1;
        map<string,char>mp2;
        vector<string>ans;
        int i=0;
        string temp;
        while(i<s.size()){
            if(s[i]==' '){
                ans.push_back(temp);
                temp="";
            }
            else temp+=s[i];
            i++;
        }
        ans.push_back(temp);
        if(ans.size()!=p.size())return false;
        for(int i=0;i<p.size();i++)
            mp1[p[i]]=ans[i];
        for(int i=0;i<ans.size();i++)   
            mp2[ans[i]]=p[i];
         for(int i=0;i<p.size();i++)
            if(mp1[p[i]]!=ans[i])return false;
         for(int i=0;i<p.size();i++)
            if(mp2[ans[i]]!=p[i])return false;

          return true; 
        
    }
};