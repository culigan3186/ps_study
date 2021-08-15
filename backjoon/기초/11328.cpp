#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0);

	int n,i;
	string a,b;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a >> b;
		if (a.length()!= b.length()) {
			cout << "Impossible\n";
			continue;
		}
		bool possible =true;
		int alpha[26]={0,};
		for (int i=0;i<a.length();i++){
			alpha[a[i]-'a']++;
		}
		
		for(int i=0;i<b.length();i++){
			if(--alpha[b[i]-'a']<0){
				possible =false;
				cout << "Impossible\n";
				break;
			}
		}
		if(possible){
		
			cout<<"Possible\n";
		}	
	}
		
	
	
}
