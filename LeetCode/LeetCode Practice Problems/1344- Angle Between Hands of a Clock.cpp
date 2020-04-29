class Solution {
public:
    double angleClock(int hour, int minutes) {
        double h = 0.5*(hour*60 + minutes);
        double m = 6*minutes;
        double a = abs(h-m);
        return min(a,360-a);
    }
};
