/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = intervals.size(), i = 0;
    while(i < n && newInterval.start > intervals[i].start) {
        i++;
    }
    intervals.insert(intervals.begin() + i, newInterval);
    vector<Interval> res;
    res.push_back(intervals[0]);
    for(int i=1; i<=n; i++) {
        // Overlap
        if(!res.empty() && intervals[i].start < res.back().end) {
            res.back().end = max(res.back().end, intervals[i].end);
        }
        // No Overlap
        else {
            res.push_back(intervals[i]);
        }
    }
    return res;
}

