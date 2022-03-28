#include <stdio.h> 
#include <limits.h> 
#include <float.h> 

int main () { 
	printf ("\nChar: %lld Byte // %d ~ %d \nUnsigned char: %u \n\n", sizeof(char), CHAR_MIN, CHAR_MAX, UCHAR_MAX); 
	printf ("Short: %lld Byte // %d ~ %d \nUnsigned short: %u \n\n", sizeof(short), SHRT_MIN, SHRT_MAX, USHRT_MAX);
	printf ("Int: %lld Byte // %d ~ %d \nUnsigned int: %u \n\n", sizeof(int), INT_MIN, INT_MAX, UINT_MAX);
	printf ("Long long: %lld Byte // %lld ~ %lld \nUnsigned long long: %llu \n\n", sizeof(long long), LLONG_MIN, LLONG_MAX, ULLONG_MAX);
	
	printf ("\nFloat: %lld Byte // %e ~ %e \n\n", sizeof(float), FLT_MIN, FLT_MAX);
	printf ("Double: %lld Byte // %le ~ %le \n\n", sizeof(double), DBL_MIN, DBL_MAX);
	printf ("Long double: %lld Byte // %Le ~ %Le \n", sizeof(long double), LDBL_MIN, LDBL_MAX);

	return 0; 
}
