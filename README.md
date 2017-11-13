# base64.h - A simple, single C-header base64 encoder/decoder.

Dead-simple base64 encoding/decoding functions.

## Dependencies

* None

## Usage

Example Usage:

```c
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
```

Compile the test file with:

```bash
gcc test_base64.c -o test_base64 && ./test_base64
```
Output:

```bash

Original octets: {0x61, 0x62, 0}
Encoded string: "YWI=ab"
Decoded dec: {0x61, 0x62, 0}
```



#### base64.h prototypes

```c
/*
 * encode three `uint8_t` octets to four base64 `chars`
 *
 * (unused octets must be '\0')
 */
static inline char *base64(uint8_t const ra[static 3]);
```

```c
/*
 * decode four base64 `chars` to three `uint8_t` octets
 *
 * (unused octets will be set to '\0')
 */
static inline uint8_t *unbase64(char const ar[static 4]);
```
