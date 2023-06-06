/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * tegra186_asrc.h - Definitions for Tegra186 ASRC driver
 *
 * Copyright (c) 2022, NVIDIA CORPORATION. All rights reserved.
 *
 */

#ifndef __TEGRA186_ASRC_H__
#define __TEGRA186_ASRC_H__

/* ASRC stream related offset */
#define TEGRA186_ASRC_CFG				0x0
#define TEGRA186_ASRC_RATIO_INT_PART			0x4
#define TEGRA186_ASRC_RATIO_FRAC_PART			0x8
#define TEGRA186_ASRC_RATIO_LOCK_STATUS			0xc
#define TEGRA186_ASRC_MUTE_UNMUTE_DURATION		0x10
#define TEGRA186_ASRC_TX_THRESHOLD			0x14
#define TEGRA186_ASRC_RX_THRESHOLD			0x18
#define TEGRA186_ASRC_RATIO_COMP			0x1c
#define TEGRA186_ASRC_RX_STATUS				0x20
#define TEGRA186_ASRC_RX_CIF_CTRL			0x24
#define TEGRA186_ASRC_TX_STATUS				0x2c
#define TEGRA186_ASRC_TX_CIF_CTRL			0x30
#define TEGRA186_ASRC_ENABLE				0x38
#define TEGRA186_ASRC_SOFT_RESET			0x3c
#define TEGRA186_ASRC_STATUS				0x4c
#define TEGRA186_ASRC_STATEBUF_ADDR			0x5c
#define TEGRA186_ASRC_STATEBUF_CFG			0x60
#define TEGRA186_ASRC_INSAMPLEBUF_ADDR			0x64
#define TEGRA186_ASRC_INSAMPLEBUF_CFG			0x68
#define TEGRA186_ASRC_OUTSAMPLEBUF_ADDR			0x6c
#define TEGRA186_ASRC_OUTSAMPLEBUF_CFG			0x70

/* ASRC Global registers offset */
#define TEGRA186_ASRC_GLOBAL_ENB			0x2f4
#define TEGRA186_ASRC_GLOBAL_SOFT_RESET			0x2f8
#define TEGRA186_ASRC_GLOBAL_CG				0x2fc
#define TEGRA186_ASRC_GLOBAL_CFG			0x300
#define TEGRA186_ASRC_GLOBAL_SCRATCH_ADDR		0x304
#define TEGRA186_ASRC_GLOBAL_SCRATCH_CFG		0x308
#define TEGRA186_ASRC_RATIO_UPD_RX_CIF_CTRL		0x30c
#define TEGRA186_ASRC_RATIO_UPD_RX_STATUS		0x310
#define TEGRA186_ASRC_GLOBAL_STATUS			0x314
#define TEGRA186_ASRC_GLOBAL_STREAM_ENABLE_STATUS	0x318
#define TEGRA186_ASRC_GLOBAL_INT_STATUS			0x324
#define TEGRA186_ASRC_GLOBAL_INT_MASK			0x328
#define TEGRA186_ASRC_GLOBAL_INT_SET			0x32c
#define TEGRA186_ASRC_GLOBAL_INT_CLEAR			0x330
#define TEGRA186_ASRC_GLOBAL_TRANSFER_ERROR_LOG		0x334
#define TEGRA186_ASRC_GLOBAL_APR_CTRL			0x1000
#define TEGRA186_ASRC_GLOBAL_APR_CTRL_ACCESS_CTRL	0x1004
#define TEGRA186_ASRC_GLOBAL_DISARM_APR			0x1008
#define TEGRA186_ASRC_GLOBAL_DISARM_APR_ACCESS_CTRL	0x100c
#define TEGRA186_ASRC_GLOBAL_RATIO_WR_ACCESS		0x1010
#define TEGRA186_ASRC_GLOBAL_RATIO_WR_ACCESS_CTRL	0x1014
#define TEGRA186_ASRC_CYA				0x1018

#define TEGRA186_ASRC_STREAM_DEFAULT_HW_COMP_BIAS_VALUE		0xaaaa
#define TEGRA186_ASRC_STREAM_DEFAULT_INPUT_HW_COMP_THRESH_CFG	0x00201002
#define TEGRA186_ASRC_STREAM_DEFAULT_OUTPUT_HW_COMP_THRESH_CFG	0x00201002

#define TEGRA186_ASRC_GLOBAL_CFG_FRAC_28BIT_PRECISION		0
#define TEGRA186_ASRC_GLOBAL_CFG_FRAC_32BIT_PRECISION		1

#define TEGRA186_ASRC_STREAM_ENABLE_HW_RATIO_COMP_SHIFT		31
#define TEGRA186_ASRC_STREAM_ENABLE_HW_RATIO_COMP_MASK		(1 << TEGRA186_ASRC_STREAM_ENABLE_HW_RATIO_COMP_SHIFT)
#define TEGRA186_ASRC_STREAM_ENABLE_HW_RATIO_COMP_ENABLE	(1 << TEGRA186_ASRC_STREAM_ENABLE_HW_RATIO_COMP_SHIFT)
#define TEGRA186_ASRC_STREAM_ENABLE_HW_RATIO_COMP_DISABLE	(0 << TEGRA186_ASRC_STREAM_ENABLE_HW_RATIO_COMP_SHIFT)

#define TEGRA186_ASRC_STREAM_RATIO_TYPE_SHIFT			0
#define TEGRA186_ASRC_STREAM_RATIO_TYPE_MASK			(1 << TEGRA186_ASRC_STREAM_RATIO_TYPE_SHIFT)

#define TEGRA186_ASRC_STREAM_EN_SHIFT				0
#define TEGRA186_ASRC_STREAM_EN					(1 << TEGRA186_ASRC_STREAM_EN_SHIFT)
#define TEGRA186_ASRC_GLOBAL_EN_SHIFT				0
#define TEGRA186_ASRC_GLOBAL_EN					(1 << TEGRA186_ASRC_GLOBAL_EN_SHIFT)

#define TEGRA186_ASRC_STREAM_STATEBUF_CFG_SIZE_SHIFT		0
#define TEGRA186_ASRC_STREAM_STATEBUF_CFG_SIZE_MASK		(0xffff << TEGRA186_ASRC_STREAM_STATEBUF_CFG_SIZE_SHIFT)
#define TEGRA186_ASRC_STREAM_INSAMPLEBUF_CFG_SIZE_SHIFT		0
#define TEGRA186_ASRC_STREAM_INSAMPLEBUF_CFG_SIZE_MASK		(0xffff << TEGRA186_ASRC_STREAM_INSAMPLEBUF_CFG_SIZE_SHIFT)
#define TEGRA186_ASRC_STREAM_OUTSAMPLEBUF_CFG_SIZE_SHIFT	0
#define TEGRA186_ASRC_STREAM_OUTSAMPLEBUF_CFG_SIZE_MASK		(0xffff << TEGRA186_ASRC_STREAM_OUTSAMPLEBUF_CFG_SIZE_SHIFT)

#define TEGRA186_ASRC_STREAM_RATIO_INT_PART_MASK		0x1f
#define TEGRA186_ASRC_STREAM_RATIO_FRAC_PART_MASK		0xffffffff

#define TEGRA186_ASRC_STREAM_STRIDE				0x80
#define TEGRA186_ASRC_STREAM_MAX				0x6
#define TEGRA186_ASRC_STREAM_LIMIT				0x2f0

#define TEGRA186_ASRC_RATIO_SOURCE_ARAD				0x0
#define TEGRA186_ASRC_RATIO_SOURCE_SW				0x1

#define TEGRA186_ASRC_ARAM_START_ADDR				0x3f800000

struct tegra186_asrc_lane {
	unsigned int int_part;
	unsigned int frac_part;
	unsigned int ratio_source;
	unsigned int hwcomp_disable;
	unsigned int input_thresh;
	unsigned int output_thresh;
};

struct tegra186_asrc {
	struct tegra186_asrc_lane lane[TEGRA186_ASRC_STREAM_MAX];
	struct regmap *regmap;
};

#endif