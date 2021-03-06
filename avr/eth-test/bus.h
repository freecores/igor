#ifndef _BUS_H_
#define _BUS_H_
#include <avr/io.h>
#include <stdint.h>

/* Read Write port and flags */
#define RDWRPORT	PORTE
#define RDWRPIN		PINE
#define RDWRDDR		DDRE
/* Pin values that indicate different operations
 * using (2**pinnumber) for easier code
 */
#define	RD	0x04	
#define WR	0x08

#define RDYPORT		PORTB
#define RDYPIN		PINB
#define RDYDDR		DDRB
#define RDY	0

#define ADDRLPIN	PIND
#define ADDRLPORT	PORTD	
#define	ADDRLDDR	DDRD


#define ADDRHPIN	PINE
#define ADDRHPORT	PORTE
#define	ADDRHDDR	DDRE

#define DATA0PIN	PINH
#define DATA0PORT	PORTH
#define DATA0DDR	DDRH

#define DATA1PIN	PINJ
#define DATA1PORT	PORTJ
#define DATA1DDR	DDRJ

#define DATA2PIN	PINK
#define DATA2PORT	PORTK
#define DATA2DDR	DDRK

#define DATA3PIN	PINL
#define DATA3PORT	PORTL
#define DATA3DDR	DDRL

#define INTDDR		DDRD
#define INTPORT		PORTD
#define INTPIN		PIND

#define BOOTEDDDR	DDRB
#define BOOTEDPORT	PORTB
#define BOOTEDPIN	PINB
#define BOOTED		7

uint32_t fpga_delayed_write(void);
void fpga_finish_read(uint32_t data);
void init_fpgabus(void);
void avr_online(void);
#endif /* !_BUS_H_ */
