#include<bits/stdc++.h>

using namespace std;

void exam1(){
	int T;	cin>>T;
	while(T--){
		map<int,bool> mp;
		int n;	cin>>n;
		for(int i = 0;i<n;i++){
			int x;	cin>>x;
			mp[x] = true;
		}
		cout<<mp.size()<<endl;
	}
}


void exam2(){
	int T;	cin>>T;
	while(T--){
		map<int,bool> mp;
		int n;	cin>>n;
		for(int i = 0;i<n;i++){
			int x;	cin>>x;
			mp[x] = true;
		}
		int q;	cin>>q;
		while(q--){
			int x;	cin>>x;
			if(mp.count(x) != 0){
				cout<<"YES\n";
			}else{
				cout<<"NO\n";
			}
		}
	}
}

void exam3(){
		int t;	cin>>t;
	while(t--){
		int n1,n2;
		cin>>n1>>n2;
		int a[n1];
		map<int,bool> mp;
		for(int &x:a)	cin>>x;
		for(int i = 0;i<n2;i++){
			int x;	cin>>x;
			mp[x] = true;
		}
		bool ok = false;
		for(int x:a){
			if(mp[x] == false) {
				cout<<x<<" ";
				ok = true;	
			}
		}
		if(!ok)	cout<<"NOT FOUND\n";
		else	cout<<"\n";
	}
}

void exam4(){
	int t;	cin>>t;
	while(t--){
		int n;	cin>>n;
		map<long long,long long> mp;
		for(int i = 0;i<n;i++){
			long long x;	cin>>x;
			mp[x]++;
		}
		long long res, fre = INT_MIN;
		for(auto it:mp){
			if(it.second > fre){
				fre = it.second;
				res = it.first;
			}
		}
		cout<<res<<" "<<fre<<endl;
	}
}


void exam5(){
	int t;	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		map<char,int> mp;
		for(char x:s){
			mp[x]++;
		}
		char res;
		int fre = INT_MIN;
		for(auto it:mp){
			if(it.second > fre){
				res = it.first;
			}
		}
		cout<<res<<endl;
	}
}

void exam6(){
	int t;	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		map<char,bool> mp;
		for(char x:s){
			mp[tolower(x)] = true;
		}
		if(mp.size() == 26)	cout<<"YES\n";
		else				cout<<"NO\n";
	}
}


void exam7(){
	int t;	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		map<string,bool> mp;
		stringstream ss(s);
		string word;
		while( ss>>word){
			mp[word] = true;
		}
		cout<<mp.size()<<endl;
	}
}

int main(){
	exam7();
	
	return 0;
}