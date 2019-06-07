#include <stdio.h>
#include <dirent.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
    //argc and argv
    //check argv[1] for path


  // Open directory
  // 1. CALL opendir(char *path)
    // opens directory named in path (e.g. '.')
    // returns pointer to variable type DIR
    // error returns NULL
        //print error message, exit()


  // Repeatly read and print entries
  // 2. CALL readdir(DIR *d)
    // reads next dir entry from 'DIR' returned by opendir()
    // returns pointer to struct dirent (ent = readdir(d))
    // returns NULL at end


  // 3. PRINT FILENAMES
    // printf("%s\n", ent->d_name)
    // per above, break at NULL


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