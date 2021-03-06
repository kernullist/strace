/* Generated by ./xlat/gen.sh from ./xlat/inet_diag_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat inet_diag_attrs in mpers mode

# else

static
const struct xlat inet_diag_attrs[] = {
 XLAT(INET_DIAG_NONE),
 XLAT(INET_DIAG_MEMINFO),
 XLAT(INET_DIAG_INFO),
 XLAT(INET_DIAG_VEGASINFO),
 XLAT(INET_DIAG_CONG),
 XLAT(INET_DIAG_TOS),
 XLAT(INET_DIAG_TCLASS),
 XLAT(INET_DIAG_SKMEMINFO),
 XLAT(INET_DIAG_SHUTDOWN),
 XLAT(INET_DIAG_DCTCPINFO),
 XLAT(INET_DIAG_PROTOCOL),
 XLAT(INET_DIAG_SKV6ONLY),
 XLAT(INET_DIAG_LOCALS),
 XLAT(INET_DIAG_PEERS),
 XLAT(INET_DIAG_PAD),
 XLAT(INET_DIAG_MARK),
 XLAT(INET_DIAG_BBRINFO),
 XLAT(INET_DIAG_CLASS_ID),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
