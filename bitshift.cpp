#include <std_lib_facilities.h>

int main()
{
    int num = 1, bit = 0;
    
	  while (num != 0)
    {
        num <<= 1;
        bit++;
	  }

	cout << bit << " bit a valtozo erteke." << '\n';
    return 0;
}
