#include <stdlib.h>
#include <stdio.h>


typedef  unsigned short int sint;

typedef struct ipaddress {
	sint X;
	sint Y;
	sint Z;
	sint T;
} ipaddr_t;


void scan_ipaddr(ipaddr_t *ip) {
	scanf("%hu.%hu.%hu.%hu", &ip->X, &ip->Y, &ip->Z, &ip->T);
}

void print_ipaddr(ipaddr_t *ip) {
	printf("%d.%d.%d.%d", ip->X, ip->Y, ip->Z, ip->T);
}


char get_class(ipaddr_t *ip) {
	if (ip->X >= 0   && ip->X <= 127) return 'A';
	if (ip->X >= 128 && ip->X <= 191) return 'B';
	if (ip->X >= 192 && ip->X <= 223) return 'C';
	if (ip->X >= 224 && ip->X <= 239) return 'D';
	if (ip->X >= 240 && ip->X <= 255) return 'E';
}


int main() {
	/** Main function */
	ipaddr_t ip;

	printf("Entrer une addresse IPv4 valide (192.168.10.2) : ");
	scan_ipaddr(&ip);
	printf("\n");

	// print_ipaddr(&ip);
	printf("* Addresse de classe %c;", get_class(&ip));
	printf("\n");
	return EXIT_SUCCESS;
}
