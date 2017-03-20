
/*
 * Copyright (C) Igor Sysoev
 * Copyrignt (C) Nginx, Inc.
 */


#include <ngx_config.h>
#include <ngx_core.h>
#include <nginx.h>


ngx_module_t  ngx_core_module = {
};

int ngx_cdecl
main(int argc, char *const *argv)
{
    printf("Ngx!\n");
    return 0;
}
