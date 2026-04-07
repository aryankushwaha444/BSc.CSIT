 #include<iostream>

 using namespace std;

 int maxm(int[], int);
 int (*ptrmaxm)(int[], int);

 int main()
 {
 	
 	ptrmaxm = &maxm;
 	int arr[1000], n, maximum;
 	cout << "Enter value of n: ";
 	cin >> n;
 	cout << endl << "Enter " << n << " integers: "<<endl;
 	for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    maximum = (*ptrmaxm)(arr, n);
    cout << endl << "Maximum value = " << maximum;
 	return 0;
 }

int maxm(int arr[], int n)
{
    int *ptrmaximum, m;
    ptrmaximum = &arr[0];
    m = arr[0];
    for(int i=1; i<n; i++)
    {
        if(m < *(ptrmaximum + i))
        {
            m = *(ptrmaximum + i);
        }
    }
    return m;
}
