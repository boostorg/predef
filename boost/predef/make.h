/*
Copyright Redshift Software, Inc. 2008-2010
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/
#include <boost/predef/detail/test.h>

#ifndef BOOST_PREDEF_MAKE_H
#define BOOST_PREDEF_MAKE_H

/*
Shorthands for the common version number formats used by vendors...
*/

/*`
[heading `BOOST_PREDEF_MAKE_F..` macros]

These set of macros decompose common vendor version number
macros which are composed of hexadecimal digits. The naming
convention indicates what the format of the vendor version
number. Where "`F`" indicates a hexadecimal digit, "`_`"
separates the major/minor/patch parts of the version number,
and "`0`" indicates an ignored hexadecimal digit. Macros are:
*/
/*` `BOOST_PREDER_MAKE_F_F_F(V)` */
#define BOOST_PREDEF_MAKE_F_F_F(V) BOOST_VERSION_NUMBER((V&0xF00)>>8,(V&0xF0)>>4,(V&0xF))
/*` `BOOST_PREDEF_MAKE_FF_F_F(V)` */
#define BOOST_PREDEF_MAKE_FF_F_F(V) BOOST_VERSION_NUMBER((V&0xFF00)>>8,(V&0xF0)>>4,(V&0xF))
/*` `BOOST_PREDEF_MAKE_F_F_FF(V)` */
#define BOOST_PREDEF_MAKE_F_F_FF(V) BOOST_VERSION_NUMBER((V&0xF000)>>12,(V&0xF00)>>8,(V&0xFF))
/*` `BOOST_PREDEF_MAKE_FF_FF(V)` */
#define BOOST_PREDEF_MAKE_FF_FF(V) BOOST_VERSION_NUMBER((V&0xFF00)>>8,(V&0xFF),0)
/*` `BOOST_PREDEF_MAKE_F_FF_FFFF(V)` */
#define BOOST_PREDEF_MAKE_F_FF_FFFF(V) BOOST_VERSION_NUMBER((V&0xF000000)>>24,(V&0xFF0000)>>16,(V&0xFFFF))
/*` `BOOST_PREDEF_MAKE_FF_FF_F(V)` */
#define BOOST_PREDEF_MAKE_FF_FF_F(V) BOOST_VERSION_NUMBER((V&0xFF000)>>12,(V&0xFF0)>>4,(V&0xF))
/*` `BOOST_PREDEF_MAKE_F_FF_FF_000(V)` */
#define BOOST_PREDEF_MAKE_F_FF_FF_000(V) BOOST_VERSION_NUMBER((V&0xF0000000)>>28,(V&0xFF00000)>>20,(V&0xFF000)>>12)

/*`
[heading `BOOST_PREDEF_MAKE_N..` macros]

These set of macros decompose common vendor version number
macros which are composed of decimal digits. The naming
convention indicates what the format of the vendor version
number. Where "`N`" indicates a decimal digit, "`_`"
separates the major/minor/patch parts of the version number,
and "`0`" indicates an ignored decimal digit. Macros are:
*/
/*` `BOOST_PREDEF_MAKE_N__NNN(V)` */
#define BOOST_PREDEF_MAKE_N__NNN(V) BOOST_VERSION_NUMBER(((V)/1000)%10,0,(V)%1000)
/*` `BOOST_PREDEF_MAKE_N_N_N(V)` */
#define BOOST_PREDEF_MAKE_N_N_N(V) BOOST_VERSION_NUMBER(((V)/100)%10,((V)/10)%10,(V)%10)
/*` `BOOST_PREDEF_MAKE_N_N_N_000(V)` */
#define BOOST_PREDEF_MAKE_N_N_N_000(V) BOOST_VERSION_NUMBER(((V)/100000)%10,((V)/10000)%10,((V)/1000)%10)
/*` `BOOST_PREDEF_MAKE_N_N_NN(V)` */
#define BOOST_PREDEF_MAKE_N_N_NN(V) BOOST_VERSION_NUMBER(((V)/1000)%10,((V)/100)%10,(V)%100)
/*` `BOOST_PREDEF_MAKE_N_NN(V)` */
#define BOOST_PREDEF_MAKE_N_NN(V) BOOST_VERSION_NUMBER(((V)/100)%10,(V)%100,0)
/*` `BOOST_PREDEF_MAKE_N_NN_NN(V)` */
#define BOOST_PREDEF_MAKE_N_NN_NN(V) BOOST_VERSION_NUMBER(((V)/10000)%10,((V)/100)%100,(V)%100)
/*` `BOOST_PREDEF_MAKE_N_NN_000(V)` */
#define BOOST_PREDEF_MAKE_N_NN_000(V) BOOST_VERSION_NUMBER(((V)/100000)%10,((V)/1000)%100,0)
/*` `BOOST_PREDEF_MAKE_NN_00(V)` */
#define BOOST_PREDEF_MAKE_NN_00(V) BOOST_VERSION_NUMBER(((V)/100)%100,0,0)
/*` `BOOST_PREDEF_MAKE_NN_NN(V)` */
#define BOOST_PREDEF_MAKE_NN_NN(V) BOOST_VERSION_NUMBER(((V)/100)%100,(V)%100,0)
/*` `BOOST_PREDEF_MAKE_NN_NN_NN(V)` */
#define BOOST_PREDEF_MAKE_NN_NN_NN(V) BOOST_VERSION_NUMBER(((V)/10000)%100,((V)/100)%100,(V)%100)
/*` `BOOST_PREDEF_MAKE_NN_NN_0_NN_00(V)` */
#define BOOST_PREDEF_MAKE_NN_NN_0_NN_00(V) BOOST_VERSION_NUMBER(((V)/10000000)%100,((V)/100000)%100,((V)/100)%100)
/*` `BOOST_PREDEF_MAKE_NN_NN_0_NNNN(V)` */
#define BOOST_PREDEF_MAKE_NN_NN_0_NNNN(V) BOOST_VERSION_NUMBER(((V)/10000000)%100,((V)/100000)%100,(V)%10000)
/*` `BOOST_PREDEF_MAKE_NN_NN_00_NN_00(V)` */
#define BOOST_PREDEF_MAKE_NN_NN_00_NN_00(V) BOOST_VERSION_NUMBER(((V)/100000000)%100,((V)/1000000)%100,((V)/100)%100)
/*` `BOOST_PREDEF_MAKE_YYYY_MM_DD(V)` */
#define BOOST_PREDEF_MAKE_YYYY_MM_DD(V) BOOST_VERSION_NUMBER(((V)/10000)%10000-1970,((V)/100)%100,(V)%100)

#endif
