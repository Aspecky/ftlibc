#include "Vector.h"
#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void print_int_arr(int *arr, size_t size)
{
	printf("{ ");
	for (size_t i = 0; i < size; i++)
	{
		printf("%i ", arr[i]);
	}
	printf("}\n");
}
int main(void)
{
	t_vector vector;
	int *arr;

	vector_init(&vector, 5, sizeof(int));
	vector_set(&vector, 10, &(int){420});
	arr = vector.arr;
	
	printf("size: %zu, cap: %zu\n", vector.size, vector.capacity);
	vector_set(&vector, 11, &(int){420});
	
	for (size_t i = 0; i < vector.size; i++)
		arr[i] = (int)i;
	print_int_arr(arr, vector.size);
	// vector_set(&vector, 0, &(int){69});
	// vector_set(&vector, 5, &(int){42});
	// printf("%i\n", *((int *)vector_get(&vector, 0)));
	// printf("%i\n", *((int *)vector_get(&vector, 5)));
	free(vector.arr);
	// printf("%ji\n", ft_strtoimax("11", 2, &r));
}
