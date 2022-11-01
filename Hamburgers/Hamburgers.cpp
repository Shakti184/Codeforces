#include <bits/stdc++.h>
using namespace std;

// void mTc(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n;
// 		cin>>n;
		

// 		cout<<"\n";
// 	}
// }


void sTc(){
	string ss;cin>>ss;
	long long nb,ns,nc;cin>>nb>>ns>>nc;
	long long pb,ps,pc;cin>>pb>>ps>>pc;
	long long r;cin>>r;
	long long ans=0;
	int b=0,c=0,s=0;

	for(int i=0;i<ss.size();i++){
		if(ss[i]=='B')b++;
		if(ss[i]=='S')s++;
		if(ss[i]=='C')c++;
	}
//TLE APPROCH
	// for(int i=1;i<50000;i++){
	// 	long long x=max(0ll,(b*i)-nb)+max(0ll,(s*i)-ns)*ps+max(0ll,(c*i)-nc)*pc;
	// 	if(x<=r) ans=i;
	// 	else break;
	// }

//Binnary Search APPROCH
	long long l=0,h=1e15,i;
	while(h-l>1){
		i=l+(h-l)/2;
		long long x=max(0ll,(b*i)-nb)*pb+max(0ll,(s*i)-ns)*ps+max(0ll,(c*i)-nc)*pc;
		if(x<=r){
			ans=i;
			l=i;
		}else{
			h=i;
		}
	}
	cout<<ans;
}

int main() {
	
ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

	//mTc();
	sTc();
	return 0;
}
