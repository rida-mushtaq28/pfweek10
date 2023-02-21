#include <iostream>
using namespace std;
main()
{
    int size=0;
    cout << "enter size :";
    cin >> size;
    int elements[size];
    for (int x=0;x<size;x++)
     {
        cout << "enter elements:";
        cin >> elements[x];
     }
     int final[20];
     int count=0;
     for (int x=1;x<size-1;x++)
      {
        if ((elements[x]>elements[x-1]) && (elements[x]>elements[x+1]))
         {
           final[count]=elements[x];
           count++;
         }
      }

      if(count!=0)
          {
            for (int x=0;x<count;x++)
             {
               cout << final[x] << ",";
             }
          }
      else
      {
         cout << "no peaks"<< endl;
      }    
     
}