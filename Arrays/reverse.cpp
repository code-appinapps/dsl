#include <iostream>

using namespace std;



/* 


Input :  arr[] = [1, 2, 3, 4, 5, 6, 7]
         d = 2
Output : arr[] = [3, 4, 5, 6, 7, 1, 2]


Example : 
Let the array be arr[] = [1, 2, 3, 4, 5, 6, 7], d =2 and n = 7 
A = [1, 2] and B = [3, 4, 5, 6, 7] 
 

    Reverse A, we get ArB = [2, 1, 3, 4, 5, 6, 7]
    Reverse B, we get ArBr = [2, 1, 7, 6, 5, 4, 3]
    Reverse all, we get (ArBr)r = [3, 4, 5, 6, 7, 1, 2]


*/

void reverse(int a[] , int start  ,int end)
{

   while (start < end)
   {
       int temp = a[start];
       a[start] = a[end];
       a[end] = temp;

       start++;
       end--;
   }
   

}


void leftRotate(int a[], int d , int n)
{
    if(d==0)
        return;

    d = d % n;

    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);

}


void printArray(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
}


int main()
{

    int a[] = {1,2,3,4,5,6,7};
    int n = sizeof(a) / sizeof(a[0]);

    //printArray(a , n);
    
    int d = 2;
 
    leftRotate(a , 2 , n);
    //cout << a[0] << endl;
    printArray(a , n);

    return 0;
}