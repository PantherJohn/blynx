#pragma once

#include "utils.h"

/*
*	Global Parameters
*	TODO: initialize params here!
*	.........................................
*/

namespace uptest {

	struct ping {
		std::string cmd;
		size_t time = 0;
	};

	struct http {
		std::string cmd;
		size_t time = 0;
	};

	struct rtime {
		std::string cmd;
		size_t time = 0;
	};

}

struct governor {
	std::string label;
	std::vector<int> validate;

	struct criterion {
		size_t interval;
		compatAddr fallback;
	};
	
	static criterion newt;
};

struct server {
	std::string label;
	sockaddr_in addr;
	size_t ttl;
	std::string cache;
	std::vector<int> query;
	std::vector<compatAddr> reject;
	std::vector<compatAddr> exclude;
	governor newt;
};

struct zone {
	std::string label;
};


class conf
{
public:
	conf();
};

