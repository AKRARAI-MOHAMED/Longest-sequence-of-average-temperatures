
#include "long_seq.hpp"

class Long_seq;

Long_seq::Long_seq(){

  param = 5;
        
} 

std::pair<int,int> Long_seq::GetStartDayAndSeqLength(int* P,int length, double param){

  int start_index, curr_index, max_seq, curr_seq, seq_len, j = 0, k = 0;
  
  float min_thresh, max_thresh, avg, sum; 
  
  start_index = 1;
  
  curr_index = 1;
  
  curr_seq = 1;
  
  seq_len = 1;
  
  max_seq = 1;
  
  for(int i=0 ; i<(length-1) ; i++){
  
    sum = *(P+i);
    	 
  for(j=i+1 ; j<curr_seq+1 ; j++){
  
      sum += *(P+j);

  }
  	 
  avg = (sum/(length-i));
  	   
  k = i;	 
  
  while(k<curr_seq+1){      
      
      min_thresh = avg-(param/2);
      
      max_thresh = avg+(param/2);
            
      if(((*(P+k))>=(min_thresh)) && ((*(P+k))<=(max_thresh))){
      
        seq_len++;
      
      }
      
      else{
        
        max_seq = curr_seq-1;
        
        start_index = i+1;
                
        i = k;
        
        curr_seq = 0;

        break;
      
      }
      
      k++;
      
    }
    
    curr_seq++;	
    
  }      
   
  return std::make_pair(start_index,max_seq);
  
}

