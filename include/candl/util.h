
   /**------ ( ----------------------------------------------------------**
    **       )\                      CAnDL                               **
    **----- /  ) --------------------------------------------------------**
    **     ( * (                   util.h                                **
    **----  \#/  --------------------------------------------------------**
    **    .-"#'-.        First version: june 7th 2012                    **
    **--- |"-.-"| -------------------------------------------------------**
          |     |
          |     |
 ******** |     | *************************************************************
 * CAnDL  '-._,-' the Chunky Analyzer for Dependences in Loops (experimental) *
 ******************************************************************************
 *                                                                            *
 * Copyright (C) 2003-2008 Cedric Bastoul                                     *
 *                                                                            *
 * This is free software; you can redistribute it and/or modify it under the  *
 * terms of the GNU General Public License as published by the Free Software  *
 * Foundation; either version 2 of the License, or (at your option) any later *
 * version.                                                                   *
 *                                                                            *
 * This software is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY *
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License   *
 * for more details.                                                          *
 *                                                                            *
 * You should have received a copy of the GNU General Public License along    *
 * with software; if not, write to the Free Software Foundation, Inc.,        *
 * 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA                     *
 *                                                                            *
 * CAnDL, the Chunky Dependence Analyzer                                      *
 * Written by Cedric Bastoul, Cedric.Bastoul@inria.fr                         *
 *                                                                            *
 ******************************************************************************/

/*
 * author Joel Poudroux
 */

#ifndef CANDL_UTIL_H
#define CANDL_UTIL_H

#include <osl/scop.h>

void candl_util_scop_align(osl_scop_p, osl_scop_p);

#endif
