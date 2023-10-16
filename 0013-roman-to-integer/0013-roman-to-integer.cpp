class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> T = { { 'I' , 1 },
                                   { 'V' , 5 },
                                   { 'X' , 10 },
                                   { 'L' , 50 },
                                   { 'C' , 100 },
                                   { 'D' , 500 },
                                   { 'M' , 1000 } };
        int n=s.size();
        int res=T[s[n-1]];
        for(int i=n-2;i>=0;i--){
            int p=T[s[i]];

            if(T[s[i]]<T[s[i+1]])
                res=res-T[s[i]];
            else
                res=res+T[s[i]];
        }
        return res;
    }
};