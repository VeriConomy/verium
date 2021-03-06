// Copyright (c) 2012-2018 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

#if defined(HAVE_CONFIG_H)
#include <config/bitcoin-config.h>
#endif

/**
 * network protocol versioning
 */

static const int PROTOCOL_VERSION = 90001;

//! initial proto version, to be increased after version/verack negotiation
static const int INIT_PROTO_VERSION = 70012;

//! In this version, 'getheaders' was introduced.
static const int GETHEADERS_VERSION = 31800;

//! disconnect from peers older than this proto version
#if CLIENT_IS_VERIUM
static const int MIN_PEER_PROTO_VERSION = 80004;
#else
static const int MIN_PEER_PROTO_VERSION = 70012;
#endif

//! nTime field added to CAddress, starting with this version;
//! if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 31402;

//! BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 60000;

//! "filter*" commands are disabled without NODE_BLOOM after and including this version
static const int NO_BLOOM_VERSION = 80003;

//! "sendheaders" command and announcing blocks with headers starts with this version
static const int SENDHEADERS_VERSION = 80003;

//! "feefilter" tells peers to filter invs to you by fee starts with this version
static const int FEEFILTER_VERSION = 80003;

//! short-id-based block download starts with this version
static const int SHORT_IDS_BLOCKS_VERSION = 80003;

//! not banning for invalid compact blocks starts with this version
static const int INVALID_CB_NO_BAN_VERSION = 80003;

//! sending POS information in headers starts with this version
static const int POS_INFO_HEADERS_VERSION = 90000;

//! Enable cmpct2
static const int NET_CMPCT2_VERSION = 90001;

#endif // BITCOIN_VERSION_H
