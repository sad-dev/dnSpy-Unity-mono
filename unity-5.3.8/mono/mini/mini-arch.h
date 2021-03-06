#ifndef __MONO_MINI_ARCH_H__
#define __MONO_MINI_ARCH_H__

#ifdef TARGET_X86
#include "mini-x86.h"
#elif defined(TARGET_AMD64)
#include "mini-amd64.h"
#elif defined(TARGET_POWERPC)
#include "mini-ppc.h"
#elif defined(__sparc__) || defined(sparc)
#include "mini-sparc.h"
#elif defined(__s390__) || defined(s390)
# if defined(__s390x__)
#  include "mini-s390x.h"
# else
#  include "mini-s390.h"
# endif
#elif defined(__ia64__)
#include "mini-ia64.h"
#elif defined(TARGET_ARM)
#include "mini-arm.h"
#elif defined(__alpha__)
#include "mini-alpha.h"
#elif defined(__mips__)
#include "mini-mips.h"
#elif defined(__hppa__)
#include "mini-hppa.h"
#else
#error add arch specific include file in mini-arch.h
#endif

#if (MONO_ARCH_FRAME_ALIGNMENT == 4)
#define MONO_ARCH_LOCALLOC_ALIGNMENT 8
#else
#define MONO_ARCH_LOCALLOC_ALIGNMENT MONO_ARCH_FRAME_ALIGNMENT
#endif

#endif /* __MONO_MINI_ARCH_H__ */  
