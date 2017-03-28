#ifndef DIONYSUS_INCLUDE_NETWORK_FATTREE_H
#define DIONYSUS_INCLUDE_NETWORK_FATTREE_H

#include "network/network-base.h"

namespace Dionysus {

class Fattree : public NetworkBase {
	public:
		Fattree(int k);
		~Fattree();
};

} // namespace Dionysus

#endif // DIONYSUS_INCLUDE_NETWORK_FATTREE_H
