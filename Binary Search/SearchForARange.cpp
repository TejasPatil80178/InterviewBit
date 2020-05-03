int bSearch(vector<int> a,int b,bool flag)
{
    int s = 0;
    int e = a.size() - 1;
    int result = -1;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(a[mid]==b)
        {
            result = mid;
            if(flag) e = mid-1;
            else s = mid+1;
            
        }
        else if(a[mid] < b)
        {
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return result;
}

vector<int> Solution::searchRange(const vector<int> &a, int b) {
    
    int min = bSearch(a,b,1);
    int max = bSearch(a,b,0);
    vector<int> v;
    v.push_back(min);
    v.push_back(max);
    return v;
}
