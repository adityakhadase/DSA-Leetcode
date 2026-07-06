class Solution {
public:
    bool judgeCircle(string moves) {
        int h=0;
        int v=0;
        for(char x:moves){
            if(x=='U') v++;
            if(x=='L') h++;
            if(x=='R') h--;
            if(x=='D') v--;
        }
        if(h==0&&v==0) return true;
        else return false;
        
    }
};