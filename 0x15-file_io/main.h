#ifndef MAIN_H
#define MAIN_H

#define BUF_SIZE 1024

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <errno.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

size_t _strlen(const char *s);
void print_abi(unsigned char *e_ident);

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


#endif /* MAIN_H */
