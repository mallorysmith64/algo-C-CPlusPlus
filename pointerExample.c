#include <stdlib.h> //needed to use malloc

int main()
{
	int *p; //data reference or pointer variable, takes space in stack/every variable goes to stack
	p = (int *) malloc(5*sizeof(int)); 
		//malloc function: allocates memory to heap
		//assign malloc to a pointer
		//sizeof: 5 * 2 or 4 bytes let compiler figure it out
}
