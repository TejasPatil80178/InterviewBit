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
vector<Interval> Solution::merge(vector<Interval> &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    sort(a.begin(),a.end(),compare);
    vector<Interval> v;
    v.push_back(a[0]);
    int j = 0;
    for(int i=1;i<a.size();i++)
    {
        if(a[i].start <= v[j].end)
        {
            if(v[j].end < a[i].end)
            {
                v[j].end = a[i].end;
            }
        }
        else{
            v.push_back(a[i]);
            j++;
        }
    }
    
    return v;
}
