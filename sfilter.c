// runs our filters on packet data

#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt

#include <linux/kernel.h>
#include <linux/string.h>

#include "defs.h"


static void print_sfilter(struct sfilter *sf)
{
    int i = 0;

    pr_debug("sfilter matches: ");
    for (i = 0; i < sf->num_matches; ++i)
    {
        pr_debug("'%s', ", sf->matches[i]);
    }
    pr_debug("\n");
}

static bool run_sfilter(struct sfilter *sf, char *s)
{
    int i = 0;
    char *last = NULL;
    char *match = NULL;

    last = s;
    for (i = 0; i < sf->num_matches; ++i)
    {
        match = sf->matches[i];

        last = strstr(last, match);
        if (!last)
        {
            return false;
        }

        last += strlen(match);
    }

    print_sfilter(sf); // for debugging
    return true;
}

static bool run_sfilters(struct sfilter *sfilters[], size_t num_sfilters, char *s)
{
    int i = 0;

    for (i = 0; i < num_sfilters; ++i)
    {
        if (run_sfilter(&sfilters[i], s))
        {
            return true;
        }
    }

    return false;
}

bool run_get_sfilters(char *s)
{
    return run_sfilter(&get_sfilters, num_get_sfilters, s);
}

bool run_dns_sfilters(char *s)
{
    return run_sfilter(&dns_sfilders, num_dns_sfilters, s);
}
