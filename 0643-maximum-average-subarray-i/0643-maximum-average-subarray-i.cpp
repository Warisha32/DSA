class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
          
         long int sum=0;
        long int maxi=INT_MIN;
        int i=0;
        int j=0;
        double ans=0.0;
        int n=nums.size();
        
        while(j<n){
            sum+=nums[j];
            if((j-i+1)<k)
                j++;
            else if((j-i+1)==k){
                maxi=max(maxi,sum);
                sum-=nums[i];
               
                i++;
                j++;
            }
        }
         ans=(double)maxi/(double)k;
        return ans;
    }
};