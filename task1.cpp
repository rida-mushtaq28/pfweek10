#include <iostream>
using namespace std;
int checkcondition(string temporary,char letter);
main()
{
    int size;
    char letter;
    cout << "enter no of string:";
    cin>>size;
    string words[size];
    for (int idx =0;idx<size;idx++)
     {
        cout <<"enter words:";
        cin >> words[idx];
     }
     cout << "enter letter:";
     cin >> letter;
     int sum=0;
    string temporary;
     for(int idx=0;idx<size;idx++)
     {
        temporary= words[idx];

        sum=sum+checkcondition(temporary,letter);
     }
     cout << sum << endl;
}
int checkcondition(string temporary,char letter)
{
    int i=0;
    int count=0;
    while(temporary[i]!='\0')
     {
        if(temporary[i]==letter)
         {
           count ++;
         }
        i++;
     }
     return count;
}