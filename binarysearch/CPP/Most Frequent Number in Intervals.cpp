/*The optimal (most frequent point) is reachable in at an interval start.
So we will create a frequency counter for start and end interval points. It will help to keep the track of currently ongoing intervals in a range.
And we need all points in a sorted fashion thus we will use set. Finally, we will start traversing all the points, at a certain point we will add the points in the count and check how many ongoing intervals is in that using count, if ongoing intervals are greater than the previous ongoing intervals we will change the maxx intervals with count and update the ans with the current start point. Then to decrease the count with end to end the current point interval.
Time:- O(N)
Space:- O(N) */

#include "solution.hpp"
using namespace std;

class Solution {
    public:
    int solve(vector<vector<int>>& intervals) {
        set<int> time;
        unordered_map<int, int> start, end;
        for (int i = 0; i < intervals.size(); ++i) {
            time.insert(intervals[i][0]);
            time.insert(intervals[i][1]);
            ++start[intervals[i][0]];
            ++end[intervals[i][1]];
        }
        int count = 0, ans = 0, maxx = 0;
        for (auto it : time) {
            count += start[it];
            if (count > maxx) {
                maxx = max(maxx, count);
                ans = it;
            }
            count -= end[it];
        }
        return ans;
    }
};
