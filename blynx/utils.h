#pragma once

#include <string>
#include <vector>

#include <netinet/in.h>
#include <netinet/ip.h>

#include "conf.h"

/*
*	Const Parameters
*	TODO: initialize params here!
*	.........................................
*/

#define BLYNX_UPTEST_PING	0
#define BLYNX_UPTEST_HTTP	0
#define BLYNX_UPTEST_RTIME	0

#define CRITERION_INTVL_IMMED	0
#define CRITERION_INTVL_BFORE	0
#define CRITERION_INTVL_AFTER	0


struct blockCIDR {
	in_addr addr;
	in_addr mask;
};

struct compatAddr {
	blockCIDR cidr;
	in_addr inaddr;
	std::string domain;
	zone zone;
};

class utils
{
public:
	utils();
	bool ifrange(in_addr feedin, 
		blockCIDR criterion);
};

