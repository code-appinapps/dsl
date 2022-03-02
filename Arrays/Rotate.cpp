#include <iostream>

using namespace std;
void rotate(int a[],int n)
{
   int i = 0,j=n-1;
   while(i != j)
   {
       //swap(a[i], a[j]);
       int temp = a[i];
       a[i] = a[j];
       a[j] = temp;
       j--;//reverse 
       i++;
   }
}

void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);

    printArray(a,n); 
    rotate(a , n);
    printArray(a,n);

    return 0;
} 
