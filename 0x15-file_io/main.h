#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

int _putchar(char c);
size_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */
