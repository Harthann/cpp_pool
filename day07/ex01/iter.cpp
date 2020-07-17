#include <iostream>

typedef void (*i_func)(int*);
typedef void (*i_func_print)(int*);
typedef void (*i_func_init)(int*);
typedef void (*f_func)(float*);
typedef void (*f_func_init)(float*);
typedef void (*f_func_print)(float*);
typedef void (*c_func)(char*);
typedef void (*c_func_init)(char*);
typedef void (*c_func_print)(char*);

template<typename A, typename F>
void	iter(A *array, int length, F func)
{
	int tmp;
	tmp = 0;
	while (tmp < length)
	{
		func(array + tmp);
		tmp++;
	}
}

template<typename T>
void inc(T *tmp)
{
	*tmp += 1;
}

template<typename T>
void init(T *array)
{
	*array = 'A';
}

template<typename T>
void print(T* array)
{
	std::cout << *array << " ";
}

int main(void)
{
	int *array = new int[5];
	// float *farray = new float[5];
	char *carray = new char[5];

	i_func inc_function;
	i_func_print print_function;
	i_func_init init_function;

	init_function = &init;
	inc_function = &inc;
	print_function = &print;
	::iter(array, 5, init_function);
	::iter(array, 5, print_function);
	std::cout << std::endl;
	::iter(array, 5, inc_function);
	::iter(array, 5, print_function);
	std::cout << std::endl;

	c_func c_inc_function;
	c_func_print c_print_function;
	c_func_init c_init_function;

	c_init_function = &init;
	c_inc_function = &inc;
	c_print_function = &print;
	::iter(carray, 5, c_init_function);
	::iter(carray, 5, c_print_function);
	std::cout << std::endl;
	::iter(carray, 5, c_inc_function);
	::iter(carray, 5, c_print_function);
	std::cout << std::endl;

	return (0);
}