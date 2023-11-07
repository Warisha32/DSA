class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int res=INT_MIN;
        int time=0;
        for(int i=1;i<points.size();i++){
            int x1=points[i][0];
             int x2=points[i-1][0];
            int y1=points[i][1];
             int y2=points[i-1][1];
            int temp1=abs(x1-x2);
            int temp2=abs(y1-y2);
            int res=max(temp1,temp2);
            time+=res;
        }
        return time;

    }
};