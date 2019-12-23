/*
 * Copyright 2019 Broadcom
 * The term "Broadcom" refers to Broadcom Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <soc.h>
#include <arch/arm/aarch64/arm_mmu.h>

static const struct arm_mmu_region mmu_regions[] = {

	MMU_REGION_FLAT_ENTRY("GIC",
			      0x8000000, 0x20000,
			      MT_DEVICE_nGnRnE | MT_RW | MT_SECURE),

	MMU_REGION_FLAT_ENTRY("UART",
			      0x9000000, 0x1000,
			      MT_DEVICE_nGnRnE | MT_RW | MT_SECURE),

	MMU_REGION_FLAT_ENTRY("SRAM",
			      CONFIG_SRAM_BASE_ADDRESS, CONFIG_SRAM_SIZE,
			      MT_NORMAL | MT_RW | MT_SECURE),
};

const struct arm_mmu_config mmu_config = {
	.num_regions = ARRAY_SIZE(mmu_regions),
	.mmu_regions = mmu_regions,
};
