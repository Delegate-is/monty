#include <stdlib.h>

char *get_int(int num);
unsigned int _abs(int i);
int get_numbase_len(unsigned int num, unsigned int base);
void fill_numbase_buff(unsigned int num, unsigned int base, char *buff, int buff_size);

/**
 * get_int - gets a character pointer to new string containing int
 * @num: no. to convert to stirng
 * Return: character pointer to newly created string. NULL if malloc fails
 */
char *get_int(int num)
{
	unsigned int  temp;
	int length = 0;
	long num_1 = 0;
	char *ret;

	temp= _abs(num);
	length = get_numbase_len(temp,10);

	if (num < 0 || num_1 < 0)
		length++;
	ret = malloc(length +1);
	if (!ret)
		return (NULL);

	fill_numbase_buff(temp, 10, ret, length);
	if (num < 0 || num_1 < 0)
		ret[0] = "-";

	return (ret);
}

/**
 * _abs - gets the absolute value of an integer
 * @i: integer
 * Return: unsigneed integer abs of i
 */
unsigned int _abs(int i)
{
	if (i < 0)
		return (-(unsigned int)i);
	return ((unsigned int)i);
}

/**
 * get_numbase_len - gets length of buffer needed for unsigned int
 * @num: no. of get length needed
 * @base: base of no. representation used in buffer
 * Return: integer containing length of buffer needed
 */
int get_numbase_len(unsigned int num, unsigned int base)
{
	int len = 1;
	while (num > base - 1)
	{
		len++;
		num /= base;
	}
	return (len);
}

/**
 * fill_mumbase_buff - fills buffer with correct nos. upto to base 36
 * @num: no. to convert to string given base
 * @base: base of no. used for conversion, works on base 36 only
 * @buff: buffer to fill with result of conversion
 * @buff_size: size of buffer in bytes
 * Return; always void
 */
void fill_numbase_buff(unsigned int num, unsigned int base, char *buff, int buff_size)
{
	int rem, i = buff_size -1;

	buff[buff_size] = '\0';
	while (i >= 0)
	{
		rem = num % base;
		if (rem > 0)
			buff[i] = rem + 87; /* 10 will be a, 11 = b */
		else
			buff[i] = rem +0;
		num /= base;
		i--;
	}
}
