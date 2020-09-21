
#pragma once

#ifndef H_HEX_VIEW
#define H_HEX_VIEW


#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>

#include <iostream>


typedef uint64_t qword;
typedef uint32_t dword;
typedef uint16_t word;
typedef uint8_t byte;

namespace hex_view
{

#define byte2bin(x) _byte2bin_str(x).c_str()
#define byte2bin_s(x) _byte2bin_str_s(x).c_str()
#define word2bin(x) _word2bin_str(x).c_str() 
#define dword2bin(x) _dword2bin_str(x).c_str() 
#define qword2bin(x) _qword2bin_str(x).c_str() 

std::string _byte2bin_str(byte b)
{
	char res[16] = { 0 };
	uint32_t i;
	uint32_t k;

	k = 0;
	i = 8;
	while(i--)
	{
		res[k++] = (b >> i) & 0b00000001 ? '1' : '0';
	}

	return std::string(res);

}

std::string _byte2bin_str_s(byte b)
{
	char res[16] = { 0 };
	uint32_t i;
	uint32_t k;

	k = 0;
	i = 8;
	while(i--)
	{
		if(((i + 1) % 4) == 0 && i != 7)
		{
			res[k++] = '_';
		}
		res[k++] = (b >> i) & 0b00000001 ? '1' : '0';
		
	}

	return std::string(res);

}

std::string _word2bin_str(word b)
{
	char res[32] = { 0 };
	uint32_t i;
	uint32_t k;

	k = 0;
	i = 16;
	while(i--)
	{
		res[k++] = (b >> i) & 0b0000000000000001 ? '1' : '0';
	}

	return std::string(res);

}

std::string _dword2bin_str(dword b)
{
	char res[64] = { 0 };
	uint32_t i;
	uint32_t k;

	k = 0;
	i = 32;
	while(i--)
	{
		res[k++] = (b >> i) & 0b00000000000000000000000000000001 ? '1' : '0';
	}

	return std::string(res);

}


std::string _qword2bin_str(qword b)
{
	char res[128] = { 0 };
	uint32_t i;
	uint32_t k;

	k = 0;
	i = 64;
	while(i--)
	{
		res[k++] = (b >> i) & 0x0000000000000001 ? '1' : '0';
	}

	return std::string(res);

}

}



#endif

