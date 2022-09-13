class Solution {
public:
    int trap(vector<int>& a) {
        int i=0,j=a.size()-1;
        int leftmax=0,rightmax=0;
        long long int waterstored=0;
        while(i<=j){
          if(a[i]<=a[j]){
            if(leftmax<=a[i])leftmax=a[i];
            else waterstored+=leftmax-a[i];
            i++;
          }
          else{
            if(rightmax<=a[j])rightmax=a[j];
            else waterstored+=rightmax-a[j];
            j--;
          }
        }
        return waterstored;
    }
};