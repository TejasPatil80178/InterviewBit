vector<int> Solution::plusOne(vector<int> &a) {
    int n = a.size();
    int i = n-1;
    bool flag = 1;
    while(i>=0 && flag)
    {
        if(a[i]+1>9)
        {
            flag = 1;
            a[i] = 0;
        }
        else{
            a[i] = a[i]+1;
            flag = 0;
        }
        //cout<<i<<" ";
        i--;
    }
   // cout<<endl;
    if(flag && a[0]==0)
    {
       // cout<<"yes"<<endl;
        a.insert(a.begin(),1);
    }
    i=0;
    while(a[i]==0){
        a.erase(a.begin());
    }
    return a;
}
