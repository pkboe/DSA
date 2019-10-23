// C++ program to sort an array using bucket sort
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
// Function to sort arr[] of size n using bucket sort
void bucketSort(float arr[], int n)
{
    // 1) Create n empty buckets
    vector<float> b[n];
    
    // 2) Put array elements in different buckets
    for (int i=0; i<n; i++)
    {
       int bi = n*arr[i];// cout<<"\nindex="<<bi;// Index in bucket   7*0.897=6.279
       b[bi].push_back(arr[i]);   //b[6].push_back(0.897) first ele at 6th index
      // cout<<"pushback ele at b["<<bi<<"] is"<<arr[i]; 
    }
 
    // 3) Sort individual buckets
    for (int i=0; i<n; i++)
       sort(b[i].begin(), b[i].end());
 
    // 4) Concatenate all buckets into arr[]
    int index = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < b[i].size(); j++){
          arr[index++] = b[i][j];
        } //cout<<"\nsize of b[i]"<<b[i].size();
}
}
 
/* Driver program to test above funtion */
int main()
{
    //float arr[] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434,0.999};
    /*int s1=sizeof(arr); cout<<s1<<endl;
    int s2=sizeof(arr[0]); cout<<s2;*/
    int n;
    float a[n];
 cout<<"ENTER NO OF STUDENTS :";
          cin>>n;
             cout<<"ENTER PERCENTAGE OF "<<n<<" STUDENTS ";
          for(int i=0;i<n;i++)
          {
          
           cin>>a[i];
           a[i]=a[i]/100;
           }
    //int n = sizeof(arr)/sizeof(arr[0]);
    //cout<<"\nn="<<n;
    bucketSort(a, n);
 
    cout << "Sorted array is \n";
    for (int i=0; i<n; i++)
       cout << a[i]*100 << " ";
    return 0;
}

 /*
-------------OUTPUT--------------
   ENTER NO OF STUDENTS :6
ENTER PERCENTAGE OF 6 STUDENTS 
98.15
99.26
78.56
85.63
65.23
70.48
Sorted array is 
65.23 70.48 78.56 85.63 98.15 99.26
*/
