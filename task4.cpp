#include <iostream>
using namespace std;
bool check(int lengthofcycle);
string numbers[50];
int lengthofarray;
main()
{
    bool flag;
    cout << "enter length of array :";
    cin >> lengthofarray;
    for (int idx=0;idx<lengthofarray;idx++)
     {
        cout << "enter numbers for array :";
        cin >> numbers[idx];
     }
     int lengthofcycle;
     cout << "enter length of cycle :";
     cin >> lengthofcycle;
    
     flag=check(lengthofcycle);
     cout << flag;

}
bool check(int lengthofcycle)
    {
       bool flag;
     for(int idx=0;idx<lengthofarray-lengthofcycle;idx++)
     {
       if(idx && numbers[idx]==numbers[idx+lengthofcycle])
        {
            flag=true;
        }
        else if(lengthofcycle>lengthofarray)
        {
            flag=true;
        }
        else
        {
            flag=false;
        }
     }
     return flag;

    }