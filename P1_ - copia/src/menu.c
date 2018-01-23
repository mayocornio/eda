/* 
 * File:  
 * Author: 
 *
 * Fill Header!!
 */

#include <stdio.h>
#include <time.h>
#include <string.h>

#include "menu.h"
#include "database.h"
#include "utils.h"
#include "file_operations.h"

int read_option(const char* msg) {
    int option = OPTION_INVALID;
    printf("%s", msg);
    scanf("%d", &option);

    flush_input();

    return option;
}

int query_option() {
    printf("\n");
    printf(MSG_LIST_EMAILS,     OPTION_LIST_EMAILS);
    printf(MSG_SHOW_EMAIL,      OPTION_SHOW_EMAIL);
    printf(MSG_CREATE_EMAIL,    OPTION_CREATE_EMAIL);
    printf(MSG_DELETE_EMAIL,    OPTION_DELETE_EMAIL);
    printf(MSG_SHOW_FOLDER,     OPTION_SHOW_FOLDER);
    printf(MSG_CREATE_FOLDER,   OPTION_CREATE_FOLDER);
    printf(MSG_DELETE_FOLDER,   OPTION_DELETE_FOLDER);
    printf(MSG_ADD_EMAIL,       OPTION_ADD_EMAIL);
    printf(MSG_REMOVE_EMAIL,    OPTION_REMOVE_EMAIL);
    printf(MSG_SEARCH,          OPTION_SEARCH);
    printf(MSG_QUIT,            OPTION_QUIT);
    printf("\n");

    return read_option("Choose an option: ");
}

void list_emails_option(Database* db) {
    log_info(stdout, "You have selected: List emails option\n");
}

void show_email_option(Database* db) {
    log_info(stdout, "You have selected: Show email option\n");
}

void create_email_option(Database* db) {
    log_info(stdout, "You have selected: Create email option\n");
    Email email;
    init_email(&email);
    read_email_interactive(&email);
//    write_email_to_file(/*FITXER*/,&email);
}

void delete_email_option(Database* db) {
    log_info(stdout, "You have selected: Delete email option\n");
}

void show_folder_option(Database* db) {
    log_info(stdout, "You have selected: Show folder option\n");
}

void create_folder_option(Database* db) {
    log_info(stdout, "You have selected: Create folder option\n");
}

void delete_folder_option(Database* db) {
    log_info(stdout, "You have selected: Delete folder option\n");
}

void add_email_to_folder_option(Database* db) {
    log_info(stdout, "You have selected: Add email to folder option\n");
}

void remove_email_from_folder_option(Database *db) {
    log_info(stdout, "You have selected: Remove email from folder option\n");
}

void search_string_option(Database* db) {
    log_info(stdout, "You have selected: Search string option\n");
}

void menu(Database* db) {

    int option = query_option();
    while (option != OPTION_QUIT) {
        
        switch(option) {
            case OPTION_LIST_EMAILS:
                list_emails_option(db);
                break;
                
            case OPTION_SHOW_EMAIL:
                show_email_option(db);
                break;
                
            case OPTION_CREATE_EMAIL:
                create_email_option(db);
                break;
                
            case OPTION_DELETE_EMAIL:
                delete_email_option(db);
                break;
                
            case OPTION_SHOW_FOLDER:
                show_folder_option(db);
                break;
                
            case OPTION_CREATE_FOLDER:
                create_folder_option(db);
                break;
                
            case OPTION_DELETE_FOLDER:
                delete_folder_option(db);
                break;
                
            case OPTION_ADD_EMAIL:
                add_email_to_folder_option(db);
                break;
                
            case OPTION_REMOVE_EMAIL:
                remove_email_from_folder_option(db);
                break;
                
            case OPTION_SEARCH:
                search_string_option(db);
                break;
                
            default:
                printf("Invalid option. Try again...\n\n");
                break;
        }

        printf("Press enter to continue...");
        flush_input();

        option = query_option();
    }
}