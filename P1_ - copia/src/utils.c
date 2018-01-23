/* 
 * File:  
 * Author: 
 *
 * Fill Header!!
 */


#include <stdio.h>
#include <string.h>

#include "utils.h"
#include "common.h"

/*
 * No abança fins que no reb '\n' o és el final de fitxer
 */
void flush_input() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

void log_info(FILE* fd, char* msg) {
    if (LOG_LEVEL >= INFO_LEVEL) {
        fprintf(fd, "INFO: %s\n", msg);
        fflush(fd);
    }
}

void log_warn(FILE* fd, char* msg) {
    if (LOG_LEVEL >= WARN_LEVEL) {
        fprintf(fd, "WARNING: %s\n", msg);
        fflush(fd);
    }
}

void log_error(FILE* fd, char* msg) {
    if (LOG_LEVEL >= ERROR_LEVEL) {
        fprintf(fd, "ERROR: %s\n", msg);
        fflush(fd);
    }
}



