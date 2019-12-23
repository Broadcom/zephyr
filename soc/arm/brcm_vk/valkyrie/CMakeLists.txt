#
# Copyright 2019 Broadcom
# The term "Broadcom" refers to Broadcom Inc. and/or its subsidiaries.
#
# SPDX-License-Identifier: Apache-2.0
#

zephyr_sources(
  soc.c
  )
zephyr_library_sources_ifdef(CONFIG_ARM_MMU arm_mmu_regions.c)
