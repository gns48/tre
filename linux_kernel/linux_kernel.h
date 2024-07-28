// SPDX-License-Identifier: GPL-2.0 OR BSD-2-Clause
/*
  linux_kernel.h - TRE definitions for linux kernel module

  This software is released under a BSD-style license.
  See the file LICENSE for details and copyright.

*/

#ifndef __LINUX_KERNEL_H__
#define __LINUX_KERNEL_H__

#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/ctype.h>
#include <linux/kstrtox.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/slab.h>
#include <linux/sort.h>
#include <linux/string.h>

#undef TRE_WCHAR
#undef TRE_APPROX
#undef HAVE_SYS_TYPES_H
#undef HAVE_SYS_TYPES_H
#undef TRE_USE_SYSTEM_REGEX_H

#define TRE_REGEX_T_FIELD value

#define DPRINT(msg) do {} while (/*CONSTCOND*/ (void)0, 0)

#define assert(x)

#define xmalloc(size) kmalloc(size, GFP_KERNEL)
#define xcalloc(nmemb, size) kcalloc(nmemb, size, GFP_KERNEL)
#define xfree(ptr) kfree(ptr)
#define xrealloc(ptr, new_size) krealloc(ptr, new_size, GFP_KERNEL)
#define malloc(size) kmalloc(size, GFP_KERNEL)
#define calloc(nmemb, size) kcalloc(nmemb, size, GFP_KERNEL)
#define free(ptr) kfree(ptr)
#define realloc(ptr, new_size) krealloc(ptr, new_size, GFP_KERNEL)
#define strtol(p, e, b) kstrtol(p, b, e)

/* TRE version string. */
#define TRE_VERSION "0.8.0"

/* TRE version level 1. */
#define TRE_VERSION_1 0

/* TRE version level 2. */
#define TRE_VERSION_2 8

/* TRE version level 3. */
#define TRE_VERSION_3 0

#endif /* __LINUX_KERNEL_H__ */
