#include <iostream>

using namespace std;

int main()
{
    int i, n;
    int count1=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            count1++;
            break;
        }
    }
    if(count1!=0)
         cout << "HARD" << endl;
    else
         cout << "EASY" << endl;
    return 0;
}
