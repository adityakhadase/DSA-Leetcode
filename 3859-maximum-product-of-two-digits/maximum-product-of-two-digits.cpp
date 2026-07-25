class Solution {
public:
    int maxProduct(int n) {
        int first=n%10;
        n=n/10;
        int second=n%10;
        n=n/10;
        int last;
        int fmax;
        int smax;
        if(first>=second){
            fmax=first;
            smax=second;
        }
        else{
            fmax=second;
            smax=first;
        }
        while(n>0){
            last=n%10;
            n=n/10;
            if(last>=fmax){
                smax=fmax;
                fmax=last;
            }
            else if(last>=smax){
                smax=last;
            }
        }
        return fmax*smax;

    }
};