/*
 * lowPassFilter.h
 *
 *  Created on: 19-04-2019
 *      Author: Asus
 */

#ifndef LOWPASSFILTER_H_
#define LOWPASSFILTER_H_

#include "arm_math.h"                   // ARM::CMSIS:DSP

q15_t low_pass_filter(q15_t *input);
void low_pass_filter_init(void);



#endif /* LOWPASSFILTER_H_ */
