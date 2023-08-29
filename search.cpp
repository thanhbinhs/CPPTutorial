#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

//Linear Search	O(n)
/*
10 3
1 2 8 9 0 7 6 5 3 4
*/

bool ls(int a[],int n, int x){
	for(int i = 0;i<n;i++){
		if(a[i] == x)	return true;
	}
	return false;
}

//Binary Search O(logn)
//Cac phan tu trong mang phai duoc sap xep tang dan, giam dan
/*
10 3
1 2 3 4 5 6 7 8 9 10
*/

bool bs(int a[],int n, int x){
	int l = 0, r = n-1;
	while(l <= r){
		int m  = ( l+r) /2; 
		if(a[m] == x){
			return true;
		}else if(a[m] < x){
			l = m+1;
		}else{
			r = m -1;
		}
	}
	return false;
}

bool binarySearch(int a[],int l,int r,int x){
	if(l>r)
		return false;
	int m =(l+r)/2;
	if(a[m] == x)	return true;
	else if(a[m] < x)	return binarySearch(a,m+1,r,x);
	else return binarySearch(a,l,m-1,x);
}


//Lib algorithm : binary_search(a,a+n,x);
//					binary_search(v.begin(),v.end(),x);

//Tim vi tri dau tien cua 1 phan tu x trong 1 mang da sap xep
/*
10 3
1 2 2 3 3 3 7 8 9 9
*/

void exam(){
	int n;	cin>>n;
	int a[i];
	for(int i = 0;i<n;i++)	cin>>a[i];
	
	int res = -1;
	int l = 0,r = n-1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m] == x){
			res = m;
			r = m -1;
		}else if(a[m] < x){
			l = m+1;
		}else{
			r = m - 1;
		}
		}
	}
}

//Lower_bound(iter1,iter2,key)	[iter1, iter2) => tra ve vi tri cua phan tu dau tien >= key
//Ap dung cho mang, vector duoc sap xep, set map

void lowerBound(){
	int n,x;	cin>>n>>x;
	int a[n];
	for(int i = 0;i<n;i++)	cin>>a[i];
}



int main(){
	int n,x; cin>>n>>x;
	int a[n];
	for(int i = 0;i<n;i++)	cin>>a[i];
	if(binary_search(a,a+n,x)){
		cout<<"FOUND\n";
	}else{
		cout<<"NOT FOUND\n";
	}
	
	return 0;
}