/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** asm
*/

#ifndef ASM_H_
#define ASM_H_

#include <sys/types.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include "corewar.h"
#include "op.h"
#include "utils.h"
#include "my_string.h"
#include "insctruction.h"
#include "parser.h"
#include "my.h"

int launch_asm(char *filepath);

//get_file
char **get_file(const char *fp, header_t *header);

//get_header
int get_header(FILE *stream, header_t *header);

#endif /* !ASM_H_ */