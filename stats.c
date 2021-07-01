/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"
unsigned char find_max2(unsigned char *un_ch_arr_ptr ,unsigned int un_i_arr_len){
  unsigned char max ;
  max = *un_ch_arr_ptr;
  unsigned char x = 0 ;
  for(char i = 0 ; i < un_i_arr_len ; i++)
  {
     if(*(un_ch_arr_ptr+i)>max){
        max = *(un_ch_arr_ptr+i) ;
        x = i ;
     }
  }
  return x ;  


}
/* Size of the Data Set */
#define SIZE (40)


/*
	function name  : find_min
	function type  : unsigned integer 
	function input : array pointer , array length
	function output: None
	function return: the min number of the array
*/

unsigned char find_min(unsigned char *un_ch_arr_ptr ,unsigned int un_i_arr_len){
  unsigned char min ;
  min = *un_ch_arr_ptr;
  for(char i = 0 ; i < un_i_arr_len ; i++)
  {
     if(*(un_ch_arr_ptr+i)<min){
        min = *(un_ch_arr_ptr+i) ;
     }
  }
  return min ;  


}


/*
	function name  : find_max
	function type  : unsigned integer
	function input : array pointer , array length
	function output: None
	function return: the max number of the array
*/

unsigned char find_max(unsigned char *un_ch_arr_ptr ,unsigned int un_i_arr_len){
  unsigned char max ;
  max = *un_ch_arr_ptr;
  for(char i = 0 ; i < un_i_arr_len ; i++)
  {
     if(*(un_ch_arr_ptr+i)>max){
        max = *(un_ch_arr_ptr+i) ;
     }
  }
  return max ;
}








/*
	function name  : find_mean
	function type  : unsigned integer
	function input : array pointer , array length
	function output: None
	function return: the mean of the array
*/
unsigned char find_mean(unsigned char *un_ch_arr_ptr ,unsigned int un_i_arr_len){
  unsigned int sum=0;
  for(char a = 0 ; a < un_i_arr_len ; a++)
  {
  	sum+=*(un_ch_arr_ptr+a);
  	//printf("SUM = %d \n",sum);
  }
  unsigned char mean ;
  mean = sum / un_i_arr_len ;
  //printf("SUM = %d \n",sum);
  return mean;
}







/*
	function name  : find_median
	function type  : unsigned integer
	function input : array pointer , array length
	function output: None
	function return: find the median of the array
*/
unsigned char find_median(unsigned char *un_ch_arr_ptr ,unsigned int un_i_arr_len){
  unsigned char arr[un_i_arr_len];
  for (char a = 0 ; a < un_i_arr_len ; a++ )
  {
  	arr[a]=*(un_ch_arr_ptr+a);
  }
  unsigned char arr1[un_i_arr_len];
  unsigned char max ;
  for(char b = 0 ; b < un_i_arr_len ; b++ )
  {
  	max = find_max2(&arr[0],un_i_arr_len);
  	arr1[b] = arr[max];
  	arr[max] = 0 ;
  	
  }
  unsigned char median ;
  median = arr1[(un_i_arr_len+1)/2];
  return median;  
}







/*
	function name  : array_sort
	function type  : unsigned integer
	function input : array pointer , array length
	function output: None
	function return: sorted array from largest to smallest
*/

void array_sort(unsigned char *un_ch_arr_ptr ,unsigned int un_i_arr_len){
  unsigned char arr[un_i_arr_len];
  for (char a = 0 ; a < un_i_arr_len ; a++ )
  {
  	arr[a]=*(un_ch_arr_ptr+a);
  }
  //unsigned char arr1[un_i_arr_len];
  unsigned char max ;
  for(char b = 0 ; b < un_i_arr_len ; b++ )
  {
  	max = find_max2(&arr[0],un_i_arr_len);
  	*(un_ch_arr_ptr+b) = arr[max];
  	arr[max] = 0 ;
  	
  }
}


/*
	function name  : print_array
	function type  : void
	function input : array length , array pointer
	function output: print all array
	function return: None 
*/ 
void print_array(unsigned char * un_ch_arr_ptr ,unsigned int un_i_arr_len){

  for(char i =0 ; i < un_i_arr_len-1 ; i++)
  {
    printf(" %d ,",*(un_ch_arr_ptr+i));
  }
  printf(" %d \n",*(un_ch_arr_ptr+un_i_arr_len-1));


}



/*
	function name  :  print_statistics
	function type  :  void
	function input :  Array length , Array pointer 
	function output:  print all statistics of the array
	function return:  None
*/
void print_statistics(unsigned char *un_ch_arr_ptr ,unsigned int un_i_arr_len){
  unsigned char max ;
  max = find_max(un_ch_arr_ptr , un_i_arr_len);
  printf("MAXIMUM NUMBER IS %d \n",max);
  unsigned char min ;
  min = find_min(un_ch_arr_ptr , un_i_arr_len);
  printf("MINIMUM NUMBER IS %d \n",min);
  unsigned char med ;
  med = find_median(un_ch_arr_ptr , un_i_arr_len);
  printf("MEDIAN NUMBER IS %d \n",med);
  unsigned char mean ;
  mean = find_mean(un_ch_arr_ptr , un_i_arr_len);
  printf("MEAN NUMBER IS %d \n",mean);
  array_sort(un_ch_arr_ptr , un_i_arr_len);
  printf("SORTED ARRAY IS ");
  print_array(un_ch_arr_ptr , un_i_arr_len);
}





void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_array(&test[0],SIZE);
  print_statistics(&test[0] , SIZE );
}

/* Add other Implementation File Code Here */
