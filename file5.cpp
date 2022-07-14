#include<bits/stdc++.h>
using namespace std;
void recurPermute(vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, int freq[])
{
    if(ds.size()==nums.size())
    {
        ans.push_back(ds);
        return;
    }
    for(int i=0; i<nums.size();i++){
        if(!freq[i]){
            ds.push_back(nums[i]);
            freq[i]=1;
            recurPermute(ds,nums,ans,freq);
            freq[i]=0;
            ds.pop_back();
        }
    }
}

vector<vector<int>> permute(vector<int> &nums){
    vector<vector<int>> ans;
    vector<int> ds;
    int freq[nums.size()];
    for(int i = 0;i<nums.size();i++) {
        freq[i] = 0;
    }
    recurPermute(ds,nums,ans,freq);
    return ans;
}

int main()
{
    vector<int> ak;
    vector<vector<int>> v;
    for(int j=1;j<4;j++)
    {
        ak.push_back(j);
    }
    v = permute(ak);
    for(int i = 0;i<v.size();i++) {
        for(auto j : v[i]) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}