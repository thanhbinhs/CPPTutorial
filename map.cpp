#include<bits/stdc++.h>
#include<map>

using namespace std;


//		(key, value)
//insert
//count
//find
//erase
//ordered
//multimap
//unordered_map

//Dem so lan xuat hien cua cac phan tu trong mang, sau do in ra kem theo tuan suat cua no
/* 8
1 1 2 1 3 5 1 4
*/

void task1(){
	map<int,int> mp;
	int n;	cin>>n;
	int a[100];
	for(int i = 0;i<n;i++){
		cin>>a[i];
		mp[a[i]]++;
	}
	for(int i = 0;i<n;i++){
		if(mp[a[i]] != 0){
			cout<<a[i]<<" "<<mp[a[i]]<<endl;
			mp[a[i]] = 0;
		}
		
	}
}

//Dem so tu xuat hien bao nhieu lan trong mot sau
/*9
python
java
string
python
c++
sql
sql
java
java
*/

void task2(){
	map<string,int> mp;
	int n; cin>>n;
	for(int i = 0;i<n;i++){
		string s;	cin>>s;
		mp[s]++;
	}
	int max_fre = 0;
	string res;
	for(auto it:mp){
		if(it.second> max_fre){
			max_fre = it.second;
			res = it.first;
		}
	}
	cout<<res<<" "<<max_fre<<endl;
}



int main() {

	//map<datatype1, datatype2> mp;
//	map<int,int> mp;
	
	//Insert map
//	mp[100] = 200; // (100,200)
//	mp[200]	= 300;
//	mp.insert({300,400});
//	mp.insert({400,500});
	
	//Show size map
//	cout<<mp.size()<<endl;
//
//	mp.insert({100,100});
//	cout<<mp.size()<<endl;
	
	//For each map
//	for(pair<int,int> x:mp){
//		cout<<x.first<<" "<<x.second<<endl;
//	}
//	
//	for(auto it:mp){
//		cout<<it.first<<" "<<it.second<<endl;
//	}
//	
//	for(map<int,int>::iterator it = mp.begin();it!= mp.end();it++){
//		cout<<(*it).first <<" "<<(*it).second<<endl;
//	}
	
	
	//Search 
//	if(mp.count(500) != 0){
//		cout<<"Found\n";
//	}else{
//		cout<<"Not Found\n";
//	}
//	
//	if(mp.find(100) != mp.end()){
//		cout<<"Found\n";
//	}else{
//		cout<<"Not Found\n";
//	}
	
	//Erase
//	mp.erase(100);
//	for(auto it:mp){
//		cout<<it.first<<" "<<it.second<<endl;
//	}
	
	
	//multimap
//	multimap<int,int> mp;
//	mp.insert({1,100});
//	mp.insert({1,200});
//	mp.insert({2,100});
//	
//	for(auto it:mp){
//		cout<<it.first<<" "<<it.second<<endl;
//	}


	//Unordered_map
	unordered_map<int,int> mp;
	mp.insert({1,100});
	mp.insert({2,200});
	mp.insert({1,100});
	for(auto it:mp){
		cout<<it.first<<" "<<it.second<<endl;
	}
	return 0;
}
