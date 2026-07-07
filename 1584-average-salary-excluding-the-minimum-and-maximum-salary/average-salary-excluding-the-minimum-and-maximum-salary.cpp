class Solution {
public:
    double average(vector<int>& salary) {
        double avg;
        double maxs=salary[0];
        double mins=salary[0];
        double sum=0;
        for(double x: salary){
            sum+=x;
            maxs=max(maxs,x);
            mins=min(mins,x);
        }
        avg=(sum-maxs-mins)/(salary.size()-2);
        return avg;
        
    }
};