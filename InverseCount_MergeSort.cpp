#include <bits/stdc++.h>
using namespace std;

long merge(vector<int> &v,vector<int> &left,vector<int> &right){
	long count  = 0;
	int i = 0,j = 0;
	while(i<left.size() || j<right.size()){
		if(i == left.size()){
			v[i+j] = right[j];
			j++;
		}
		else if(j==right.size()){
			v[i+j] = left[i];
			i++;
		}
		else if(left[i] <= right[j]){
			v[i+j] = left[i];
			i++;
		}
		else{
			v[i+j] = right[j];
			count += (left.size()-i);
			j++;
		}
	}
	
	return count;
}

long part(vector<int> &v){
	int n = v.size();
	if(n<2) {
		return (long)0;
	}
	
	int mid = (n+1)/2;
	vector<int> left;
	vector<int> right;
	
	for(int i=0;i<mid;i++){
		left.push_back(v[i]);
	}
	for(int i=mid;i<n;i++){
		right.push_back(v[i]);
	}
	
	return part(left) + part(right) + merge(v,left,right);
}

int main() {
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	cout<<part(v);
	return 0;
}
