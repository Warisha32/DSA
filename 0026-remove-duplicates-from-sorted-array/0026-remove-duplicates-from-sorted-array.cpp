class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
          int n=arr.size();
      int i=0;
      for(int j=i;j<n;j++){
          if(arr[i]!=arr[j]){
              i=i+1;
              arr[i]=arr[j];
          }
      }
      return i+1;
    }
};

