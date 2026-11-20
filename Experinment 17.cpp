#include <stdio.h>
union Data {
 int i; 
 float f;
  char c; 
  };
   int main()
    { 
	union Data data; 
	printf("Size of union Data = %lu bytes\n", sizeof(data)); 
	data.i = 65; 
	printf("\nAfter assigning data.i = 65:\n"); 
	printf("data.i = %d\n", data.i); 
	
	data.f = 3.14f; 
	printf("\nAfter assigning data.f = 3.14 (data.i is now overwritten):\n");
	printf("data.f = %.2f\n", data.f); 
	printf("data.i (corrupted) = %d\n", data.i); 
	data.c = 'A'; 
	printf("\nAfter assigning data.c = 'A' (data.f is now overwritten):\n"); 
	printf("data.c = %c\n", data.c); 
	printf("data.f (corrupted) = %.2f\n", data.f); 
	printf("\nAll members share the same memory address: %p\n", (void*)&data); 
	return 0;
}
