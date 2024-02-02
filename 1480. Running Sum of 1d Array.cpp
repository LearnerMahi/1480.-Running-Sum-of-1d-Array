#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> b(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            b[i] = sum;
        }
        return b;
    }
};

int main()
{
    Solution s;
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>ans=s.runningSum(a);
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
}
