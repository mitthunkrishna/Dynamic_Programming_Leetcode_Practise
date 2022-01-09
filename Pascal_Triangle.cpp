class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        v.push_back({1});
        for(int i=2;i<=numRows;i++){
            vector<int> b;
            int sizeofb=i;
            b.resize(sizeofb,0);
            b[0]=1;
            b[sizeofb-1]=1;
            vector<int> prev=v[i-2];
            int sizeofprev=i-1;
            for(int j=1;j<sizeofprev;j++){
                b[j]=prev[j-1]+prev[j];
            }
            v.push_back(b);
        }
        return v;
    }
};
