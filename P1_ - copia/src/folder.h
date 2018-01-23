/* 
 * File:   
 * Author: 
 *
 * Fill Header!!
 */

#ifndef FOLDER_H
#define FOLDER_H

#include "common.h"
#include "email.h"

#define MAX_FOLDER_NAME 30                  //max size of folder name
#define MAX_FOLDER_EMAILS 10                //max number of emails that a folder can have

typedef struct {
    char folder_name[MAX_FOLDER_NAME];      //name of the folder
    Email* emails[MAX_FOLDER_EMAILS];       //pointers of emails that folder has
    int size;                               //folder current size (number of emails it has) /*ns*/
    int empty;                              //0 if folder is empty, 1 otherwise.
    int protected;                          //TRUE if folder is protected, FALSE otherwise.
} Folder;

void init_folder(Folder* folder);
int delete_folder(Folder* folder);
int create_folder(Folder* folder, char* name);

char* get_folder_name(Folder* folder);
int get_folder_size(Folder* folder);
int is_folder_empty(Folder* folder);
int is_folder_protected(Folder* folder);

int get_folder_emails(Folder* folder, Email** emails);

int add_email_to_folder(Folder* folder, Email* email);
int delete_folder_email(Folder* folder, Email* email);

#endif /* FOLDER_H */

