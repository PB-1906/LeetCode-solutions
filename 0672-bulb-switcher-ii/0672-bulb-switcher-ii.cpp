class Solution {
public:
    int flipLights(int n, int presses) {
          if (presses==0) return 1;
        
        if (n==1)
            if (presses>=1) return 2;

        if (n==2){
            if (presses==1) return 3;
            if (presses>=2) return 4;
        }
        if (n>=3){
            if (presses==1) return 4;
            if (presses==2) return 7;
            if (presses>=3) return 8;
        }
        
        return 0;
    }
};