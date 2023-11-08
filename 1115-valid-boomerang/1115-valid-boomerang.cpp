class Solution {
public:
    bool isBoomerang(vector<vector<int>>& coordinates) {
          bool ans=true;
        int x=coordinates[1][1]-coordinates[0][1];
        int y=coordinates[1][0]-coordinates[0][0];
        for(int i=2;i<coordinates.size();i++){
            int x1=coordinates[i-1][0];
            int y1=coordinates[i-1][1];
            int x2=coordinates[i][0];
            int y2=coordinates[i][1];
            if(((x2-x1)*x)==((y2-y1)*y))
                ans=false;
            
        }
        return ans;
    }
};