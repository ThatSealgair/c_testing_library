#include "testing.h"

void _p_test(void) {
  printf("[TEST] - ");
}

void _p_debug(void) {
  printf("[TEST] - ");
}

void _p_code_line(int code_line) {
  printf("[LINE: %d] - ", code_line);
}

void test_string(int code_line, char* string) {
  #ifdef DEBUG
    #if (DEBUG == 1)
    _p_test();
    _p_code_line(code_line);
    printf("[STRING] \"%s\"\n", string);
    #endif
  #endif
}

void test_expected_string(int code_line, char* got, char* want) {
  #ifdef DEBUG
    #if (DEBUG == 1)
      if (strncmp(got, want, strlen(want)) == 0) {
        _p_test();
        _p_code_line(code_line);
        printf("[GOT] \"%s\"\t[WANT] \"%s\"\n", got, want);
      }
    #endif
  #endif
}

void test_expected_int(int code_line, int got, int want) {
  #ifdef DEBUG
    #if (DEBUG == 1)
      if (got != want) {
        _p_test();
        _p_code_line(code_line);
        printf("[GOT] \"%d\"\t[WANT] \"%d\"\n", got, want);
      }
    #endif
  #endif
}

void test_count(int code_line, int count, char* item) {
  #ifdef DEBUG
    #if (DEBUG == 1)
      _p_test();
      _p_code_line(code_line);
      printf("[COUNT] %d of \"%s\"\n", count, item);
    #endif
  #endif
}

clock_t test_speed_start(char* function){
  #ifdef DEBUG
    #if (1 < DEBUG)
      _p_test();
      printf("[TIMER] for \"%s\" start\n", function);
    #endif
  #endif
  return clock();
}

void test_speed_end(char* function, clock_t start_time) {
  #ifdef DEBUG
    #if (0 < DEBUG)
      clock_t end_time = clock();
      double time_spent = (double) (end_time - start_time) / CLOCKS_PER_SEC;
      printf("[TIMER] for \"%s\" time taken %f\n", function, time_spent);
    #endif
  #endif
}
  
void debug_string(int code_line, char* string, int length) {
  #ifdef DEBUG
    #if (DEBUG == 2)
      _p_debug();
      _p_code_line(code_line);
      printf("[STRING] \"%s\" [SIZE] %d\n", string, length);
    #endif
  #endif
}

void debug_expected_string(int code_line, char* got, char* want) {
  #ifdef DEBUG
    #if (DEBUG == 2)
      _p_debug();
      _p_code_line(code_line);
      printf("[GOT] \"%s\"\t[WANT] \"%s\"\n", got, want);
    #endif
  #endif
}

void debug_expected_int(int code_line, int got, int want) {
  #ifdef DEBUG
    #if (DEBUG == 2)
      _p_debug();
      _p_code_line(code_line);
      printf("[GOT] \"%d\"\t[WANT] \"%d\"\n", got, want);
    #endif
  #endif
}
