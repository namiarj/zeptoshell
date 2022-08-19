#pragma once

#include <stdbool.h>

#define LINE_MAX	1024
#define CMD_MAX		256

void prompt();
void init_sig();
void print_bg();
bool read_line(char *line);
void run_line(char *line);
