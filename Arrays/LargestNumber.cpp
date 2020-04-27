int myCompare(string x,string y)
{
    string xy = x.append(y);
    string yx = y.append(x);
    
    return xy.compare(yx)>0 ? 1:0;
}

string Solution::largestNumber(const vector<int> &a) {
    int n = a.size();
    vector<string> s;
    for(int i=0;i<n;i++)
    {
        s.push_back(to_string(a[i]));
    }
    sort(s.begin(),s.end(),myCompare);
    string b = "";
    for(int i=0;i<n;i++)
    {
        if(i==0 && stoi(s[i])==0)
        {
            b = "0";
            break;
        }
        b+=s[i];
    }
    
    
    
    return b;
}
