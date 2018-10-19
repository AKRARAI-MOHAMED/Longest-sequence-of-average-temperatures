/*
 * 
 *
 * @Author: Mohamed AKRARAI
 *
 */

#ifndef LONG_SEQ_H
#define LONG_SEQ_H
#include <iostream>
class Long_seq{

// private: 
 
 
 public:
 
 Long_seq();
 
 double param;
 
/* 
 * This function computes the longest sequence of values of a given array where the maximum and minimum diffrence is not 
 * more than a given parameter.
 *  
 * Input parameters: Pointer to the array of type integer,
 *                   array length of type integer,
 *                   A parameter of type double.  
 *
 * Returned parameters: a pair of integers
 * 
 */ 

 std::pair<int,int> GetStartDayAndSeqLength(int*,int, double);
 
};

#endif
