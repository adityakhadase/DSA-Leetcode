class Solution {
public:
    bool isRobotBounded(string instructions) {
        char dir={'N'};
        int x=0;
        int y=0;
        for(int i=0;i<instructions.length();i++){
            if(instructions[i]=='G'){
                if(dir=='N'){
                    y+=1;
                }
                if(dir=='S'){
                    y+=-1;
                }
                if(dir=='E'){
                    x+=1;
                }
                if(dir=='W'){
                    x+=-1;
                }
            }
            if(instructions[i]=='L'){
                if(dir=='N'){
                    dir={'W'};
                }
                else if(dir=='S'){
                    dir={'E'};
                }
                else if(dir=='E'){
                    dir={'N'};
                }
                else if(dir=='W'){
                    dir={'S'};
                }
            }
            if(instructions[i]=='R'){
                if(dir=='N'){
                    dir={'E'};
                }
                else if(dir=='S'){
                    dir={'W'};
                }
                else if(dir=='E'){
                    dir={'S'};
                }
                else if(dir=='W'){
                    dir={'N'};
                }
            }
        }
        return (x == 0 && y == 0) || (dir != 'N');

        
    }
};