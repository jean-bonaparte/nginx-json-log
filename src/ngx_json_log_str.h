/*
 * Copyright (C) 2017 Paulo Pacheco
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */
#ifndef __NGX_JSON_LOG_STR_H__
#define __NGX_JSON_LOG_STR_H__

#include <ngx_core.h>

const char *
ngx_json_log_buf_dup_len(ngx_pool_t *pool, u_char *src, size_t len);

u_char *
ngx_json_log_str_dup(ngx_pool_t *pool, ngx_str_t *src);

ngx_str_t *
ngx_json_log_str_dup_from_buf_len(ngx_pool_t *pool,
        ngx_str_t *src, size_t len);

u_char *
ngx_json_log_str_dup_len(ngx_pool_t *pool, ngx_str_t *src, size_t len);

ngx_int_t
ngx_json_log_str_clone(ngx_pool_t *pool, ngx_str_t *src, ngx_str_t *dst);

ngx_uint_t
ngx_json_log_str_split_count(ngx_str_t *value, u_char separator);

size_t
ngx_json_log_hexdump_length(size_t len, size_t blocksz);
void
ngx_json_log_hexdump(ngx_str_t *src, ngx_str_t *dst);

#endif //__NGX_JSON_LOG_STR_H__
