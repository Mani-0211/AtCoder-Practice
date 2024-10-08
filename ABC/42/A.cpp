/*
* Problem   - Iroha and Haiku
* Reference - https://atcoder.jp/contests/abc042/tasks/abc042_a
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int arr[3];

	cin >> arr[0] >> arr[1] >> arr[2];

	sort(begin(arr), end(arr));

	if (arr[0] == 5 && arr[1] == 5 && arr[2] == 7)
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}
}