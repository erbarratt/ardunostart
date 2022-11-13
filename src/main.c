//#include <avr/io.h>
//#include <util/delay.h>
//#include <inttypes.h>

int main(){

	//							| take this memory location
	//		cast it to a volatile unsigned char pointer
	//dereference it to write to that chunk of memory

	(*(volatile unsigned char *)0x24) = 0xff;
	while (1) {
		(*(volatile unsigned char *)0x23) = (*(volatile unsigned char *)0x23) | (1<<5);
		for (long i = 0; i < 500000; i++) {
			asm("");
		}
	}

}
