#include<bits/stdc++.h>
#include<set>

using namespace std;

//O(logn)
//insert
//size
//find
//count
//erase
//multiset<int>
//unordered_set<int>

int main(){
	set<int> s;
	
	//Insert
	s.insert(100);
	s.insert(200);
	s.insert(300);
	s.insert(100);
	s.insert(200);
	s.insert(400);
	
	cout<<s.size()<<endl;
	
	
	//Search
//	if(s.count(100)){
//		cout<<"Found\n";
//	}else{
//		cout<<"Not Found\n";
//	}
//	
//	if(s.find(800) != s.end()){
//		cout<<"Found\n";
//	}else{
//		cout<<"Not Found\n";
//	}
	
	
	//Erase
//	s.erase(100);
//	cout<<s.size()<<endl;

	//For each
//	for(int x:s){
//		cout<<x<<" ";
//	}
//	cout<<endl;
	
//	for(auto x:s){
//		cout<<x<<" ";
//	}
//	cout<<endl;

	for(set<int>::iterator it = s.begin(); it!= s.end(); it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	
	//Tham chieu phan tu
//	cout<<*s.begin()<<endl;
//	cout<<*s.rbegin()<<endl;


	
	return 0;
}