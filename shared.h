/*
 * Copyright (c) 2012-2014 Israel Jacquez
 * See LICENSE for details.
 *
 * Israel Jacquez <mrkotfw@gmail.com>
 */

#ifndef SHARED_H_
#define SHARED_H_

#include <inttypes.h>

#define ADDRESS_MSB(x)  ((uint8_t)((x) >> 24) & 0xFF)
#define ADDRESS_02(x)   ((uint8_t)((x) >> 16) & 0xFF)
#define ADDRESS_01(x)   ((uint8_t)((x) >> 8) & 0xFF)
#define ADDRESS_LSB(x)  ((uint8_t)(x) & 0xFF)

#endif /* !SHARED_H_ */