#ifndef __FREEFARE_PCSC_TAGS_H__
#define __FREEFARE_PCSC_TAGS_H__

struct pcsc_atr_info { 

	enum mifare_tag_type type;
	int len;
	unsigned char* tag;
	unsigned char* mask;

};

struct pcsc_atr_info pcsc_supported_atrs[] = {
	{ DESFIRE     ,  6, "\x3b\x04\x41\x11\x77\x81", NULL},
	{ DESFIRE     ,  6, "\x3b\x81\x80\x01\x80\x80", NULL },
	{ CLASSIC_1K  , 20, "\x3b\x8f\x80\x01\x80\x4f\x0c\xa0\x00\x00\x03\x06\x03\x00\x01\x00\x00\x00\x00\x6a", "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x00\xff\xff\xff\xff\xff\xff\x00" },
	{ CLASSIC_4K  , 20, "\x3b\x8f\x80\x01\x80\x4f\x0c\xa0\x00\x00\x03\x06\x03\x00\x02\x00\x00\x00\x00\x69", "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x00\xff\xff\xff\xff\xff\xff\x00" },
	{ ULTRALIGHT  , 20, "\x3b\x8f\x80\x01\x80\x4f\x0c\xa0\x00\x00\x03\x06\x03\x00\x03\x00\x00\x00\x00\x68", "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x00\xff\xff\xff\xff\xff\xff\x00" },
	{ ULTRALIGHT  , 20, "\x3b\x8f\x80\x01\x80\x4f\x0c\xa0\x00\x00\x03\x06\x03\x00\x03\x00\x00\x00\x00\x68", "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x00\x00\xff\xff\xff\xff\x00" },
	{ DESFIRE     , 0 , NULL, NULL}
};

#endif /* __FREEFARE_PCSC_TAGS_H__ */

