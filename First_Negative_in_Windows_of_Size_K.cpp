//First Negative in Windows of Size K

class Solution {
  public:
    vector<int> firstNegInt(vector<int>& a, int k) {
        int n = a.size();
        int l=0,r=0;
        vector<int> ans;
        list<int> li;
        while(r<n){
            //calculation
            if(a[r]<0) li.push_back(a[r]);
            //window size banao
            if(r-l+1<k) r++;
            else if(r-l+1==k){
                //ans from that calculation
                if(li.empty()) ans.push_back(0);
                else{
                    ans.push_back(li.front());
                    if(li.front()==a[l]){
                        li.pop_front();
                    }
                }
                //iteration
                l++;r++;
            }
        }
        return ans;
    }
};
