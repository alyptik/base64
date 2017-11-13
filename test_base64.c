#include "base64.h"
#include <stdio.h>

int main(void)
{
	/* encode/decode octets */
	uint8_t octets[3] = {'a', 'b', 0};
	char *enc = base64(octets);
	uint8_t *dec = unbase64(enc);

	/* print results */
	printf("Original octets: {%#x, %#x, %#x}\n", octets[0], octets[1], octets[2]);
	printf("Encoded string: \"%s\"\n", enc);
	printf("Decoded dec: {%#x, %#x, %#x}\n", dec[0], dec[1], dec[2]);

	return 0;
}
