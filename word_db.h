//
// Created by lsk on 9/13/22.
//

#ifndef WORDREMEMBERINGPAM_WORD_DB_H
#define WORDREMEMBERINGPAM_WORD_DB_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <time.h>

#define SIZE_INT sizeof(int)

typedef struct {
    const char *word;
    const char *meaning;
    int size;
} word_db_entry_t;

int err;

int add_entry_to_word_db(int fp, word_db_entry_t entry);
#endif //WORDREMEMBERINGPAM_WORD_DB_H
