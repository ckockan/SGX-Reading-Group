#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

#include "Enclave_u.h"
#include "sgx_urts.h"

#define ENCLAVE_FILE	"Enclave.signed.so"

int main(int argc, char** argv)
{
	/* Create enclave */
	fprintf(stderr, "Creating enclave ...\n");

	sgx_enclave_id_t enclave_id;
	sgx_status_t retval;
	sgx_launch_token_t token = {0};
	int token_updated = 0;

	retval = sgx_create_enclave(ENCLAVE_FILE, SGX_DEBUG_FLAG, &token, &token_updated, &enclave_id, NULL);
	if(retval != SGX_SUCCESS)
	{
		printf("sgx_create_enclave() failed: %#x\n", retval);
		return 1;
	}

	fprintf(stderr, "Successfully created enclave ...\n");

	/* ECALL: memtest */
	retval = memtest(enclave_id);

	/* Destroy the enclave */
	printf("Destroying enclave ...\n");
    sgx_destroy_enclave(enclave_id);

	return 0;
}
