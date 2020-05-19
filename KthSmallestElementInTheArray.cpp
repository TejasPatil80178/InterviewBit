 
/*
int soln(vector<int> a,int b)
{
    sort(a.begin(),a.end());
    return a[b-1];
}

int Solution::kthsmallest(const vector<int> &a, int k) {
   return soln(a,k);
}
*/


int Solution::kthsmallest(const vector<int> &a, int k) {
    int n = a.size();
	int min = *min_element(a.begin(),a.end());
	int max = *max_element(a.begin(),a.end());
	
	while(min<=max)
	{
		int mid = (min+max) / 2;
		
		int cless = 0;
		int cequal = 0;
		for(int i=0;i<n;i++)
		{
			if(a[i] < mid) cless++;
			else if(a[i]==mid) cequal++;
		}
	//	cout<<cless<<" "<<cequal<<" "<<mid<<endl;
		if(cless < k && (cless+cequal) >= k) {
			return mid;
		}
		else if(cless>=k) max = mid-1;     /////element to find is less than mid
		else min = mid+1;
    
   }
   
   
   return 0;
}
