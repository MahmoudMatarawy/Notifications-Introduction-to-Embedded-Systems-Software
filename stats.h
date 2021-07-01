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
 * @file <stats.h> 
 * @brief <header file containing functions prototypes
	   calculating the median , mean , maximum , minimum , sorting the 		   array and print statistics >
 *
 * <Add Extended Description Here>
 *
 * @author <Mahmoud Matarawy>
 * @date <1/7>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
/*
	function name  :  print_statistics
	function type  :  void
	function input :  Array length , Array pointer 
	function output:  print all statistics of the array
	function return:  None
*/
void print_statistics(unsigned int *un_i_arr_ptr ,unsigned int un_i_arr_len);



/*
	function name  : print_array
	function type  : void
	function input : array length , array pointer
	function output: print all array
	function return: None 
*/ 
void print_array(unsigned int * un_i_arr_ptr ,unsigned int un_i_arr_len);


/*
	function name  : find_median
	function type  : unsigned integer
	function input : array pointer , array length
	function output: None
	function return: find the median of the array
*/
unsigned int find_median(unsigned int * un_i_arr_ptr ,unsigned int un_i_arr_len);
/*
	function name  : find_mean
	function type  : unsigned integer
	function input : array pointer , array length
	function output: None
	function return: the mean of the array
*/
unsigned int find_mean(unsigned int *un_i_arr_ptr ,unsigned int un_i_arr_len);

/*
	function name  : find_max
	function type  : unsigned integer
	function input : array pointer , array length
	function output: None
	function return: the max number of the array
*/

unsigned int find_max(unsigned int *un_i_arr_ptr ,unsigned int un_i_arr_len);


/*
	function name  : find_min
	function type  : unsigned integer 
	function input : array pointer , array length
	function output: None
	function return: the min number of the array
*/

unsigned int find_min(unsigned int *un_i_arr_ptr ,unsigned int un_i_arr_len);

/*
	function name  : array_sort
	function type  : unsigned integer
	function input : array pointer , array length
	function output: None
	function return: sorted array from largest to smallest
*/

unsigned int array_sort(unsigned int *arr_ptr ,unsigned int arr_len);


/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


#endif /* __STATS_H__ */
