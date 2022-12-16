#include <iostream>
using namespace std;


int main()
{
    int arr[10], i, x, n;
    cout << "\n\n enter the nom of element: ";
    cin >> n;
    cout << "\n\n enter the element : ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "\n\n enter the pos you want to remove: ";
    cin >> x;
    for (i = x; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    n = n - 1;
    cout << "\n\n";
    for (i = 0; i < n; i++) {
        cout << arr[i] << "\n";
    }
    return 0;
}

    


