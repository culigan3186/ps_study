#include <bits/stdc++.h>
using namespace std;

int K, N, ans;
int line[10001];
int  max_line = 0;
long long mid, high, low;

int main()
{
	ios::sync_with_stdio(false); // c,c++ stream sync(false)
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> K >> N;
	
	for (int i = 0; i < K; i++)
	{
		cin >> line[i];
		if (max_line < line[i]) max_line = line[i];
	}
	low = 1;
	high = max_line;
	ans = 0;

	while (low <= high)
	{
		mid = (low + high) / 2;
		int cnt = 0;
		for (int i = 0; i < K; i++)
			cnt += line[i] / mid;

		if (cnt >= N) {
			low = mid + 1;
			if (ans < mid) ans = mid;
		}
		else {
			high = mid - 1;
		}
	}
	
	cout << ans;
}

