

#include <cstdio>
#include <cstdlib>
#include <cstdint>

#include "hex_view.h"

using namespace hex_view;

int32_t main(void)
{

	fprintf(stderr, "\nhex_view.h test\n");

	fprintf(stderr, "%s\n", byte2bin(0xF0));
	fprintf(stderr, "%s\n", byte2bin_s(0xF0));
	fprintf(stderr, "%s\n", word2bin(0xF0F8));
	fprintf(stderr, "%s\n", dword2bin(0xAA02F0F8));
	fprintf(stderr, "%s\n", qword2bin(0xF0F0F0F0AA02F0F8));
	return 0;
}

