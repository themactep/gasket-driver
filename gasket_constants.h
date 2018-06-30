/* Copyright (C) 2018 Google, Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
#ifndef __GASKET_CONSTANTS_H__
#define __GASKET_CONSTANTS_H__

#define GASKET_FRAMEWORK_VERSION "1.1.1"

/*
 * The maximum number of simultaneous device types supported by the framework.
 */
#define GASKET_FRAMEWORK_DESC_MAX 2

/* The maximum devices per each type. */
#define GASKET_DEV_MAX 256

/* The number of supported (and possible) PCI BARs. */
#define GASKET_NUM_BARS 6

/* The number of supported Gasket page tables per device. */
#define GASKET_MAX_NUM_PAGE_TABLES 1

/* Maximum length of device names (driver name + minor number suffix + NULL). */
#define GASKET_NAME_MAX 32

/* Device status enumeration. */
enum gasket_status {
	/*
	 * A device is DEAD if it has not been initialized or has had an error.
	 */
	GASKET_STATUS_DEAD = 0,
	/*
	 * A device is LAMED if the hardware is healthy but the kernel was
	 * unable to enable some functionality (e.g. interrupts).
	 */
	GASKET_STATUS_LAMED,

	/* A device is ALIVE if it is ready for operation. */
	GASKET_STATUS_ALIVE,

	/*
	 * This status is set when the driver is exiting and waiting for all
	 * handles to be closed.
	 */
	GASKET_STATUS_DRIVER_EXIT,
};

#endif
