/* 
 * File:  
 * Author: 
 *
 * Fill Header!!
 */

#include <stdio.h>
#include <string.h>

#include "file_operations.h"
#include "menu.h"

int main(int argc, char**argv) {

    Database db;

    int result = read_config(&db);
    if (result) {
        menu(&db);
        write_config(&db);
    } else {
        printf("Problem found: Please revise your EMConfig file format\n");
    }
}
