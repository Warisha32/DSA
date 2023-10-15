class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
             int i,j;
        vector<int> g1(2);
        bool found=false;
        for(i=0;i<=nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                g1[0]=i;
                g1[1]=j;
                found=true;
                break;
                
            }
            
          }  
            if(found)
                break;
        }
        return g1;
    }
};