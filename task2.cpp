#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "enter size :";
    cin >> size;
    int miles[size];
    for (int x=0;x<size;x++)
     {
        cout << "enter miles:";
        cin >> miles[x];
     }
     int count=0;
     for (int x=0;x<size-1;x++)
      {
        if (miles[x+1]>miles[x])
         {
            count++;
         }
      }
      cout << count;
}