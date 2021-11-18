#include "middle_str.h"

int itc_stoi(string str)
{
	int number = 0, len = itc_len(str);
	for (int i = 0; i < len; i++) {
		if ((number == 0) && (str[i] > '0') && (str[i] <= '9')) number = str[i] - 48;
		else number = number * 10 + (str[i] - 48);
	}
	return number;
}
