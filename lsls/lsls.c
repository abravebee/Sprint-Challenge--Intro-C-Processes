#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
    //argc and argv
    //check argv[1] for path
    char *dir;
    DIR *wideopendir;
    //struct dirent *ent;
    //struct stat buf;

    if (argc == 2){
        dir = argv[1];
    } else if (argc == 1){
        dir = ".";
    } else {
        fprintf(stderr, "Invalid argument, please try again\n");
        exit(1);
    }

  // Open directory
  // 1. CALL opendir(char *path)
    wideopendir = opendir(dir);
    // opens directory named in path (e.g. '.')
    // returns pointer to variable type DIR
    // error returns NULL
    if (wideopendir == NULL){
        //print error message, exit()
        fprintf(stderr, "Directory does not exist\n");
        exit(1);
    }
        


  // Repeatly read and print entries
  // 2. CALL readdir(DIR *d)
    // reads next dir entry from 'DIR' returned by opendir()
    // returns pointer to struct dirent (ent = readdir(d))
    // returns NULL at end


  // 3. PRINT FILENAMES
    // printf("%s\n", ent->d_name)
    // per above, break at NULL
    //For each entry in a directory, your program should print its size in bytes. 
    // int stat(char *fullpath, struct stat *buf)
    // fill fields of struct stat
    // returns -1 on error


  // Close directory
  // 4. CALL closedir(DIR *d)
    // close previously opened directory

  return 0;
}

//struct direct
    //print char d_name[] from struct dirent * variable
    // struct dirent *ent
    // ...
    // ent = readdir(d);
    // printf("%s\n", ent->d_name)