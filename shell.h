#ifdef _SHELL_H_
#define _SHELL_H_

extern char **environ;

/**###### LIBRARIES ######*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/start.h>
#include <signal.h>
#include <fcntl.h>

/**###### MACROS ######*/
#define BUFSIZE 1024
#define DELIM " \t\r\n\a"
#define PRINTER(c) (write(STDOUT_FILENO, c, _strlen(c)))


