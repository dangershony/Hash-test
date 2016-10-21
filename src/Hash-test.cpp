// Hash-test.cpp : Defines the entry point for the console application.

// or a javascript implementation of this hash functions see this http://www.programcreek.com/java-api-examples/index.php?source_dir=darkcoinj-master/core/src/main/java/fr/cryptohash/Hamsi384.java
// for a c# implementations go to the NStratis repo https://github.com/stratisproject/NStratis
#include "stdafx.h"
#include "hash.h"
#include "util.h"

int main()
{
	std::vector<char> out;
	// the stratis genesis block header
	out = parse_string("01000000000000000000000000000000000000000000000000000000000000000000000018157f44917c2514c1f339346200f8b27d8ffaae9d8205bfae51030bc26ba265b88ba557ffff0f1eddf21b00");
	uint256 res = HashX13(&out[0], &out[79]+1);
	// the stratis genesis block hash
	uint256 expexted = uint256("0x0000066e91e46e5a264d42c89e1204963b2ee6be230b443e9159020539d972af");
	assert(res == expexted);

    return 0;
}

