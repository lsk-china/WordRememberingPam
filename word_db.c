//
// Created by lsk on 9/13/22.
//

#include "word_db.h"

int add_entry_to_word_db(int fd, word_db_entry_t entry) {
    int word_count = 0;
    read(fd, &word_count, SIZE_INT);
    if (word_count == 0) {
        perror("add_entry_to_word_db: Cannot append to an empty word db");
        return -1;
    }
    word_count ++;
    write(fd, word_count, SIZE_INT);

    word_count --;
    fd = lseek(fd, SIZE_INT * word_count, SEEK_SET); // skip word count and point to the last entry offset.
    int last_entry_offset = 0;
    read(fd, &last_entry_offset, SIZE_INT);



}