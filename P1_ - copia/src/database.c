/* 
 * File:  
 * Author: 
 *
 * Fill Header!!
 */


#include <stddef.h>
#include <string.h>
#include <stdlib.h>

#include "database.h"

/*
 * Initializes an email database.
 */
void init_database(Database *db, int initial_msg_id) {
    /*
    int msg_id_seed;

    Email emails[MAX_EMAILS];
    int email_count;

    Folder folders[MAX_FOLDERS];
    int folder_count;*/
    int i;
    
    db->msg_id_seed=initial_msg_id; //inital msg es la id seed?
    
    for(i=0; i<MAX_EMAILS; i++)
        db->emails[i];
    db->email_count = 0;
    
    for(i=0; i<MAX_FOLDERS; i++)
        db->folders[i];
    db->folder_count = 0;
    
}

/*
 * Returns the total number of unique emails stored into the database.
 */
int get_database_email_count(Database* db) {

}

/*
 * Fills the parameter emails with the pointers to the emails contained into
 * the database and returns the email count.
 */
int get_database_emails(Database* db, Email* emails[]) {


}

/*
 * Returns the reference to the email matching the target_id into the database 
 * or NULL, if not found.
 */
Email* search_database_email_id(Database* db, char* target_id) {

}

/*
 * Produces a new unique message id and writes it to buf parameter.
 */
void get_new_message_id(Database* db, char buf[]) {

}

/*
 * It COPIES the email into the database. This means that the email pointer 
 * parameter is not pointing to the actual email stored into the database.
 * 
 * It returns the pointer to the database stored email.
 * 
 */
Email* add_email_to_database(Database* db, Email* src_email) {

}

int delete_database_email(Database* db, Email* email) {

}

/*
 * Returns the database folder matching the target name or NULL, if not found.
 */
Folder* get_database_folder(Database* db, char* target_name) {

}

/*
 * Returns the database folder count.
 */
int get_database_folder_count(Database* db) {

}

/*
 * Fills the parameter folders with the pointers to the fodlers contained into
 * the database and returns the folder count.
 */
int get_database_folders(Database* db, Folder* folders[]) {

}

/*
 * Creates a folder into the database with the provided folder name.
 */
Folder* create_database_folder(Database* db, char* folder_name) {

}

/*
 * Deletes a folder from the database.
 */
int delete_database_folder(Database* db, Folder* folder) {

}
