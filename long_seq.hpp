#ifndef LONG_SEQ_H
#define LONG_SEQ_H
#include <iostream>
class Long_seq{

// private: 
 
 
 public:
 
 Long_seq();
 
 double param;

 std::pair<int,int> GetStartDayAndSeqLength(int*,int, double);
 
};

#endif
