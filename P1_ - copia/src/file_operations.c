/* 
 * File:  
 * Author: 
 *
 * Fill Header!!
 */


#include <stdio.h>
#include <string.h>

#include "file_operations.h"

/*
 * Opens the file located in config_path, reads it and loads the database accordingly.
 * Returns 1 if it is correct and 0 if there has been an error reading EMconfig
 */
int read_config(Database *db) {
/*
typedef struct {
    int msg_id_seed;

    Email emails[MAX_EMAILS];
    int email_count;

    Folder folders[MAX_FOLDERS];
    int folder_count;
} Database;*/
    
    //db->msg_id_seed = ??
    
    
    return 1;
    
}

/*
 * Writes the current state of the database into the configuration file located in config_path.
 */
int write_config(Database *db) {

}

/*
 * Writes the email content into the email database directory.
 */
int store_email(Email* email) {

}

