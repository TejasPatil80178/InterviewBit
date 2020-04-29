vector<int> Solution::nextPermutation(vector<int> &a) {
    int n = a.size();
	int i = n-1;
	bool flag = 1;
	while(flag && i>=1)
	{
	    /////find the element which dosen't belong to the non decreasing sequence
		if(a[i-1] > a[i])
		{
		    i--;
		}
		else{
		    
		    //find the smallest element in the sequence which is greater than the non decreasing element
		    for(int j = n-1;j>i-1;j--)
		    {
		        if(a[j] > a[i-1])
		        {
		            swap(a[j],a[i-1]); //swap them
		            sort(a.begin()+i,a.end()); //sort the remaning list
		            break;
		        }
		    }
		    flag = 0;
		}
	}
	if(flag)
	{
		sort(a.begin(),a.end());
	} 
	return a;
}
