vector<int> Solution::flip(string s) {
    int n = s.length();
    int i = 0;
    int j = i;
    int max = INT_MIN;
    int l = -1;
    int r = -1;
    int nz = 0;
    int no = 0;
    vector<int> v;
    while(j<n)
    {
        if(s[j]-'0'==0) nz++;
        else no++;
        
        if(nz-no>=0){
            if(nz-no > max)
            {
                l = i+1;
                r = j+1;
                max = nz-no;
            }
            j++;
        }
        else{
            i = j+1;
            j = i;
            nz = 0;
            no = 0;
        }
    }
    if(l!=-1 && r!=-1)
    {
        v.push_back(l);
        v.push_back(r);
    }
    return v;
}
