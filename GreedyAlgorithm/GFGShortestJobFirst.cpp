class Solution {
  public:
    long long solve(vector<int>& bt) {
        // code here
        sort(bt.begin(), bt.end());
        long long ans = 0;
        int waiting_time_curr = 0;
        int waiting_time_total =0;
        int n = bt.size();
        
        for(int i=0;i<n-1;i++)
        {
           waiting_time_curr+=bt[i];
           waiting_time_total+=waiting_time_curr;
        }
        ans = double(waiting_time_total)/double(n) ;
        
        return ans; 
    }
};
