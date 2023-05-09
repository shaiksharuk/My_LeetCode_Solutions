class Solution {
public:
    double average(vector<int>& salary) {
        
        int min = INT_MAX, max = INT_MIN, len = salary.size();
        int sum = 0;
        for(int x : salary)
        { 
            if(min >= x) 
                min = x;
            if(max <= x)
                max = x;
            sum += x;

        }
         
        return (double)(sum - min - max)/(double)(len - 2) ;
    }
};
