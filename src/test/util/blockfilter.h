// Copyright (c) 2019 The Garliccoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef GARLICCOIN_TEST_UTIL_BLOCKFILTER_H
#define GARLICCOIN_TEST_UTIL_BLOCKFILTER_H

#include <blockfilter.h>
class CBlockIndex;

bool ComputeFilter(BlockFilterType filter_type, const CBlockIndex* block_index, BlockFilter& filter);

#endif // GARLICCOIN_TEST_UTIL_BLOCKFILTER_H
