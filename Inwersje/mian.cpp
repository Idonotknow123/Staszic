#include <bits/stdc++.h>

using namespace std;

/*long long _Sortuj(long long arr[], long long temp[],long long left, long long right);
long long merge(long long arr[], long long temp[], long long left,long long mid, long long right);*/
long long *arr;

long long merge(long long arr[], long long temp[], long long left,long long mid, long long right)
{
    long long i, j, k;
    long long inv_count = 0;

    i = left;
    j = mid;
    k = left;
    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            inv_count = inv_count + (mid - i);
        }
    }

    while (i <= mid - 1)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
}

long long _Sortuj(long long arr[], long long temp[],long long left, long long right)
{
    long long mid, inv_count = 0;
    if (right > left)
    {
        mid = (right + left) / 2;
        inv_count += _Sortuj(arr, temp,left, mid);
        inv_count += _Sortuj(arr, temp,mid + 1, right);
        inv_count += merge(arr, temp, left,mid + 1, right);
    }
    return inv_count;
}

long long Sortuj(long long arr[], long long array_size)
{
    long long temp[array_size];
    return _Sortuj(arr, temp, 0, array_size - 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie(0);
    long long n;
    cin>>n;
    arr = new long long[n];
    for (long long i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    long long ans = Sortuj(arr, n);
    cout << ans;
    return 0;
}