#include <bits/stdc++.h>
using namespace std;

int findOdd(int arr[], int n)
{
	for (int i = 0;i < n; i += 1)
	{
		int count = 0;
		for (int j = 0; j < n; j += 1)
			if (arr[i] == arr[j])
				count++;
		if (count % 2) // if the count is odd then return
			return (arr[i]);
	}
}


int main(int argc, char const *argv[])
{
	/* code */
	int t;
	cin >> t;
	while (t--)
	{
		int arr[] = {8,7,7,8,8};
		int answer = findOdd(arr,7);
		cout << answer << endl;
	}
	return 0;
}