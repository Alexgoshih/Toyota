
//#define			SLAVE_ADDRESS 	(0xA0 >> 1)		// I2C module compares bit<0..6> of I2CADD with bit<1..7> of I2C Command Byte

void			Init_I2C(void) ;
unsigned char  	I2C_ACKPolling(unsigned char ) ;

int		Write(unsigned char , unsigned char  , unsigned char  ) ;
unsigned char	Read(unsigned char  , unsigned char  , unsigned char  ) ;
