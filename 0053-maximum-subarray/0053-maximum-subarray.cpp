class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN, cur=0;
        for(int i=0;i<nums.size();i++){
            cur=cur+nums[i];
            if(cur>maxi){
                maxi=cur;
            }
            if(cur<0){
                cur=0;
            }
        }
        return maxi;
    }
};