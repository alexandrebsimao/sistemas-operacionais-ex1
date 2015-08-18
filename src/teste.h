/*
 * teste.h
 *
 *  Created on: 12 de ago de 2015
 *      Author: AlexandreAugusto
 */

#ifndef TESTE_H_
#define TESTE_H_

typedef struct t_data {
	uint8_t count;
	uint16_t sum;
} T_DATA;

/* Prototype */
void func_inc(T_DATA *t_data_ptr);

#endif /* TESTE_H_ */
