#include "hq_emmc_name.h"

#define NUM_EMI_RECORD (2)

EMMC_NAME_STRUCT emmc_names_table[] =
{
    //  H9TQ17ABJTBCUR-KUM(A05) 0x90 01 4a 48 41 47 34 61 32	#1520
	{
		{0x90,0x01,0x4a,0x48,0x41,0x47,0x34,0x61,0x32,0x0},
		{"Hynix 2GB+16GB H9TQ17ABJTBCUR-KUM(A05)"},
	},
	//  H9TQ52ACLTMCUR-KUM 0x90 01 4a 48 43 47 38 61 34			#1590
	{
		{0x90,0x01,0x4a,0x48,0x43,0x47,0x38,0x61,0x34,0x0},
		{"Hynix 4GB+64GB H9TQ52ACLTMCUR-KUM"},
	},
	//  H9TQ26ADFTBCUR-KUM	0x90 01 4a 48 42 47 34 61 32		#1520 / #1590
	{
		{0x90,0x01,0x4a,0x48,0x42,0x47,0x34,0x61,0x32,0x0},
		{"Hynix 3GB+32GB H9TQ26ADFTBCUR-KUM"},
	},
/*	Not used & CID conflict with H9TQ26ADFTBCUR-KUM
	//  H9TQ26ACLTMCUR-KUM	0x90 01 4a 48 42 47 34 61 32
	{
		{0x90,0x01,0x4a,0x48,0x42,0x47,0x34,0x61,0x32,0x0},
		{"Hynix 4GB+32GB H9TQ26ACLTMCUR-KUM"},
	},
*/
	//  KMQE60013M-B318 0x15 01 00 51 45 36 33 4d 42			#1520
	{
		{0x15,0x01,0x00,0x51,0x45,0x36,0x33,0x4d,0x42,0x0},
		{"Samsung 2GB+16GB KMQE60013M-B318"},
	},
	//  KMRH60014A-B614 0x15 01 00 52 48 36 34 41 42			#1590
	{
		{0x15,0x01,0x00,0x52,0x48,0x36,0x34,0x41,0x42,0x0},
		{"Samsung 4GB+64GB  KMRH60014A-B614"},
	},
	//  KMRX1000BM-B614 0x15 01 00 52 58 31 42 4d 42			#1520
	{
		{0x15,0x01,0x00,0x52,0x58,0x31,0x42,0x4d,0x42,0x0},
		{"Samsung 3GB+32GB  KMRX1000BM-B614"},
	},
	//  KMGX6001BM-B514	 0x15 01 00 47 58 36 42 4D 42			#1520 / #1590
	{
		{0x15,0x01,0x00,0x47,0x58,0x36,0x42,0x4d,0x42,0x0},
		{"Samsung 3GB+32GB KMGX6001BM-B514"},
	},
};

int num_of_emmc_records = sizeof(emmc_names_table)/sizeof(EMMC_NAME_STRUCT) ;
