#include <stdio.h>
// an array of pointers is actualy a 2D array
int main(int argc, char **argv)
{
	char *days[7] = {"Sunday", "Monday","Tuesday","Wednesday","Thursday",
	"Friday","Saturday","Sunday"};
	for (int i=0; i<7; i++)
		printf("%u \t %s\n", days[i], days[i]);
		
	days[0] = "Sun";
	days[1] = "Mon";
	days[2] = "Tues";
	days[3] = "Wed";
	days[4] = "Thurs";
	days[5] = "Fri";
	days[6] = "Sat";
	for (int i=0; i<7; i++)
		printf("%u \t %s\n", days[i], days[i]);
	return 0;
}
