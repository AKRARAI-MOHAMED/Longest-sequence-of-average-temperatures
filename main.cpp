#include "long_seq.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

Long_seq obj;

double param=5;

int ArrLen=0, i;

int main(){

cout << "Enter array length \n" << endl;

cin >> ArrLen;

int Arr[ArrLen];

for( i = 0 ; i<ArrLen ; i++){

  cout << "Enter element number"<< i << ":\n  " << endl;
  
  cin >> Arr[i];
  
}

cout << " Entered array:\n " << endl;

for( i = 0 ; i<ArrLen ; i++){

  cout << Arr[i] << "\t" << endl;

}

cout << "\n" << endl;

cout << " Enter parameter \n " << endl;

cin >> param;

std::pair <int,int> x;

x = obj.GetStartDayAndSeqLength(Arr, ArrLen, param);

cout << x.first << " " << x.second << endl;

}



