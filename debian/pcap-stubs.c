/*
 * SPDX-License-Identifier: BSD-2-Clause
 * Copyright (c) 2026 The Blueberry Pie OS Authors
 */
#include <stddef.h>
#include <stdio.h>

#include <pcap/pcap.h>

static void
set_unsupported(char *errbuf)
{
	if (errbuf != NULL)
		snprintf(errbuf, PCAP_ERRBUF_SIZE, "remote capture not available");
}

pcap_t *
pcap_open(const char *source, int snaplen, int flags, int read_timeout,
    struct pcap_rmtauth *auth, char *errbuf)
{
	set_unsupported(errbuf);
	return NULL;
}

int
pcap_createsrcstr(char *source, int type, const char *host, const char *port,
    const char *name, char *errbuf)
{
	set_unsupported(errbuf);
	return PCAP_ERROR;
}

int
pcap_parsesrcstr(const char *source, int *type, char *host, char *port,
    char *name, char *errbuf)
{
	set_unsupported(errbuf);
	return PCAP_ERROR;
}

int
pcap_findalldevs_ex(const char *source, struct pcap_rmtauth *auth,
    pcap_if_t **alldevs, char *errbuf)
{
	set_unsupported(errbuf);
	return PCAP_ERROR;
}

struct pcap_samp *
pcap_setsampling(pcap_t *p)
{
	return NULL;
}

SOCKET
pcap_remoteact_accept(const char *address, const char *port,
    const char *hostlist, char *connectinghost, struct pcap_rmtauth *auth,
    char *errbuf)
{
	set_unsupported(errbuf);
	return -1;
}

SOCKET
pcap_remoteact_accept_ex(const char *address, const char *port,
    const char *hostlist, char *connectinghost, struct pcap_rmtauth *auth,
    int uses_ssl, char *errbuf)
{
	set_unsupported(errbuf);
	return -1;
}

int
pcap_remoteact_list(char *hostlist, char sep, int size, char *errbuf)
{
	set_unsupported(errbuf);
	return PCAP_ERROR;
}

int
pcap_remoteact_close(const char *host, char *errbuf)
{
	set_unsupported(errbuf);
	return PCAP_ERROR;
}

void
pcap_remoteact_cleanup(void)
{
}
