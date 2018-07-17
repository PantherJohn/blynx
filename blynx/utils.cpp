#include "utils.h"

utils::utils()
{
}

bool utils::ifrange(in_addr feedin, 
	blockCIDR criterion)
{
	return (feedin.s_addr & criterion.mask.s_addr) == 
		(criterion.addr.s_addr & criterion.mask.s_addr);
}