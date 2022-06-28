#include <iostream>  
#include <conio.h>  
using namespace std;  

int main ()  
{  
    int st, mid, end, i, num;  
    cin >> num;   
    int arr[num];
     
    for (i = 0; i < num; i++)  
        cin >> arr[i];  
  
    st = 0;  
    end = num - 1; 
      
    int tgt;
    cin >> tgt;  
      
    while ( st <= end)  
    {  
        mid = ( st + end ) / 2;  
       
        if (arr[mid] == tgt)  
        {  
            cout << " Element is found at index " <<mid ;  
            exit (0);   
        }  
        else if ( arr[mid] < tgt)  
        {  
            st = mid + 1; 
        }   
        else if ( arr[mid] > tgt)  
        {  
            end = mid - 1; 
        }  
    }  
    cout << " Number is not found. " << endl;  
    return 0;  
}   