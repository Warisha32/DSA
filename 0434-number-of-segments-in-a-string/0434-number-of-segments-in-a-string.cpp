class Solution {
public:
    int countSegments(string s) {
        bool flag=false;
        int count=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]!=' '){
                if(!flag){
                    flag=true;
                    count++;
                }
            }
            else{
                flag=false;
            }
        }
        return count;
    }
};