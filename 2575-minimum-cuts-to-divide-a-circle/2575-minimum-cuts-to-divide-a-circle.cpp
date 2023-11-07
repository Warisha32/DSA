class Solution {
public:
    int numberOfCuts(int n) {
        int ans=0;
        if(n%2==0 && n>1){
            ans=n/2;
        }
        else if(n%2!=0 && n>1)
            ans=n;
        return ans;
    }
};