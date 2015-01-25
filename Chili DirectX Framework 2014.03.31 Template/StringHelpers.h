#pragma once

#include <iostream>

class StringHelpers
{
public:
	StringHelpers(){}
	~StringHelpers(){}

	void InvertString( char* str )
	{
		char* end = str;
		for ( ; *end != '\0'; end++ );
		end--;  // don't include the null character

		// keep running till we reach the end
		while ( str < end )
		{
			// functionality to perform value swap
			char tempBuff = *str;
			(*str) = *end;
			*end = tempBuff;
			str++;
			end--;
		}
	}

	void GetString( char* buffer, int buffLen )
	{
		int index = 0;
		for ( char c = getchar(); index < (buffLen - 1) && c != '\0'; index++ )
		{
			buffer[index] = c;
			c = getchar();
		}
		buffer[index] = '\0';
	}
};


