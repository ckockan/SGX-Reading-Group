#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <math.h>

#include "Enclave_t.h"

#define	NUM_ELEMS	20000000

uint32_t* testarr;

void memtest()
{
	testarr = (uint32_t*) malloc(sizeof(uint32_t) * NUM_ELEMS);
	size_t i;
	for(i = 0; i < NUM_ELEMS; i++)
	{
		testarr[i] = 27;
	}
}
