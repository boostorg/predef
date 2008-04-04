//~ Copyright Redshift Software, Inc. 2008
//~ Distributed under the Boost Software License, Version 1.0.
//~ (See accompanying file LICENSE_1_0.txt or copy at
//~ http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PREDEF_COMPILER_BSD_HPP
#define BOOST_PREDEF_COMPILER_BSD_HPP

#include <boost/predef/version_number.hpp>
#include <boost/predef/detail/vrp.hpp>

#define BOOST_OS_BSD BOOST_VERSION_NUMBER(0,0,0)
#define BOOST_OS_DRAGONFLY_BSD BOOST_VERSION_NUMBER(0,0,0)
#define BOOST_OS_FREE_BSD BOOST_VERSION_NUMBER(0,0,0)
#define BOOST_OS_BSDI_BSD BOOST_VERSION_NUMBER(0,0,0)
#define BOOST_OS_NET_BSD BOOST_VERSION_NUMBER(0,0,0)
#define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(0,0,0)

#if defined(BSD) || defined(__bsdi__) || \
    defined(__DragonFly__) || defined(__FreeBSD__) || \
    defined(__NetBSD__) || defined(__OpenBSD__) || \
    defined(_SYSTYPE_BSD)
    #undef BOOST_OS_BSD
    #undef BOOST_OS_BSDI_BSD
    #undef BOOST_OS_DRAGONFLY_BSD
    #undef BOOST_OS_FREE_BSD
    #undef BOOST_OS_NET_BSD
    #undef BOOST_OS_OPEN_BSD
    #if defined(BSD4_2)
        #define BOOST_OS_BSD BOOST_VERSION_NUMBER(4,2,0)
    #elif defined(BSD4_3)
        #define BOOST_OS_BSD BOOST_VERSION_NUMBER(4,3,0)
    #elif defined(BSD4_4)
        #define BOOST_OS_BSD BOOST_VERSION_NUMBER(4,4,0)
    #elif defined(BSD)
        #define BOOST_OS_BSD BOOST_PREDEF_VRP_NN_NN(BSD)
    #else
        #define BOOST_OS_BSD BOOST_VERSION_NUMBER(0,0,1)
    #endif
    #if defined(__bsdi__)
        #define BOOST_OS_BSDI_BSD BOOST_VERSION_NUMBER(0,0,1)
    #endif
    #if defined(__DragonFly__)
        #define BOOST_OS_DRAGONFLY_BSD BOOST_VERSION_NUMBER(0,0,1)
    #endif
    #if defined(__FreeBSD__)
        #if defined(__FreeBSD_version)
            #if __FreeBSD_version < 500000
                #define BOOST_OS_FREE_BSD \
                    BOOST_PREDEF_VRP_N_N_N_000(__FreeBSD_version)
            #else
                #define BOOST_OS_FREE_BSD \
                    BOOST_PREDEF_VRP_N_NN_000(__FreeBSD_version)
            #endif
        #else
            #define BOOST_OS_FREE_BSD BOOST_VERSION_NUMBER(0,0,1)
        #endif
    #endif
    #if defined(__NetBSD__)
        #if defined(NetBSD0_8)
            #define BOOST_OS_NET_BSD BOOST_VERSION_NUMBER(0,8,0)
        #elif defined(NetBSD0_9)
            #define BOOST_OS_NET_BSD BOOST_VERSION_NUMBER(0,9,0)
        #elif defined(NetBSD1_0)
            #define BOOST_OS_NET_BSD BOOST_VERSION_NUMBER(1,0,0)
        #elif defined(__NetBSD_Version)
            #define BOOST_OS_NET_BSD \
                BOOST_PREDEF_VRP_NN_NN_00_NN_00(__NetBSD_Version)
    #endif
    #if defined(__OpenBSD__)
        #if defined(OpenBSD2_0)
            #define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(2,0,0)
        #elif defined(OpenBSD2_1)
            #define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(2,1,0)
        #elif defined(OpenBSD2_2)
            #define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(2,2,0)
        #elif defined(OpenBSD2_3)
            #define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(2,3,0)
        #elif defined(OpenBSD2_4)
            #define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(2,4,0)
        #elif defined(OpenBSD2_5)
            #define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(2,5,0)
        #elif defined(OpenBSD2_6)
            #define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(2,6,0)
        #elif defined(OpenBSD2_7)
            #define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(2,7,0)
        #elif defined(OpenBSD2_8)
            #define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(2,8,0)
        #elif defined(OpenBSD2_9)
            #define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(2,9,0)
        #elif defined(OpenBSD3_0)
            #define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(3,0,0)
        #elif defined(OpenBSD3_1)
            #define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(3,1,0)
        #elif defined(OpenBSD3_2)
            #define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(3,2,0)
        #elif defined(OpenBSD3_3)
            #define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(3,3,0)
        #elif defined(OpenBSD3_4)
            #define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(3,4,0)
        #elif defined(OpenBSD3_5)
            #define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(3,5,0)
        #elif defined(OpenBSD3_6)
            #define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(3,6,0)
        #elif defined(OpenBSD3_7)
            #define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(3,7,0)
        #elif defined(OpenBSD3_8)
            #define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(3,8,0)
        #elif defined(OpenBSD3_9)
            #define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(3,9,0)
        #elif defined(OpenBSD4_0)
            #define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(4,0,0)
        #elif defined(OpenBSD4_1)
            #define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(4,1,0)
        #elif defined(OpenBSD4_2)
            #define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(4,2,0)
        #elif defined(OpenBSD4_3)
            #define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(4,3,0)
        #else
            #define BOOST_OS_OPEN_BSD BOOST_VERSION_NUMBER(0,0,1)
        #endif
    #endif
#endif

#endif
