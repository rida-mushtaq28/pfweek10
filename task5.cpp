#include <iostream>
using namespace std;
void TakeInput(int arr[], int size);
int CalculateVolume(int arr[], int size);
int lengthofarray = 0;
main()
{
  cout << "enter length of array:";
  cin >> lengthofarray;
  int numbers[lengthofarray];
  TakeInput(numbers, lengthofarray);
  int SumOfVolume = CalculateVolume(numbers, lengthofarray);
  cout << "Total Volume Is:  " << SumOfVolume << endl;
}

void TakeInput(int arr[], int size)
{
    for (int idx = 0; idx < size; idx++)
  {
    cout << "enter numbers:";
    cin >> arr[idx];
  }
}

int CalculateVolume(int arr[], int size)
{
int volume = 0;
  int sumofvolume = 0;
  for (int x = 0; x < size; x = x + 3)
  {
    volume = (arr[x]) * (arr[x + 1]) * (arr[x + 2]);
    sumofvolume = sumofvolume + volume;
  }
  return sumofvolume;
}



