\\ This one i have did using recursion and it had passed 42/44 test cases with 43rd giving time limit exceeded ...
  class Solution {
public:
    int do_work(vector<vector<int>> t,int i,int j,int n,int m){
        if(i<n && j<m){
            if(i==n-1){
                return t[i][j];
            }
            else{
                return t[i][j]+min(do_work(t,i+1,j,n,m),do_work(t,i+1,j+1,n,m));
            }
        }
        return 0;
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        int m=triangle[n-1].size();
        return (do_work(triangle,0,0,n,m));
    }
};



\\ The original DP answer...
  class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<triangle[i].size();j++){
                triangle[i][j]+=min(triangle[i+1][j],triangle[i+1][j+1]);
            }
        }
        return triangle[0][0];
    }
    
};
