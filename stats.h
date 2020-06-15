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
 * @file stats.h
 * @brief Header file for analytics of a dataset
 *
 * Header file declaring functions to find the maximum, minimum, median, 
 * and mean of a dataset, as well as functions to print these nicely
 *
 * @author Jeremy Rotman
 * @date 14 June 2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Sorts an array
 *
 * This function takes as input an array of unsigned chars and returns it
 * sorted from greatest to smallest
 *
 * @param data_array the array of unsigned chars
 * @param array_length an unsigned integer indicating the length of the array
 * @return none
 */
void sort_array(
		unsigned char* data_array, 
		unsigned int array_length
		);


/**
 * @brief Returns the maximum of an array
 *
 * This function takes as input an array of unsigned chars and returns the
 * value that is the largest
 *
 * @param data_array the array of unsigned chars
 * @param array_length an unsigned integer indicating the length of the array
 * @return an unsigned char representing the maximum of the array
 */
unsigned char find_maximum(
		unsigned char* data_array,
		unsigned int array_length
);


/**
 * @brief Returns the minimum of an array
 *
 * This functions takes as input an array of unsigned chars and returns the
 * values that is the smallest
 *
 * @param data_array the array of unsigned chars
 * @param array_length an unsigned integer indicating the length of the array
 * @return an unsigned char representing the minimum of the array
 */
unsigned char find_minimum(
		unsigned char* data_array,
		unsigned int array_length
);


/**
 * @brief Returns the median value of an array
 *
 * This function takes as input an array of unsigned chars and returns the
 * value in the 50th percentile
 *
 * @param data_array the array of unsigned chars
 * @param array_length an unsigned integer indicating the length of the array
 * @return an unsiged char representing the median of the array
 */
unsigned char find_median(
		unsigned char* data_array, 
		unsigned int array_length
);


/**
 * @brief Returns the mean value of an array
 *
 * This function takes as input an array of unsigned chars and returns the
 * average of all values in the array
 *
 * @param data_array the array of unsigned chars
 * @param array_length an unisgned integer indicating the length of the array
 * @return an unsigned char representing the mean value of the array
 */
unsigned char find_mean(
		unsigned char* data_array,
		unsigned int array_length
);


/**
 * @brief Prints the array to the screen
 *
 * This function takes an array of unsigned chars and prints it, nicely
 * formatted, to the screen
 *
 * @param data_array the array of unsigned chars
 * @param array_length an unsigned integer indicating the length of the array
 * @return none
 */
void print_array(
		unsigned char* data_array,
		unsigned int array_length
);


/**
 * @brief Prints the array statistics to the screen
 *
 * This function takes already calculated statistics (minimum, maximum, median,
 * and mean) and prints them to the screen in a nice format
 *
 * @param minimum an unsigned char indicating the minimum value
 * @param maximum an unsigend char indicating the maximum value
 * @param median an unsigned char indicating the median value
 * @param mean an unsigned char indicating the mean value
 * @return none
 */
void print_statistics(
		unsigned char minimum,
		unsigned char maximum,
		unsigned char median,
		unsigned char mean
);

#endif /* __STATS_H__ */
