/**
 * @file calc.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "market.h"
/**
 * @brief 
 * 
 * @param mrp 
 * @param dis 
 * @param q 
 * @return float 
 */

float cal(int mrp,int dis,int q)
{
    return ((mrp-((dis*mrp)/100))*q);
}