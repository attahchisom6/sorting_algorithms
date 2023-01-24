#include "sort.h"

/**
 * shell_sort - a fuction to sort an array whose elements are
 * far apart from each other usinf knuth sequence
 * @array:an array of integers
 * @size: size of the array
 *
 * Return:void
 */

void shell_sort(int *array, size_t size)
{
	size_t k, p, q;
	size_t n = size;
	int *s, temp, flag = 1;

	p = (n ^ 3 - 1) / 2;

	s = array;
	for (k = p; k > 0; k--)
	{
		flag = 0;
		for (q = 0; q + 1 < n; q++)
		{
			if (s[q + 1] < s[q])
			{
				temp = s[q + 1];
				s[q + 1] = s[q];
				s[q] = temp;
				print_array(s, size);
				flag = 1;
			}
		}
	}
}
