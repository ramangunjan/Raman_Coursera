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
 * @brief <programming assignment that prints statistics to the command line using a variety of c-programming operators and features >
 *
 * <Add Extended Description Here>
 *
 * @author <Gunjan Raman>
 * @date <21.02.2021 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief print an aray of given size
 *
 * This function takes an array of given size as an input. This array will be display as an output 
 *
 * @param Input A unsigned char pointer to an n-element data array
 * @param Input An unsigned integer as the size of the array
 * @param Output An unsigned char array
 * 
 *
 * @return no return
 */

	void print_array(unsigned char*, unsigned char); 

/**
 * @brief print statistics of an arary including minimum, maxmimum, mean and median
 *
 * This function just prints the statistics of an array 
 *
 * @param Input A unsigned char pointer to an n-element data array
 * @param Input An unsigned integer as the size of the array
 * @param Output Minimum, Maxmimu , mean andmedium
 * 
 *
 * @return no return
 */

	void print_statistics(unsigned char, unsigned char, unsigned char, unsigned char);


/**
 * @brief find median from an array of data and a lenght
 *
 * This function takes an array of given size as an input. Median will be calculated 
 *
 * @param Input A unsigned char pointer to an n-element data array
 * @param Input An unsigned integer as the size of the array
 * @param Output An unsigned char with median value
 * 
 *
 * @return median an unsignedd char
 */

	unsigned char find_median(unsigned char*, unsigned char);

/**
 * @brief find mean from an array of data and a lenght
 *
 * This function takes an array of given size as an input. Mean will be calculated 
 *
 * @param Input A unsigned char pointer to an n-element data array
 * @param Input An unsigned integer as the size of the array
 * @param Output An unsigned char with mean value
 * 
 *
 * @return mean an unsignedd char
 */

	unsigned char find_mean(unsigned char*, unsigned char);

/**
 * @brief find maximum from an array of data and a lenght
 *
 * This function takes an array of given size as an input. maximum will be calculated 
 *
 * @param Input A unsigned char pointer to an n-element data array
 * @param Input An unsigned integer as the size of the array
 * @param Output An unsigned char with maximum value
 * 
 *
 * @return unsigned char max value
 */

	unsigned char find_maximum(unsigned char*);


/**
 * @brief find minimum from an array of data and a lenght
 *
 * This function takes an array of given size as an input. minimum will be calculated 
 *
 * @param Input A unsigned char pointer to an n-element data array
 * @param Input An unsigned integer as the size of the array
 * @param Output An unsigned char with minimum value
 * 
 *
 * @return minimum value
 */

	unsigned char find_minimum(unsigned char*, unsigned char);


/**
 * @brief Sort an array of data and a lenght from largesst to smallest
 *
 * This function takes an array of given size as an input. It sorts it from largest to smallest
 *
 * @param Input A unsigned char pointer to an n-element data array
 * @param Input An unsigned integer as the size of the array
 * @param Output An unsigned char array sorted from largest to smallest
 * 
 *
 * @return unsignedd char array
 */

	void sort_array(unsigned char*, unsigned char);



#endif /* __STATS_H__ */
