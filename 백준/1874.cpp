#include <iostream>
#include <vector>
#include <stack>

using namespace std;
int n, tmp, cur = 1, flag;
stack<int> s;
vector<char> ans;
int main()
{
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> tmp;
		while(cur <= tmp)
		{
			s.push(cur);
			ans.push_back('+');
			cur++;
		}
		if (s.top() == tmp)
		{
			s.pop();
			ans.push_back('-');
		}
		else
		{
			cout << "NO\n";
			flag = 1;
			return 0;
		}	
	}
	if (flag == 0)
	{
		for(int i=0; i<ans.size(); i++)
		{
			cout << ans[i] <<"\n";
		}
	}
}
