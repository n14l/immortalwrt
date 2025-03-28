// SPDX-License-Identifier: (GPL-2.0+ OR MIT)
/*
 * Copyright (c) 2021 Rockchip Electronics Co., Ltd.
 *
 * author:
 *	Herman Chen <herman.chen@rock-chips.com>
 */

#define FIX_RK3568_BUF_SIZE		(2 * PAGE_SIZE)
#define RKDEC_HACK_DATA_RPS_OFFSET	(128 * 1)
#define RKDEC_HACK_DATA_PPS_OFFSET	(128 * 2)
#define RKDEC_HACK_DATA_RLC_OFFSET	(128 * 3)
#define RKDEC_HACK_DATA_OUT_OFFSET	(128 * 4)
#define RKDEC_HACK_DATA_COLMV_OFFSET	(128 * 5)

static u32 rkvdec2_3568_hack_link[] = {
	0x00000000, /* 0x0020 */
	0x00000001, /* 0x0024 */
	0x00000001, /* 0x0028 */
	0x00000072, /* 0x002c */
	0x00000182, /* 0x0030 */
	0x01040201, /* 0x0034 */
	0x00000000, /* 0x0038 */
	0x00000001, /* 0x003c */
	0x00000030, /* 0x0040 */
	0x00003fff, /* 0x0044 */
	0x00000001, /* 0x0048 */
	0x00000001, /* 0x004c */
	0x00000010, /* 0x0050 */
	0x00000006, /* 0x0054 */
	0x00000000, /* 0x0058 */
	0x00000000, /* 0x005c */
	0xffffdfff, /* 0x0060 */
	0x3ffbfbff, /* 0x0064 */
	0x800fffff, /* 0x0068 */
	0x00000000, /* 0x006C */

	0x00000000, /* 0x0100 */
	0x00000000, /* 0x0104 */
	0x00000000, /* 0x0108 */
	0x00000000, /* 0x010c */
	0x00000000, /* 0x0110 */
	0x00000000, /* 0x0114 */
	0x00000000, /* 0x0118 */
	0x00000000, /* 0x011c */
	0x00000000, /* 0x0120 */
	0x00000000, /* 0x0124 */
	0x00000000, /* 0x0128 */
	0x00000000, /* 0x012c */
	0x00000000, /* 0x0130 */
	0x00000000, /* 0x0134 */
	0x00000000, /* 0x0138 */
	0x00000000, /* 0x013c */
	0x00000000, /* 0x0140 */
	0x00000000, /* 0x0144 */
	0x00000000, /* 0x0148 */
	0x00000000, /* 0x014c */
	0x00000000, /* 0x0150 */
	0x00000000, /* 0x0154 */
	0x00000000, /* 0x0158 */
	0x00000000, /* 0x015c */
	0x00000000, /* 0x0160 */
	0x00000000, /* 0x0164 */
	0x00000000, /* 0x0168 */
	0x00000000, /* 0x016c */
	0x00000000, /* 0x0170 */
	0x00000000, /* 0x0174 */
	0x00000000, /* 0x0178 */
	0x00000000, /* 0x017c */
	0x00000000, /* 0x0180 */
	0x00000000, /* 0x0184 */
	0x00000000, /* 0x0188 */
	0x00000000, /* 0x018c */
	0x00000000, /* 0x0190 */
	0x00000000, /* 0x0194 */
	0x00000000, /* 0x0198 */
	0x00000000, /* 0x019c */
	0x00000000, /* 0x01a0 */
	0x00000000, /* 0x01a4 */
	0x00000000, /* 0x01a8 */
	0x00000000, /* 0x01ac */
	0x00000000, /* 0x01b0 */
	0x00000000, /* 0x01b4 */
	0x00000000, /* 0x01b8 */
	0x00000000, /* 0x01bc */
	0x00000000, /* 0x01c0 */
	0x00000000, /* 0x01c4 */
	0x00000000, /* 0x01c8 */
	0x00000000, /* 0x01cc */

	0x00000000, /* 0x0200 */
	0x00000000, /* 0x0204 */
	0x00000000, /* 0x0208 */
	0x00000000, /* 0x020c */
	0x00000000, /* 0x0210 */
	0x100001c0, /* 0x0214 */
	0x100001c0, /* 0x0218 */
	0x100001c0, /* 0x021c */
	0x100001c0, /* 0x0220 */
	0x10000340, /* 0x0224 */
	0x10000340, /* 0x0228 */
	0x10000000, /* 0x022c */
	0x10000000, /* 0x0230 */
	0x10000000, /* 0x0234 */
	0x10000000, /* 0x0238 */
	0x10000000, /* 0x023c */

	0x00000000, /* 0x0280 */
	0x00000000, /* 0x0284 */
	0x00000000, /* 0x0288 */
	0x00000000, /* 0x028c */
	0x00000000, /* 0x0290 */
	0x00000000, /* 0x0294 */
	0x00000000, /* 0x0298 */
	0x00000000, /* 0x029c */
	0x00000000, /* 0x02a0 */
	0x00000000, /* 0x02a4 */
	0x00000000, /* 0x02a8 */
	0x00000000, /* 0x02ac */
	0x00000000, /* 0x02b0 */
	0x00000000, /* 0x02b4 */
	0x00000000, /* 0x02b8 */
	0x00000000, /* 0x02bc */
	0x00000000, /* 0x02c0 */
	0x00000000, /* 0x02c4 */
	0x00000000, /* 0x02c8 */
	0x00000000, /* 0x02cc */
	0x00000000, /* 0x02d0 */
	0x00000000, /* 0x02d4 */
	0x00000000, /* 0x02d8 */
	0x00000000, /* 0x02dc */
	0x00000000, /* 0x02e0 */
	0x00000000, /* 0x02e4 */
	0x00000000, /* 0x02e8 */
	0x00000000, /* 0x02ec */
	0x00000000, /* 0x02f0 */
	0x00000000, /* 0x02f4 */
	0x00000000, /* 0x02f8 */
	0x00000000, /* 0x02fc */
	0x00000000, /* 0x0300 */
	0x00000000, /* 0x0304 */
	0x00000000, /* 0x0308 */
	0x00000000, /* 0x030c */
	0x00000000, /* 0x0310 */
	0x00000000, /* 0x0314 */
	0x00000000, /* 0x0318 */
	0x00000000, /* 0x031c */

	0x00000000, /* 0x0380 */
	0x00000000, /* 0x0384 */
	0x00000000, /* 0x0388 */
	0x00000000, /* 0x038c */
	0x00000000, /* 0x0390 */
	0x00000000, /* 0x0394 */
	0x00000000, /* 0x0398 */
	0x00000000, /* 0x039c */
	0x00000000, /* 0x03a0 */
	0x00000000, /* 0x03a4 */
	0x00000000, /* 0x03a8 */
	0x00000000, /* 0x03ac */
	0x00000000, /* 0x03b0 */
	0x00000000, /* 0x03b4 */
	0x00000000, /* 0x03b8 */
	0x00000000, /* 0x03bc */

	0x00000000, /* 0x0400 */
	0x00000000, /* 0x0404 */
	0x00000000, /* 0x0408 */
	0x00000000, /* 0x040c */
	0x00000000, /* 0x0410 */
	0x00000000, /* 0x0414 */
	0x00000000, /* 0x0418 */
	0x00000000, /* 0x041c */
	0x00000000, /* 0x0420 */
	0x00000000, /* 0x0424 */
	0x00000000, /* 0x0428 */
	0x00000000, /* 0x042c */
	0x00000000, /* 0x0430 */
	0x00000000, /* 0x0434 */
	0x00000000, /* 0x0438 */
	0x00000000, /* 0x043c */
};

void rkvdec2_3568_hack_fix_link(void *buf)
{
	memcpy(buf, rkvdec2_3568_hack_link, sizeof(rkvdec2_3568_hack_link));
}

void rkvdec2_link_hack_data_setup(struct mpp_dma_buffer *fix)
{
	u32 iova = fix->iova;
	u32 i;

	/* input stream */
	rkvdec2_3568_hack_link[72] = iova;
	/* error info */
	rkvdec2_3568_hack_link[73] = iova + RKDEC_HACK_DATA_RLC_OFFSET;
	/* output frame */
	rkvdec2_3568_hack_link[74] = iova + RKDEC_HACK_DATA_OUT_OFFSET;
	/* colmv out */
	rkvdec2_3568_hack_link[75] = iova + 128 * 6;
	/* error ref */
	rkvdec2_3568_hack_link[76] = iova + 128 * 4;

	/* rps in */
	rkvdec2_3568_hack_link[89] = iova + RKDEC_HACK_DATA_PPS_OFFSET;
	/* pps in */
	rkvdec2_3568_hack_link[91] = iova + RKDEC_HACK_DATA_RPS_OFFSET;
	for (i = 0; i < 33; i++)
		rkvdec2_3568_hack_link[92 + i] = iova + RKDEC_HACK_DATA_COLMV_OFFSET;

	rkvdec2_3568_hack_link[125] = iova + PAGE_SIZE;
}
