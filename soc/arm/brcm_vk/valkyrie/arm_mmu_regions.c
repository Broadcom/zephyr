/*
 * Copyright 2019 Broadcom
 * The term "Broadcom" refers to Broadcom Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <soc.h>
#include <arch/arm/aarch64/arm_mmu.h>

#define SZ_4K	0x1000
#define SZ_1M	(256 * SZ_4K)
#define SZ_2M	(2 * SZ_1M)
#define SZ_4M	(2 * SZ_2M)
#define SZ_512M (256 * SZ_2M)
#define SZ_1G   (2 * SZ_512M)

static const struct arm_mmu_region mmu_regions[] = {

	MMU_REGION_FLAT_ENTRY("DEVICE_REGION",
			      0x40000000, SZ_512M,
			      MT_DEVICE_nGnRnE | MT_RW | MT_SECURE),

	MMU_REGION_FLAT_ENTRY("DRAM0_S0",
			      0x60000000, SZ_512M,
			      MT_NORMAL | MT_RW | MT_SECURE),
};

const struct arm_mmu_config mmu_config = {
	.num_regions = ARRAY_SIZE(mmu_regions),
	.mmu_regions = mmu_regions,
};
