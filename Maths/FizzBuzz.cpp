vector<string> Solution::fizzBuzz(int n) {
    vector<string> v;
    int j = 0;
    for(int i=1;i<=n;i++)
    {
        if(i%3==0 && i%5==0)
        {
            v.push_back("FizzBuzz");
        }
        else if(i%3==0)
        {
            v.push_back("Fizz");
        }
        else if(i%5==0)
        {
            v.push_back("Buzz");
        }
        else{
            v.push_back(to_string(i));
        }
        //cout<<v[j]<<endl;
        j++;
    }
    return v;
}
