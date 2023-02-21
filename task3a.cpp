#include <iostream>
using namespace std;
 bool checkcondition(int pre,int cur,int nex);
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
     bool flag;
     for (int x=1;x<size-1;x++)
      {
        flag=checkcondition(elements[x-1],elements[x],elements[x+1]);
        if(flag==true)
        {
        final[count]=elements[x];
        x++;
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
 bool checkcondition(int pre,int cur,int nex)
{
   bool flag=false;
   if (pre<cur && cur>nex)
   {
    flag=true;
   }
   return flag;
}