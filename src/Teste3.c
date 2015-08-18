/*
 ============================================================================
 Name        : Teste3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "teste.h"

/* Global variables */
//T_DATA data[2];

int main(void) {
	uint8_t 	i;
	T_DATA 		t_var_data;

	/* Limpa variavel */
	memset(&t_var_data, 0, sizeof(t_var_data));

	for(i = 0; i < 10; i ++){
		/* Call function increment */
		func_inc(&t_var_data);

		/* Print data values */
		printf("\nStruct values:");
		printf("\n\t counter..: %d", t_var_data.count);
		printf("\n\t sum......: %d", t_var_data.sum);
	}

	return EXIT_SUCCESS;
}

/* Function increment */
void func_inc(T_DATA *t_data_ptr) {
	t_data_ptr->count++;
	t_data_ptr->sum = t_data_ptr->count * 2;
}
