
/*
 * Copyright (C) Igor Sysoev
 * Copyright (C) Nginx, Inc.
 */


#ifndef _NGX_BUF_H_INCLUDED_
#define _NGX_BUF_H_INCLUDED_


#include <ngx_config.h>
#include <ngx_core.h>




typedef struct ngx_buf_s ngx_buf_t;

struct ngx_buf_s {
    u_char          *pos;
};

#endif
