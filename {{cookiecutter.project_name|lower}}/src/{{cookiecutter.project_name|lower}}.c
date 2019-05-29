/* -*- mode: c; c-file-style: "openbsd" -*- */
/*
 * Copyright (c) 2019 {{cookiecutter.full_name}} <{{cookiecutter.email}}>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

#ifdef DEBUG
#define TRACE_ENTRY printk(KERN_CRIT "Entering %s\n", __func__)
#define TRACE_EXIT  printk(KERN_CRIT "Exiting %s\n", __func__)
#else
#define TRACE_ENTRY do {} while (0)
#define TRACE_EXIT  do {} while (0)
#endif

#if HAVE_CONFIG_H
#  include <config.h>
#endif

extern const char *__progname;

static int __init
_{{cookiecutter.small_prefix|lower}}_init (void) {
	int exitcode = 1;

	TRACE_ENTRY;

	printk("Hello, world!");
	
	exitcode = 0;

	goto exit;
	
exit:
  TRACE_EXIT;
	return exitcode;
}

module_init(_{{cookiecutter.small_prefix|lower}}_init);

static void __exit
_{{cookiecutter.small_prefix}}_exit (void) {
  TRACE_ENTRY;

	printk("Goodbye, world!");

  TRACE_EXIT;
}

module_exit(_{{cookiecutter.small_prefix}}_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("{{cookiecutter.full_name}}");
MODULE_DESCRIPTION("{{cookiecutter.project_description}}");
MODULE_VERSION("printk");