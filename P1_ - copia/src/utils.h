/* 
 * File:  
 * Author: 
 *
 * Fill Header!!
 */

//errors, coses en comu que fan servir molts .c

#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>

#define ERROR_LEVEL 0
#define WARN_LEVEL 1
#define INFO_LEVEL 2

#define LOG_LEVEL 2

void flush_input();

void log_warn(FILE* fd, char* msg);
void log_error(FILE* fd, char* msg);
void log_info(FILE* fd, char* msg);


#endif /* UTILS_H */

