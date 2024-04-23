int bS(int a[], int &n, int &x)
{
    if(binary_search(a, a + n, x) == 1) return 1;
    return -1;
}

int main()
{
    faster();
    int t = 1, n, m, x;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        cout << bS(a, n, x) << endl;
    }
    return 0;
}
