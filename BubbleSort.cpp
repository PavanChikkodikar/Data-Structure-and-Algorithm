#include<iostream>
using namespace std;
// TC = O(n)
int main() 
{
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++)
        cin>>a[i];

    int count = 1;
        while(count < n)
        {
            for(int i=0;i<n-count;i++)
            {
                if(a[i] > a[i+1])
                {
                    int temp = a[i];
                    a[i] = a[i+1];
                    a[i+1] = temp;
                }
            }
        count++;
        }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}
