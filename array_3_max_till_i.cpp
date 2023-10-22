#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max_no=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max_no = max(max_no, arr[i]);
        cout << "Largest No in the array till " << i << " is: " << max_no << endl;
    }

    return 0;
}