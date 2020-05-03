int bSearch(vector<int> a,int b,int s,int e)
{
    while(s<=e)
    {
        //cout<<s<<" "<<e<<endl;
        int mid = (s+e)/2;
        if(a[mid]==b)
        {
            return mid;
        }
        else if(a[mid] > b)
        {
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}

int Solution::search(const vector<int> &a, int b) {
    int s = min_element(a.begin(),a.end()) - a.begin();
    int n = a.size();
    int e = n-1;
    if(a[s]<=b && a[e]>=b)
    {
        return bSearch(a,b,s,e);
    }
    else{
       return bSearch(a,b,0,s-1); 
    }
}
