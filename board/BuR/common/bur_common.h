/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * bur_comon.h
 *
 * common board information header for B&R boards
 *
 * Copyright (C) 2013 Hannes Schmelzer <oe5hpm@oevsv.at>
 * Bernecker & Rainer Industrieelektronik GmbH - http://www.br-automation.com
 */

#ifndef _BUR_COMMON_H_
#define _BUR_COMMON_H_

void br_summaryscreen(void);
void pmicsetup(u32 mpupll, unsigned int bus);
void enable_uart0_pin_mux(void);
void enable_i2c_pin_mux(void);
void enable_board_pin_mux(void);
int board_eth_init(struct bd_info *bis);

int brdefaultip_setup(int bus, int chip);

#endif
