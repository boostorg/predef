/*
Copyright Redshift Software, Inc. 2013
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_ENDIAN_H
#define BOOST_PREDEF_ENDIAN_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>
#include <boost/predef/library/c.h>

/*`
[heading `BOOST_ENDIAN_BIG_BYTE`, `BOOST_ENDIAN_LITTLE_BYTE`, `BOOST_ENDIAN_BIG_WORD`, `BOOST_ENDIAN_LITTLE_WORD`]

Detection of endian memory ordering.
 */

#define BOOST_ENDIAN_BIG_BYTE BOOST_VERSION_NUMBER_NOT_AVAILABLE
#define BOOST_ENDIAN_BIG_WORD BOOST_VERSION_NUMBER_NOT_AVAILABLE
#define BOOST_ENDIAN_LITTLE_BYTE BOOST_VERSION_NUMBER_NOT_AVAILABLE
#define BOOST_ENDIAN_LITTLE_WORD BOOST_VERSION_NUMBER_NOT_AVAILABLE

/* GNU libc provides a header defining __BYT_ORDER. */
#if BOOST_LIB_C_GNU
#   include <endian.h>
#endif

/* GNU libc style __BYTE_ORDER macros. */
#if defined(__BYTE_ORDER)
#   if (__BYTE_ORDER == __BIG_ENDIAN)
#       undef BOOST_ENDIAN_BIG_BYTE
#       define BOOST_ENDIAN_BIG_BYTE BOOST_VERSION_NUMBER_AVAILABLE
#   endif
#   if (__BYTE_ORDER == __LITTLE_ENDIAN)
#       undef BOOST_ENDIAN_LITTLE_BYTE
#       define BOOST_ENDIAN_LITTLE_BYTE BOOST_VERSION_NUMBER_AVAILABLE
#   endif
#   if (__BYTE_ORDER == __PDP_ENDIAN)
#       undef BOOST_ENDIAN_LITTLE_WORD
#       define BOOST_ENDIAN_LITTLE_WORD BOOST_VERSION_NUMBER_AVAILABLE
#   endif
#endif

/* Built-in byte-swpped big-endian macros. */
#if !BOOST_ENDIAN_BIG_BYTE
#   if defined(__BIG_ENDIAN__) || \
        defined(__ARMEB__) || \
        defined(__THUMBEB__) || \
        defined(__AARCH64EB__) || \
        defined(_MIPSEB) || \
        defined(__MIPSEB) || \
        defined(__MIPSEB__)
#       undef BOOST_ENDIAN_BIG_BYTE
#       define BOOST_ENDIAN_BIG_BYTE BOOST_VERSION_NUMBER_AVAILABLE
#   endif
#endif

/* Built-in byte-swapped little-endian macros. */
#if !BOOST_ENDIAN_LITTLE_BYTE
#   if defined(__LITTLE_ENDIAN__) || \
        defined(__ARMEL__) || \
        defined(__THUMBEL__) || \
        defined(__AARCH64EL__) || \
        defined(_MIPSEL) || \
        defined(__MIPSEL) || \
        defined(__MIPSEL__)
#       undef BOOST_ENDIAN_LITTLE_BYTE
#       define BOOST_ENDIAN_LITTLE_BYTE BOOST_VERSION_NUMBER_AVAILABLE
#   endif
#endif

/* Some architectures are strictly one endianess (as opposed
 * the current common bi-endianess).
 */
#if !BOOST_ENDIAN_BIG_BYTE && \
    !BOOST_ENDIAN_BIG_WORD && \
    !BOOST_ENDIAN_LITTLE_BYTE && \
    !BOOST_ENDIAN_LITTLE_WORD
#   include <boost/predef/architecture.h>
#   if BOOST_ARCH_M68K || \
        BOOST_ARCH_PARISK || \
        BOOST_ARCH_SYS370 || \
        BOOST_ARCH_SYS390 || \
        BOOST_ARCH_Z
#       undef BOOST_ENDIAN_BIG_BYTE
#       define BOOST_ENDIAN_BIG_BYTE BOOST_VERSION_NUMBER_AVAILABLE
#   endif
#   if BOOST_ARCH_AMD64 || \
        BOOST_ARCH_IA64 || \
        BOOST_ARCH_X86
#       undef BOOST_ENDIAN_LITTLE_BYTE
#       define BOOST_ENDIAN_LITTLE_BYTE BOOST_VERSION_NUMBER_AVAILABLE
#   endif
#endif

#if BOOST_ENDIAN_BIG_BYTE
#   define BOOST_ENDIAN_BIG_BYTE_AVAILABLE
#endif
#if BOOST_ENDIAN_BIG_WORD_BYTE
#   define BOOST_ENDIAN_BIG_WORD_BYTE_AVAILABLE
#endif
#if BOOST_ENDIAN_LITTLE_BYTE
#   define BOOST_ENDIAN_LITTLE_BYTE_AVAILABLE
#endif
#if BOOST_ENDIAN_LITTLE_WORD_BYTE
#   define BOOST_ENDIAN_LITTLE_WORD_BYTE_AVAILABLE
#endif

#define BOOST_ENDIAN_BIG_BYTE_NAME "Byte-Swapped Big-Endian"
#define BOOST_ENDIAN_BIG_WORD_NAME "Word-Swapped Big-Endian"
#define BOOST_ENDIAN_LITTLE_BYTE_NAME "Byte-Swapped Little-Endian"
#define BOOST_ENDIAN_LITTLE_WORD_NAME "Word-Swapped Little-Endian"

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_ENDIAN_BIG_BYTE,BOOST_ENDIAN_BIG_BYTE_NAME)

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_ENDIAN_BIG_WORD,BOOST_ENDIAN_BIG_WORD_NAME)

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_ENDIAN_LITTLE_BYTE,BOOST_ENDIAN_LITTLE_BYTE_NAME)

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_ENDIAN_LITTLE_WORD,BOOST_ENDIAN_LITTLE_WORD_NAME)


#endif
