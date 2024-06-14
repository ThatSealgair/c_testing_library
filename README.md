# c_testing_library
Library made to test C programs during development

# API Calls

## test_string()
Prints the line which the function was called with the a variable string value. Requires compiler flag -DDBUG=1

_@param_ `int code_line: the number which the value was called.`

_@param_ `char* string: the value being checked.`

```c
void test_string(int code_line, char* string);
```

**TODO**

```c
void test_count(int code_line, int count, char* item);
```

## test_speed_start()
Returns the time the function was called. If compiler flag -DDBUG=1 is called, it will do so quietly. If compiler flag -DDBUG=n is called, where 1 < n, it will print the start of the speed test.

_@param_ `char* function: the reason for the timer.`

_@Returns_ `clock_t` system time when function was called.

```c
clock_t test_speed_start(char* function);
```

## test_speed_end()
Calculates how long something took to run based on the value given by test_start_time() and the calling of this function. Displays this time to the user if compiler flag -DDBUG=n is called, where 0 < n.

_@param_ `char* function: the reason for the timer.`

_@param_ `clock_t start_time: time at start of the test.`

```c
void test_speed_end(char* function, clock_t start_time);
```

## test_expected_string()
Only prints the current value and expected value of two strings if they do not match. Requires compiler flag -DDBUG=1.

_@param_ `int code_line: the number of the line in which the value was called.`

_@param_ `char* got: the string to be tested.`

_@param_ `char* want: the expected string.`

```c
void test_expected_string(int code_line, char* got, char* want);
```

## test_expected_integer()
Only prints the current value and expected value of two integers if they do not match. Requires compiler flag -DDBUG=1.

_@param_ `int code_line: the number of the line in which the value was called.`

_@param_ `char* got: the intger to be tested.`

_@param_ `char* want: the expected integer.`

```c
void test_expect_int(int code_line, int got, int want);
```

**TODO**

```c
void debug_string(int code_line, char* string, int length);
```

## debug_expected_string()
Prints the current value and expected value of two strings. Requires compiler flag -DDBUG=2.

_@param_ `int code_line: the number of the line in which the value was called.`

_@param_ `char* got: the string to be tested.`

_@param_ `char* want: the expected string.`

```c
void debug_expected_string(int code_line, char* got, char* want);
```

## debug_expected_string()
Prints the current value and expected value of two integers. Requires compiler flag -DDBUG=2.

_@param_ `int code_line: the number of the line in which the value was called.`

_@param_ `char* got: the integer to be tested.`

_@param_ `char* want: the expected integer.`

```c
void debug_expect_int(int code_line, int got, int want);
```

# Mainfile Example
Included is an example makefile for a program that only has `main.c` and `main.h` to test utilising this library.
This assumes the user is compiling for C11.
