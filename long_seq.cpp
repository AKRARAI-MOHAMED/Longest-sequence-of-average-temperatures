#include "long_seq.hpp"

class Long_seq;

Long_seq::Long_seq(){

  param = 5;
        
}
 

std::pair<int,int> Long_seq::GetStartDayAndSeqLength(int* P, int length, double param){

  int start_index, curr_index, max_seq, curr_seq, seq_len, j = 0, k = 0, i = 0;  
  float min_thresh, max_thresh, avg, sum;   
  start_index = 1;  
  curr_index = 1;  
  max_seq = 1;
  
  for( i=0 ; i<length-1 ; i++){
  
    sum = *(P+i);    
    curr_seq = i+1;
    	 
    for(j=i+1 ; j<curr_seq+1 ; j++){
  
      sum += *(P+j);      	 
      avg = (sum/(curr_seq+1-i));      
      std::cout << "avg :" << avg << std::endl;  	   
      k = i;	    
      seq_len = 0;
  
      while(k<curr_seq+1){      
      
        min_thresh = avg-(param/2);      
        max_thresh = avg+(param/2);
            
        if(((*(P+k))>=(min_thresh)) && ((*(P+k))<=(max_thresh))){
      
          seq_len++;
      
        }
      
        else{                
     
          //i = k+1;        
          curr_seq = 0;
          std::cout << "Break sequence loop" << std::endl;
          break;
      
        }
      
        k++;
      
      }
      
      if(seq_len > max_seq){
          
        max_seq = seq_len;        
        std::cout << "Found new max_seq:" << max_seq << std::endl;       
        start_index = i+1;
          
      }
      
      if(k == curr_seq+1 && seq_len != length && j!=length-1){
      
        std::cout << "Increment sequence" << std::endl;
        curr_seq++;
      
      }
      
    }
    
    if(seq_len == length){
    
      std::cout << " ARRAY IS A FULL SEQUENCE " << std::endl;        
      break;
          
      }
    
  }      
   
  return std::make_pair(start_index, max_seq);
  
}

