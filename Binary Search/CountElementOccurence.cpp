int bsrh(vector<int> a,int b,bool flag)
{
    int s = 0;
    int e = a.size()-1;
    int mid = (s+e) / 2;
    int result = -1;
    while(s<=e)
    {
        if(a[mid]==b)
        {
            result = mid;
            if(flag)
            {
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        else if(b > a[mid])
        {
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = (s+e)/2;
    }
    
    return result;
}

int Solution::findCount(const vector<int> &a, int b) {
    int min = bsrh(a,b,1);
    int max = bsrh(a,b,0);
    if(min==-1 && max==-1) return 0;
    return max-min+1;
    
}
