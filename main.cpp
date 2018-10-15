#include "long_seq.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

Long_seq obj;

double param=5;

int ArrLen=0, i;

int main(){

cout << "\nEnter array length" << endl;

cin >> ArrLen;

int Arr[ArrLen];

for( i = 0 ; i<ArrLen ; i++){

  cout << "\nEnter element number"<< i << ":" << endl;
  
  cin >> Arr[i];
  
}

cout << "\n Entered array: " << endl;

for( i = 0 ; i<ArrLen ; i++){

  cout << Arr[i] << "\t" << endl;

}

cout << "\n" << endl;

cout << "\n Enter parameter " << endl;

cin >> param;

std::pair <int,int> x;

x = obj.GetStartDayAndSeqLength(Arr, ArrLen, param);

cout << " Start index: " << x.first << " Sequence length " << x.second << endl;

}
