/*
 * Copyright 2019 Broadcom.
 * The term “Broadcom” refers to Broadcom Inc. and/or its subsidiaries
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <arch/cpu.h>
#include <device.h>
#include <init.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Perform basic hardware initialization at boot.
 *
 * This needs to be run from the very beginning.
 * So the init priority has to be 0 (zero).
 *
 * @return 0
 */

static int brcm_valkyrie_init(struct device *arg)
{
	ARG_UNUSED(arg);

	return 0;
}

SYS_INIT(brcm_valkyrie_init, PRE_KERNEL_1, 0);
