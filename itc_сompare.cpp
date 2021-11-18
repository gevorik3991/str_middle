#include "middle_str.h"

bool itc_Compare(string S1, string S2)
{
	long long a = itc_len(S1);
	bool b = (a == itc_len(S2));
	if (b == false) {
		return b;
	}
	for (int i = 0; i < a; i++) {
		b = (S1[i] == S2[i]);
		if (b == false) {
			return b;
		}
	}
	return b;
}
