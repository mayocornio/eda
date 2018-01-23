/* 
 * File:  
 * Author: 
 *
 * Fill Header!!
 */

#include <stddef.h>
#include <string.h>

#include "folder.h"
/*
 * Initializes a folder just after memory is reserved. This means that the
 * emails array can contain garbage, this is why we cannot use 'clear_folder'
 * function.
 */
void init_folder(Folder* folder) {
    int i;
    strcpy(folder->folder_name,"");
    for(i=0;i<MAX_FOLDER_EMAILS;i++)
        init_email(folder->emails[i]);
    folder->size=0;
    folder->empty=FALSE;
    folder->protected=FALSE;
}

/*
 * Clears the folder, derreferencing emails.
 */
int delete_folder(Folder* folder) {
    
}

/*
 * Does the basic setup of a newly created folder.
 */
int create_folder(Folder* folder, char* name) {

}

/*
 * Returns the fodler name.
 */
char* get_folder_name(Folder* folder) {
    
    
    
}

/*
 * Returns the folder size, it is, the number of emails contained into it.
 */
int get_folder_size(Folder* folder) {

}

/*
 * Returns 0 if folder is empty, 1 otherwise.
 */
int is_folder_empty(Folder* folder) {
    return (folder->empty);
}

/*
 * Fills the parameter emails with the pointers to the emails contained into
 * the folder and returns the folder size.
 */
int get_folder_emails(Folder* folder, Email** emails) {


}

/*
 * Adds the email to the folder email list.
 */
int add_email_to_folder(Folder* folder, Email* email) {


}

/*
 * Removes all ocurrences of the referenced email from the folder.
 */
int delete_folder_email(Folder* folder, Email* email) {


}
