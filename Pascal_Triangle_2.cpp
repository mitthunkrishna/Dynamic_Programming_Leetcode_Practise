class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> prev;
        prev.push_back(1);
        if(rowIndex==0){
            return prev;
        }
        for(int i=1;i<=rowIndex;i++){
            vector<int> ans(i+1);
            ans[0]=1;
            ans[i]=1;
            for(int j=1;j<(i);j++){
                ans[j]=prev[j-1]+prev[j];
            }
            if(i==rowIndex){
                return ans;
            }
            prev=ans;
        }
        return prev;
    }
};
