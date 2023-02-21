#include <iostream>
using namespace std;

 main()
{
    int weights[10];
    int temporary=0;
    for (int idx=0;idx<10;idx++)
     {
        cout <<"enter weigths:";
        cin >> weights[idx];
     }
    for (int x=0;x<10;x++)
    {
        for(int y=x+1;y<10;y++)
        {
        if (weights[x]>weights[y])
        {
          temporary=weights[x];
          weights[x]=weights[y];
          weights[y]=temporary;
        }

        } 
    }
    for (int x=0;x<10;x++)
    {
         cout << weights[x] << endl;
    }
    
}

    
