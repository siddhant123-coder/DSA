//Max Sum Subarray of size K
class Solution {
  public:
    int maxSubarraySum(vector<int>& a, int k) {
        int ans = INT_MIN;
        int n = a.size();
        int l=0,r=0,s=0;
        while(r<n){
            s+=a[r];
            if(r-l+1<k) r++;
            else if(r-l+1==k){
                ans = max(ans,s);
                s-=a[l];
                r++;l++;
            }
        }
        return ans;
    }
};
