class Solution {
public:
   int shipWithinDays(vector<int>& weights, int days) {
        int l=0,r=0,n=weights.size();
        for(int i=0;i<n;i++){
            l=max(l,weights[i]);
            r+=weights[i];
        }
        while(l<r){
            int mid=(l+r)/2,currWeight=0,req=1;
            for(int i=0;i<n;i++){
                if(currWeight+weights[i]>mid){
                    req++;
                    currWeight=0;
                }
                currWeight+=weights[i];
            }
            if(req>days)l=mid+1;
            else r=mid;
        }
        return l;
    }
    
};