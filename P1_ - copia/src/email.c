/* 
 * File:  
 * Author: 
 *
 * Fill Header!!
 */


#include <stdio.h>
#include <string.h>
#include <time.h>

#include "email.h"

/*
 * Initializes an email just after memory is reserved.
 */
void init_email(Email* email) {
    strcpy(email->id, "");
    strcpy(email->subject, "");
    strcpy(email->from, "");
    strcpy(email->to, "");
    strcpy(email->date, "");
    strcpy(email->body, "");
    email->empty = FALSE;
    email->referenced = FALSE;
}

/*
 * Copies the information from email to other.
 * Follows strcpy parameter setting.
 */
void copy_email(Email* dest_email, Email* src_email) {

}

/*
 * Returns the email id.
 */
char* get_email_id(Email* email) {

}

/*
 * Returns the subject of the email.
 */
char* get_email_subject(Email* email) {
    return email->subject;
}

/*
 * Returns 0 if email is empty, 1 otherwise.
 */
int is_email_empty(Email* email) {
    if (email->empty == TRUE)
        return 0;
    else
        return 1;
}

/*
 * TDB
 */
char* load_body(Email* email, char buf[], int buf_size) {

}

/*
 * Set the now date into the date email field.
 */
void set_email_date(Email* email) {

}

/*
 * Ask the user the required information in order to create an email and 
 * stores it into the referenced email structure.
 */
void read_email_interactive(Email* email) {
    //diem la id del correu
    //preguntem les dades a lusuari i les posem al fitxer

}

/*
 * Loads an email stored into a given file.
 */
int load_email_from_file(FILE* fd, Email *email) {


}

/*
 * Writes an email to a given file.
 */
int write_email_to_file(FILE* fd, Email* email) {


}
