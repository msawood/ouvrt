/*
 * Oculus Rift CV1 Radio
 * Copyright 2016 Philipp Zabel
 * SPDX-License-Identifier:	LGPL-2.0+ or BSL-1.0
 */
#ifndef __RIFT_RADIO_H__
#define __RIFT_RADIO_H__

#include <unistd.h>

struct rift_remote {
	uint16_t buttons;
};

struct rift_radio {
	const char *name;
	struct rift_remote remote;
};

void rift_decode_radio_message(struct rift_radio *radio,
			       const unsigned char *buf, size_t len);

#endif /* __RIFT_RADIO_H__ */
