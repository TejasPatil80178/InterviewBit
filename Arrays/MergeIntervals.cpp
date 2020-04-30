/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 
 
 bool compare(Interval a,Interval b)
 {
     return a.start < b.start;
 }
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    vector<Interval> v;
    int n = intervals.size();
    if(n==0)
    {
        v.push_back(newInterval);
        return v;
    }
    int k1 = -1;
    int k2 = -1;
    for(int i=0;i<n;i++)
    {
        if(intervals[i].end >= newInterval.start)
        {
            k1 = i;
            break;
        }
        v.push_back(intervals[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        if(newInterval.end >= intervals[i].start)
        {
            //cout<<newInterval.end<<" "<<intervals[i].start<<" "<<i<<endl;
            k2 = i;
            break;
        }
        v.push_back(intervals[i]);
    }
   // cout<<k1<<" "<<k2<<endl;
    if(k1!=-1 && k2!=-1)
    {
        if(intervals[k1].start < newInterval.start)
        {
            newInterval.start = intervals[k1].start;
            //cout<<newInterval.start<<" "<<intervals[k1].start<<endl;
        }
        if(intervals[k2].end > newInterval.end)
        {
            newInterval.end = intervals[k2].end;
            //cout<<newInterval.end<<" "<<intervals[k2].end<<endl;
        }
    }
    v.push_back(newInterval);
    sort(v.begin(),v.end(),compare);
    
    return v;
}
