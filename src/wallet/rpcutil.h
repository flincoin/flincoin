// Copyright (c) 2022 The Flincoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

/**
 * Utility functions for RPC commands
 */
#ifndef FLINCOIN_WALLET_UTIL_H
#define FLINCOIN_WALLET_UTIL_H

#include "fs.h"
#include "util.h"

fs::path GetBackupDirFromInput(std::string strUserFilename);

#endif // FLINCOIN_WALLET_UTIL_H
