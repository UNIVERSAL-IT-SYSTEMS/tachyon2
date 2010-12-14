/* Copyright (c) 2010 by Markus Duft <mduft@gentoo.org>
 * This file is part of the 'tachyon' operating system. */

#pragma once

#define ELF_BITS            64

typedef long long           intptr_t;
typedef unsigned long long  uintptr_t;

typedef enum {
    Page4K,
    Page4M
} pagesize_t;

#include "x86_common.h"

#define PAGE_SIZE_DEFAULT       PAGE_SIZE_4K
#define PAGE_SIZE_KERNEL        PAGE_SIZE_2M

