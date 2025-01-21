#ifndef LEAO_FILE_H
#define LEAO_FILE_H

#include <stdio.h>
#include <string.h>

#ifdef _WIN32
#include <direct.h>
#define MKDIR_P(name) _mkdir(name)
#else // POSIX
#include <sys/stat.h>
#include <sys/types.h>
#define MKDIR_P(name) mkdir(name, 0755)
#endif // _WIN32

inline static int file_exists(const char *path) {
    FILE *file = fopen(path, "r");
    if (file) {
        fclose(file);
        // file exists
        return 1;
    } else {
        return 0;
    }
    // of something goes horribly wrong, just say the file dosen't exist.
    return 0;
}

inline static int create_dir_if_dosent_exist(const char *path) {

    struct stat st;

    if (stat(path, &st) == 0 && S_ISDIR(st.st_mode)) {
        // already exists
        return 0;
    } else {
        if (MKDIR_P(path) == 0) {
            return 1;
        } else {
            perror("Error creating directory");
            return -1;
        }
    }
}

#endif // !LEAO_FILE_H
