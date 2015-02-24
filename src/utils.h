#ifndef UTILS_H
#define UTILS_H
#include <stdio.h>
#include <time.h>
#include "list.h"

int alphanum_to_int(char c);
char int_to_alphanum(int i);
void read_all(int fd, char *buffer, size_t bytes);
void write_all(int fd, char *buffer, size_t bytes);
char *find_replace(char *str, char *orig, char *rep);
void error(const char *s);
void malloc_error();
void file_error(char *s);
void strip(char *s);
void strip_char(char *s, char bad);
void top_k(float *a, int n, int k, int *index);
list *split_str(char *s, char delim);
char *fgetl(FILE *fp);
list *parse_csv_line(char *line);
char *copy_string(char *s);
int count_fields(char *line);
float *parse_fields(char *line, int n);
void normalize_array(float *a, int n);
void scale_array(float *a, int n, float s);
void translate_array(float *a, int n, float s);
int max_index(float *a, int n);
float constrain(float a, float max);
float mse_array(float *a, int n);
float rand_normal();
float rand_uniform();
float sum_array(float *a, int n);
float mean_array(float *a, int n);
float variance_array(float *a, int n);
float mag_array(float *a, int n);
float **one_hot_encode(float *a, int n, int k);
float sec(clock_t clocks);
#endif

