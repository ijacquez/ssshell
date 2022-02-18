/*
 * Copyright (c) 2012-2016 Israel Jacquez
 * See LICENSE for details.
 *
 * Israel Jacquez <mrkotfw@gmail.com>
 */

#ifndef LIBSSUSB_DEBUG_H_
#define LIBSSUSB_DEBUG_H_

#ifdef DEBUG
#include <stdio.h>
#include <stdbool.h>

#define DEBUG_PRINTF(fmt, ...) do {                                            \
        (void)fprintf(stderr, "%s():L%i:" " " fmt, __FUNCTION__, __LINE__,     \
            ##__VA_ARGS__);                                                    \
        (void)fflush(stderr);                                                  \
} while(false)
#else
#define DEBUG_PRINTF(x...)
#endif /* DEBUG */

#ifdef DEBUG
#include "shared.h"

#define DEBUG_HEXDUMP(buffer, len) do {                                        \
        debug_hexdump(buffer, len);                                            \
} while (false)
#else
#define DEBUG_HEXDUMP(...)
#endif /* DEBUG */

#endif /* !LIBSSUSB_DEBUG_H_ */
