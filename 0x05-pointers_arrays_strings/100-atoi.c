#include "main.h"

/**
 * _atoi - converts a tring to an integer.
 * @s: The pointer to convert
 * Return: A integer
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int mni = 1;
	int isi = 0;

	while (s[c])
	{
		if (s[c])
		{
			min *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}
		if (isi == 1)
		{
			break;
		}
	}
		ni *= min;
		return (ni);
}







[200~int _atoi(char *s) {
	  int i = 0;
	    int sign = 1;
	      int result = 0;

	        // Skip all leading whitespace.
		//   while (s[i] == ' ') {
		//       i++;
		//         }
		//
		//           // Check for the sign.
		//             if (s[i] == '-') {
		//                 sign = -1;
		//                     i++;
		//                       } else if (s[i] == '+') {
		//                           i++;
		//              
