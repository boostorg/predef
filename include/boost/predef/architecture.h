/*
Copyright Rene Rivera 2008-2015
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#if !defined(BOOST_PREDEF_ARCHITECTURE_H) || defined(BOOST_PREDEF_INTERNAL_GENERATE_TESTS)
#ifndef BOOST_PREDEF_ARCHITECTURE_H
#define BOOST_PREDEF_ARCHITECTURE_H
#endif

#include <boost/predef/architecture/alpha.h>
#include <boost/predef/architecture/arm.h>
#include <boost/predef/architecture/blackfin.h>
#include <boost/predef/architecture/convex.h>
#include <boost/predef/architecture/ia64.h>
#include <boost/predef/architecture/m68k.h>
#include <boost/predef/architecture/mips.h>
#include <boost/predef/architecture/parisc.h>
#include <boost/predef/architecture/ppc.h>
#include <boost/predef/architecture/ptx.h>
#include <boost/predef/architecture/pyramid.h>
#include <boost/predef/architecture/riscv.h>
#include <boost/predef/architecture/rs6k.h>
#include <boost/predef/architecture/sparc.h>
#include <boost/predef/architecture/superh.h>
#include <boost/predef/architecture/sys370.h>
#include <boost/predef/architecture/sys390.h>
#include <boost/predef/architecture/x86.h>
#include <boost/predef/architecture/z.h>
/*#include <boost/predef/architecture/.h>*/

#if defined(BOOST_ARCH_ALPHA_AVAILABLE) && defined(BOOST_ARCH_ALPHA_NAME)
#   define BOOST_ARCH_CURRENT_NAME BOOST_ARCH_ALPHA_NAME
#   define BOOST_ARCH_CURRENT_WORD_BITS BOOST_ARCH_ALPHA_WORD_BITS
#elif defined(BOOST_ARCH_ARM_AVAILABLE) && defined(BOOST_ARCH_ARM_NAME)
#   define BOOST_ARCH_CURRENT_NAME BOOST_ARCH_ARM_NAME
#   define BOOST_ARCH_CURRENT_WORD_BITS BOOST_ARCH_ARM_WORD_BITS
#elif defined(BOOST_ARCH_BLACKFIN_AVAILABLE) && defined(BOOST_ARCH_BLACKFIN_NAME)
#   define BOOST_ARCH_CURRENT_NAME BOOST_ARCH_BLACKFIN_NAME
#   define BOOST_ARCH_CURRENT_WORD_BITS BOOST_ARCH_BLACKFIN_WORD_BITS
#elif defined(BOOST_ARCH_CONVEX_AVAILABLE) && defined(BOOST_ARCH_CONVEX_NAME)
#   define BOOST_ARCH_CURRENT_NAME BOOST_ARCH_CONVEX_NAME
#   define BOOST_ARCH_CURRENT_WORD_BITS BOOST_ARCH_CONVEX_WORD_BITS
#elif defined(BOOST_ARCH_IA64_AVAILABLE) && defined(BOOST_ARCH_IA64_NAME)
#   define BOOST_ARCH_CURRENT_NAME BOOST_ARCH_IA64_NAME
#   define BOOST_ARCH_CURRENT_WORD_BITS BOOST_ARCH_IA64_WORD_BITS
#elif defined(BOOST_ARCH_M68K_AVAILABLE) && defined(BOOST_ARCH_M68K_NAME)
#   define BOOST_ARCH_CURRENT_NAME BOOST_ARCH_M68K_NAME
#   define BOOST_ARCH_CURRENT_WORD_BITS BOOST_ARCH_M68K_WORD_BITS
#elif defined(BOOST_ARCH_MIPS_AVAILABLE) && defined(BOOST_ARCH_MIPS_NAME)
#   define BOOST_ARCH_CURRENT_NAME BOOST_ARCH_MIPS_NAME
#   define BOOST_ARCH_CURRENT_WORD_BITS BOOST_ARCH_MIPS_WORD_BITS
#elif defined(BOOST_ARCH_PARISC_AVAILABLE) && defined(BOOST_ARCH_PARISC_NAME)
#   define BOOST_ARCH_CURRENT_NAME BOOST_ARCH_PARISC_NAME
#   define BOOST_ARCH_CURRENT_WORD_BITS BOOST_ARCH_PARISC_WORD_BITS
#elif defined(BOOST_ARCH_PPC_AVAILABLE) && defined(BOOST_ARCH_PPC_NAME)
#   define BOOST_ARCH_CURRENT_NAME BOOST_ARCH_PPC_NAME
#   define BOOST_ARCH_CURRENT_WORD_BITS BOOST_ARCH_PPC_WORD_BITS
#elif defined(BOOST_ARCH_PTX_AVAILABLE) && defined(BOOST_ARCH_PTX_NAME)
#   define BOOST_ARCH_CURRENT_NAME BOOST_ARCH_PTX_NAME
#   define BOOST_ARCH_CURRENT_WORD_BITS BOOST_ARCH_PTX_WORD_BITS
#elif defined(BOOST_ARCH_PYRAMID_AVAILABLE) && defined(BOOST_ARCH_PYRAMID_NAME)
#   define BOOST_ARCH_CURRENT_NAME BOOST_ARCH_PYRAMID_NAME
#   define BOOST_ARCH_CURRENT_WORD_BITS BOOST_ARCH_PYRAMID_WORD_BITS
#elif defined(BOOST_ARCH_RISCV_AVAILABLE) && defined(BOOST_ARCH_RISCV_NAME)
#   define BOOST_ARCH_CURRENT_NAME BOOST_ARCH_RISCV_NAME
#   define BOOST_ARCH_CURRENT_WORD_BITS BOOST_ARCH_RISCV_WORD_BITS
#elif defined(BOOST_ARCH_RS6K_AVAILABLE) && defined(BOOST_ARCH_RS6K_NAME)
#   define BOOST_ARCH_CURRENT_NAME BOOST_ARCH_RS6K_NAME
#   define BOOST_ARCH_CURRENT_WORD_BITS BOOST_ARCH_RS6K_WORD_BITS
#elif defined(BOOST_ARCH_SPARC_AVAILABLE) && defined(BOOST_ARCH_SPARC_NAME)
#   define BOOST_ARCH_CURRENT_NAME BOOST_ARCH_SPARC_NAME
#   define BOOST_ARCH_CURRENT_WORD_BITS BOOST_ARCH_SPARC_WORD_BITS
#elif defined(BOOST_ARCH_SUPERH_AVAILABLE) && defined(BOOST_ARCH_SUPERH_NAME)
#   define BOOST_ARCH_CURRENT_NAME BOOST_ARCH_SUPERH_NAME
#   define BOOST_ARCH_CURRENT_WORD_BITS BOOST_ARCH_SUPERH_WORD_BITS
#elif defined(BOOST_ARCH_SYS370_AVAILABLE) && defined(BOOST_ARCH_SYS370_NAME)
#   define BOOST_ARCH_CURRENT_NAME BOOST_ARCH_SYS370_NAME
#   define BOOST_ARCH_CURRENT_WORD_BITS BOOST_ARCH_SYS370_WORD_BITS
#elif defined(BOOST_ARCH_SYS390_AVAILABLE) && defined(BOOST_ARCH_SYS390_NAME)
#   define BOOST_ARCH_CURRENT_NAME BOOST_ARCH_SYS390_NAME
#   define BOOST_ARCH_CURRENT_WORD_BITS BOOST_ARCH_SYS390_WORD_BITS
#elif defined(BOOST_ARCH_X86_AVAILABLE) && defined(BOOST_ARCH_X86_NAME)
#   define BOOST_ARCH_CURRENT_NAME BOOST_ARCH_X86_NAME
#   define BOOST_ARCH_CURRENT_WORD_BITS BOOST_ARCH_X86_WORD_BITS
#elif defined(BOOST_ARCH_Z_AVAILABLE) && defined(BOOST_ARCH_Z_NAME)
#   define BOOST_ARCH_CURRENT_NAME BOOST_ARCH_Z_NAME
#   define BOOST_ARCH_CURRENT_WORD_BITS BOOST_ARCH_Z_WORD_BITS
#endif

#endif
