/*
 * utils.h
 *
 *  Created on: Feb 8, 2025
 *      Author: DELL
 */

#ifndef LIB_UTILS_H_
#define LIB_UTILS_H_

#define SET_BIT(REG,BIT)    (REG|=(1<<BIT))
#define CLEAR_BIT(REG,BIT)  (REG&=~(1<<BIT))
#define GET_BIT(REG,BIT)    ((REG>>BIT)&1)
#define TOGGLE_BIT(REG,BIT) (REG^=(1<<BIT))

#endif /* LIB_UTILS_H_ */
