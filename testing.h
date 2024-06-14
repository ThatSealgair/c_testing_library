#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* --- API FUNCTIONS --- */

/*
---- test_string() ----
Prints the line which the function was called with the a variable string value. Requires compiler flag -DDBUG=1
@param int code_line: the number which the value was called.
@param char* string: the value being checked.
*/
void test_string(int code_line, char* string);

// TODO
void test_count(int code_line, int count, char* item);

/*
---- test_speed_start() ----
Returns the time the function was called. If compiler flag -DDBUG=1 is called, it will do so quietly. If compiler flag -DDBUG=n is called, where 1 < n, it will print the start of the speed test.
@param char* function: the reason for the timer.
@Returns clock_t system time when function was called.
*/
clock_t test_speed_start(char* function);

/*
---- test_speed_end() -----
Calculates how long something took to run based on the value given by test_start_time() and the calling of this function. Displays this time to the user if compiler flag -DDBUG=n is called, where 0 < n.
@param char* function: the reason for the timer.
@param clock_t start_time: time at start of the test.
*/
void test_speed_end(char* function, clock_t start_time);

/*
---- test_expected_string() ----
Only prints the current value and expected value of two strings if they do not match. Requires compiler flag -DDBUG=1.
@param int code_line: the number of the line in which the value was called.
@param char* got: the string to be tested.
@param char* want: the expected string.
*/
void test_expected_string(int code_line, char* got, char* want);

/*
---- test_expected_integer() ----
Only prints the current value and expected value of two integers if they do not match. Requires compiler flag -DDBUG=1.
@param int code_line: the number of the line in which the value was called.
@param char* got: the intger to be tested.
@param char* want: the expected integer.
*/
void test_expect_int(int code_line, int got, int want);

// TODO
void debug_string(int code_line, char* string, int length);

/*
---- debug_expected_string() ----
Prints the current value and expected value of two strings. Requires compiler flag -DDBUG=2.
@param int code_line: the number of the line in which the value was called.
@param char* got: the string to be tested.
@param char* want: the expected string.
*/
void debug_expected_string(int code_line, char* got, char* want);

/*
---- debug_expected_string() ----
Prints the current value and expected value of two integers. Requires compiler flag -DDBUG=2.
@param int code_line: the number of the line in which the value was called.
@param char* got: the integer to be tested.
@param char* want: the expected integer.
*/
void debug_expect_int(int code_line, int got, int want);


/* --- PRIVATE FUNCTIONS --- */
void _p_test(void);
void _p_debug(void);
void _p_code_line(int code_line);
