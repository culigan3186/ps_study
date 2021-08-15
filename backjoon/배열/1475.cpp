#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
 
	int n;
	vector<int> v(9);
	cin >> n;
 
	if (n == 0) v[0]++;
	while (n > 0) {
		if (n % 10 == 9) v[6]++;
		else v[n % 10]++;
		n /= 10;
	}
	v[6] = round((double)v[6] / 2);
	cout << *max_element(v.begin(), v.end());
 
	return 0;
}
