/* 
 * File:  
 * Author: 
 *
 * Fill Header!!
 */

#ifndef EMAIL_H
#define EMAIL_H

#include <stdio.h>

#include "common.h"

#define MAX_EMAIL_ID 50
#define MAX_SUBJECT 100
#define MAX_BODY    150
#define DEFAULT_MAX_FIELD 50

typedef struct {
    char id[MAX_EMAIL_ID];
    char subject[MAX_SUBJECT];
    char from[DEFAULT_MAX_FIELD];
    char to[DEFAULT_MAX_FIELD];
    char date[DEFAULT_MAX_FIELD];
    char body[MAX_BODY];
    int empty;
    int referenced;
} Email;

void init_email(Email* email);

char* get_email_id(Email* email);
char* get_email_subject(Email* email);
int is_email_empty(Email* email);

void copy_email(Email* dest_email, Email* src_email);

void read_email_interactive(Email* email); //crear correu
int load_email_from_file(FILE* fd, Email *email); //obrir correu
int write_email_to_file(FILE* fd, Email* email); //guardar correu

#endif /* EMAIL_H */

