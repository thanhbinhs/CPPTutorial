#include<bits/stdc++.h>

using namespace std;

void inputSet(set<int> s, int n){
	for(int i = 0;i<n;i++){
		int a;	cin>>a;
		s.insert(a);
	}
}

void exam1(){
	int T; cin>>T;
	while(T--){
		set<int> s;
		int n;	cin>>n;
		for(int i = 0;i<n;i++){
			int a; cin>>a;
			s.insert(a);
		}
		cout<<s.size()<<endl;
	}
}

void exam2(){
	int T;	cin>>T;
	while(T--){
		set<int> s;
		int n; cin>>n;
		for(int i = 0;i<n;i++){
			int a;	cin>>a;
			s.insert(a);
		}
		int q;	cin>>q;
		while(q--){
			int a;	cin>>a;
			if(s.count(a)){
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
		set<int> s;
		for(int &x:a)	cin>>x;
		for(int i = 0;i<n2;i++){
			int x;	cin>>x;
			s.insert(x);
		}
		bool ok = false;
		for(int x:a){
			if(s.find(x) == s.end()){
				cout<<x<<" ";
				ok = true;	
			}
		}
		if(!ok)	cout<<"NOT FOUND\n";
		else	cout<<"\n";
	}
}

void exam6(){
	int t;	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		set<char> se;
		for(char x:s){
			se.insert(tolower(x));
		}
		if(se.size() == 26)	cout<<"YES\n";
		else				cout<<"NO\n";
	}
}

void exam7(){
	int t;	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		set<string> se;
		stringstream ss(s);
		string word;
		while( ss>>word){
			se.insert(word);
		}
		cout<<se.size()<<endl;
	}
}


int main(){
	exam7();
	
	return 0;
}