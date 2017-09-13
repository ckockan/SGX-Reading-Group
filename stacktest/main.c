//#include <stdio.h>
//#include <sys/resource.h>

#define NUM_ELEMS 10000000
int main(int argc, char** argv)
{
	/*fprintf(stderr, "here\n");
	const rlim_t kStackSize = 128 * 1024 * 1024;
	struct rlimit r1;
	int result;

	result = getrlimit(RLIMIT_STACK, &r1);
	if(result == 0)
	{
		if(r1.rlim_cur < kStackSize)
		{
			r1.rlim_cur = kStackSize;
			result = setrlimit(RLIMIT_STACK, &r1);
			if(result != 0)
			{
				fprintf(stderr, "setrlimit returned result = %d\n", result);
			}
		}
	}*/
	
	int arr[NUM_ELEMS];
	return 0;
}
