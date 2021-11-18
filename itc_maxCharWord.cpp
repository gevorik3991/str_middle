#include "middle_str.h"

string itc_maxCharWord(string str)
{
	long long max = 0, len = itc_len(str);
	string a, b;
	if (itc_countWords(str) == 1) return "error";
	for (int i = 0; i < len; i++) {
		if (((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'a') && (str[i] <= 'z'))) {
			a += str[i];
		}
		else if (itc_len(a) > max) { max = itc_len(a); b = a; a = ""; }
		else a = "";
	}
	if (itc_len(a) > max) { b = a; }
	return b;
}
