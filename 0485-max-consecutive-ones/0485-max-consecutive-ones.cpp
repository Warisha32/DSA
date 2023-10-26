class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int n=nums.size();
     vector<int>ans;
     int count=0,maxi=0;
     for(int i=0;i<n;i++){
         if(nums[i]==1){
             count++;
             if(count>maxi)
                maxi=count;
         }
         
         else 
             count=0;
              
         }
    
   
   return maxi;
    }
};