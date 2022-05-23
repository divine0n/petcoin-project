// Copyright (c) 2011-2016 The Cryptonote developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <cstdint>
#include <initializer_list>

namespace CryptoNote {Petcoin}
namespace parameters {

const uint64_t CRYPTONOTE_MAX_BLOCK_NUMBER                   = 500000000;
const size_t   CRYPTONOTE_MAX_BLOCK_BLOB_SIZE                = 1000000;
const size_t   CRYPTONOTE_MAX_TX_SIZE                        = 0x10000000;
//TODO Currency-specific address prefix
const uint64_t CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX       = const uint64_t CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX =0x1a3504;
//TODO Choose maturity period for your currency
const size_t   CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW          = 60;
const uint64_t CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT            = 60 * 60 * 2;

const size_t   BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW             = 60;

//TODO Specify total number of available coins
//TODO ((uint64_t)(-1)) equals to 18446744073709551616 coins
//TODO or you can define number explicitly UINT64_C(858986905600000000)
const uint64_t MONEY_SUPPLY                                  = (uint64_t)(-1);
const unsigned EMISSION_SPEED_FACTOR                         = 20;

//TODO Define number of blocks for block size median calculation
const size_t   CRYPTONOTE_REWARD_BLOCKS_WINDOW               = 100;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_P1     = 60000; //size of block (bytes) after which reward for block calculated using block size
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_P2     = 20000; //size of block (bytes) after which reward for block calculated using block size
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_P3     = 300000; //size of block (bytes) after which reward for block calculated using block size
const size_t   CRYPTONOTE_COINBASE_BLOB_RESERVED_SIZE        = 600;
//TODO Define number of digits
const size_t   CRYPTONOTE_DISPLAY_DECIMAL_POINT              = 10;
//TODO Define minimum fee for transactions
const FEE_PER_KB_OLD                                  ((uint64_t)10000000000) // pow(10, 10)
const FEE_PER_KB                                      ((uint64_t)2000000000) // 2 * pow(10, 9)
const FEE_PER_BYTE                                    ((uint64_t)300000)
const DYNAMIC_FEE_PER_KB_BASE_FEE                     ((uint64_t)2000000000) // 2 * pow(10,9)
const DYNAMIC_FEE_PER_KB_BASE_BLOCK_REWARD            ((uint64_t)10000000000000) // 10 * pow(10,12)
const DYNAMIC_FEE_PER_KB_BASE_FEE_V5                  ((uint64_t)2000000000 * (uint64_t)CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_P1 / CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_P3)
const DYNAMIC_FEE_REFERENCE_TRANSACTION_WEIGHT         ((uint64_t)3000)

//TODO Define preferred block's target time
const uint64_t DIFFICULTY_TARGET_V2                             = 120; // seconds
const uint64_t DIFFICULTY_TARGET_V1                             = 60; // seconds

//TODO There are options to tune CryptoNote's difficulty retargeting function.
//TODO We recommend not to change it.
const size_t   DIFFICULTY_WINDOW                             = 720
const size_t   DIFFICULTY_CUT                                = 60;  // timestamps to cut after sorting
const size_t   DIFFICULTY_LAG                                = 15;
const DIFFICULTY_BLOCKS_COUNT                         DIFFICULTY_WINDOW + DIFFICULTY_LAG

const CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS_V1   DIFFICULTY_TARGET_V1 * CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS
const CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS_V2   DIFFICULTY_TARGET_V2 * CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS
const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS    = DIFFICULTY_TARGET * CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS;

const uint64_t CRYPTONOTE_MEMPOOL_TX_LIVETIME                =  (86400*3); //seconds, three days
const uint64_t CRYPTONOTE_MEMPOOL_TX_FROM_ALT_BLOCK_LIVETIME = 604800 //seconds, one weekk

const CRYPTONOTE_DANDELIONPP_STEMS              2 // number of outgoing stem connections per epoch
const CRYPTONOTE_DANDELIONPP_FLUFF_PROBABILITY 20 // out of 100
const CRYPTONOTE_DANDELIONPP_MIN_EPOCH         10 // minutes
const CRYPTONOTE_DANDELIONPP_EPOCH_RANGE       30 // seconds
const CRYPTONOTE_DANDELIONPP_FLUSH_AVERAGE      5 // seconds average for poisson distributed fluff flush
const CRYPTONOTE_DANDELIONPP_EMBARGO_AVERAGE   39 // seconds (see tx_pool.cpp for more info)
const char     CRYPTONOTE_BLOCKS_FILENAME[]                  = "blocks.dat";
const char     CRYPTONOTE_BLOCKINDEXES_FILENAME[]            = "blockindexes.dat";
const char     CRYPTONOTE_BLOCKSCACHE_FILENAME[]             = "blockscache.dat";
const char     CRYPTONOTE_POOLDATA_FILENAME[]                = "poolstate.bin";
const char     P2P_NET_DATA_FILENAME[]                       = "p2pstate.bin";
const char     CRYPTONOTE_BLOCKCHAIN_INDICES_FILENAME[]      = "blockchainindices.dat";
const char     MINER_CONFIG_FILE_NAME[]                      = "miner_conf.json";
} // parameters

//TODO Put here the name of your currency
const char     CRYPTONOTE_NAME[]                             = "Petcoin";
const CRYPTONOTE_BLOCKCHAINDATA_FILENAME      "data.mdb"
const CRYPTONOTE_BLOCKCHAINDATA_LOCK_FILENAME "lock.mdb"
const P2P_NET_DATA_FILENAME                   "p2pstate.bin"
const RPC_PAYMENTS_DATA_FILENAME              "rpcpayments.bin"
const MINER_CONFIG_FILE_NAME                  "miner_conf.json"

const uint8_t  CURRENT_TRANSACTION_VERSION                   =  2;
const uint8_t  BLOCK_MAJOR_VERSION_1                         =  1;
const uint8_t  BLOCK_MINOR_VERSION_0                         =  0;

// to ipv4/6, such that 2+ incoming connections _could_ have sent the tx
const CRYPTONOTE_FORWARD_DELAY_BASE (CRYPTONOTE_NOISE_MIN_DELAY + CRYPTONOTE_NOISE_DELAY_RANGE)
const CRYPTONOTE_FORWARD_DELAY_AVERAGE (CRYPTONOTE_FORWARD_DELAY_BASE + (CRYPTONOTE_FORWARD_DELAY_BASE / 2))
const CRYPTONOTE_MAX_FRAGMENTS                        20 // ~20 * NOISE_BYTES max payload size for covert/noise send
const COMMAND_RPC_GET_BLOCKS_FAST_MAX_BLOCK_COUNT     1000
const COMMAND_RPC_GET_BLOCKS_FAST_MAX_TX_COUNT        20000
const MAX_RPC_CONTENT_LENGTH                          1048576 // 1 MB


//TODO This port will be used by the daemon to establish connections with p2p network
const int      P2P_DEFAULT_PORT                              = ;
//TODO This port will be used by the daemon to interact with simlewallet
const int      RPC_DEFAULT_PORT                              = ;

const P2P_DEFAULT_CONNECTIONS_COUNT                   12
const P2P_DEFAULT_HANDSHAKE_INTERVAL                  60           //secondes
const P2P_DEFAULT_PACKET_MAX_SIZE                     50000000     //50000000 bytes maximum packet size
const P2P_DEFAULT_PEERS_IN_HANDSHAKE                  250
const P2P_MAX_PEERS_IN_HANDSHAKE                      250
const P2P_DEFAULT_CONNECTION_TIMEOUT                  5000       //5 seconds
const P2P_DEFAULT_SOCKS_CONNECT_TIMEOUT               45         // seconds
const P2P_DEFAULT_PING_CONNECTION_TIMEOUT             2000       //2 seconds
const P2P_DEFAULT_INVOKE_TIMEOUT                      60*2*1000  //2 minutes
const P2P_DEFAULT_HANDSHAKE_INVOKE_TIMEOUT            5000       //5 seconds
const P2P_DEFAULT_WHITELIST_CONNECTIONS_PERCENT       70
const P2P_DEFAULT_ANCHOR_CONNECTIONS_COUNT            2
const P2P_DEFAULT_SYNC_SEARCH_CONNECTIONS_COUNT       2
const P2P_DEFAULT_LIMIT_RATE_UP                       2048       // kB/s
const P2P_DEFAULT_LIMIT_RATE_DOWN                     8192       // kB/s


const P2P_FAILED_ADDR_FORGET_SECONDS                  (60*60)     //1 hour
const P2P_IP_BLOCKTIME                                (60*60*24)  //24 hour
const P2P_IP_FAILS_BEFORE_BLOCK                       10
const P2P_IDLE_CONNECTION_KILL_INTERVAL               (5*60) // 5 minutes

const P2P_SUPPORT_FLAG_FLUFFY_BLOCKS                  0x01
const P2P_SUPPORT_FLAGS                               P2P_SUPPORT_FLAG_FLUFFY_BLOCKS

const RPC_IP_FAILS_BEFORE_BLOCK                       3

const THREAD_STACK_SIZE                       5 * 1024 * 1024

const HF_VERSION_DYNAMIC_FEE                  4
const HF_VERSION_MIN_MIXIN_4                  6
const HF_VERSION_MIN_MIXIN_6                  7
const HF_VERSION_MIN_MIXIN_10                 8
const HF_VERSION_MIN_MIXIN_15                 15
const HF_VERSION_ENFORCE_RCT                  6
const HF_VERSION_PER_BYTE_FEE                 8
const HF_VERSION_SMALLER_BP                   10
const HF_VERSION_LONG_TERM_BLOCK_WEIGHT       10
const HF_VERSION_MIN_2_OUTPUTS                12
const HF_VERSION_MIN_V2_COINBASE_TX           12
const HF_VERSION_SAME_MIXIN                   12
const HF_VERSION_REJECT_SIGS_IN_COINBASE      12
const HF_VERSION_ENFORCE_MIN_AGE              12
const HF_VERSION_EFFECTIVE_SHORT_TERM_MEDIAN_IN_PENALTY 12
const HF_VERSION_EXACT_COINBASE               13
const HF_VERSION_CLSAG                        13
const HF_VERSION_DETERMINISTIC_UNLOCK_TIME    13
const HF_VERSION_BULLETPROOF_PLUS             15
const HF_VERSION_VIEW_TAGS                    15
const HF_VERSION_2021_SCALING                 15

const PER_KB_FEE_QUANTIZATION_DECIMALS        8
const CRYPTONOTE_SCALING_2021_FEE_ROUNDING_PLACES 2

const HASH_OF_HASHES_STEP                     512

const DEFAULT_TXPOOL_MAX_WEIGHT               648000000ull // 3 days at 300000, in bytes

const BULLETPROOF_MAX_OUTPUTS                 16
const BULLETPROOF_PLUS_MAX_OUTPUTS            16

const CRYPTONOTE_PRUNING_STRIPE_SIZE          4096 // the smaller, the smoother the increase
const CRYPTONOTE_PRUNING_LOG_STRIPES          3 // the higher, the more space saved
const CRYPTONOTE_PRUNING_TIP_BLOCKS           5500 // the smaller, the more space saved

const RPC_CREDITS_PER_HASH_SCALE ((float)(1<<24))

const DNS_BLOCKLIST_LIFETIME (86400 * 8)

namespace config
{
  uint64_t const DEFAULT_FEE_ATOMIC_XMR_PER_KB = 500; // Just a placeholder!  Change me!
  uint8_t const FEE_CALCULATION_MAX_RETRIES = 10;
  uint64_t const DEFAULT_DUST_THRESHOLD = ((uint64_t)2000000000); // 2 * pow(10, 9)
  uint64_t const BASE_REWARD_CLAMP_THRESHOLD = ((uint64_t)100000000); // pow(10, 8)

  uint64_t const CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX = 18;
  uint64_t const CRYPTONOTE_PUBLIC_INTEGRATED_ADDRESS_BASE58_PREFIX = 19;
  uint64_t const CRYPTONOTE_PUBLIC_SUBADDRESS_BASE58_PREFIX = 42;
  uint16_t const P2P_DEFAULT_PORT = 18080;
  uint16_t const RPC_DEFAULT_PORT = 18081;
  uint16_t const ZMQ_RPC_DEFAULT_PORT = 18082;
  boost::uuids::uuid const NETWORK_ID = { {
      0x12 ,0x30, 0xF1, 0x71 , 0x61, 0x04 , 0x41, 0x61, 0x17, 0x31, 0x00, 0x82, 0x16, 0xA1, 0xA1, 0x10
    } }; // Bender's nightmare
  std::string const GENESIS_TX = "013c01ff0001ffffffffffff03029b2e4c0281c0b02e7c53291a94d1d0cbff8883f8024f5142ee494ffbbd08807121017767aafcde9be00dcfd098715ebcf7f410daebc582fda69d24a28e9d0bc890d1";
  uint32_t const GENESIS_NONCE = 10000;

  // Hash domain separators
  const char HASH_KEY_BULLETPROOF_EXPONENT[] = "bulletproof";
  const char HASH_KEY_BULLETPROOF_PLUS_EXPONENT[] = "bulletproof_plus";
  const char HASH_KEY_BULLETPROOF_PLUS_TRANSCRIPT[] = "bulletproof_plus_transcript";
  const char HASH_KEY_RINGDB[] = "ringdsb";
  const char HASH_KEY_SUBADDRESS[] = "SubAddr";
  const unsigned char HASH_KEY_ENCRYPTED_PAYMENT_ID = 0x8d;
  const unsigned char HASH_KEY_WALLET = 0x8c;
  const unsigned char HASH_KEY_WALLET_CACHE = 0x8d;
  const unsigned char HASH_KEY_RPC_PAYMENT_NONCE = 0x58;
  const unsigned char HASH_KEY_MEMORY = 'k';
  const unsigned char HASH_KEY_MULTISIG[] = {'M', 'u', 'l', 't' , 'i', 's', 'i', 'g', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
  const unsigned char HASH_KEY_MULTISIG_KEY_AGGREGATION[] = "Multisig_key_agg";
  const unsigned char HASH_KEY_TXPROOF_V2[] = "TXPROOF_V2";
  const unsigned char HASH_KEY_CLSAG_ROUND[] = "CLSAG_round";
  const unsigned char HASH_KEY_CLSAG_AGG_0[] = "CLSAG_agg_0";
  const unsigned char HASH_KEY_CLSAG_AGG_1[] = "CLSAG_agg_1";
  const char HASH_KEY_MESSAGE_SIGNING[] = "MoneroMessageSignature";
  const unsigned char HASH_KEY_MM_SLOT = 'm';

  // Multisig
  const uint32_t MULTISIG_MAX_SIGNERS{16};

  namespace testnet
  {
    uint64_t const CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX = 53;
    uint64_t const CRYPTONOTE_PUBLIC_INTEGRATED_ADDRESS_BASE58_PREFIX = 54;
    uint64_t const CRYPTONOTE_PUBLIC_SUBADDRESS_BASE58_PREFIX = 63;
    uint16_t const P2P_DEFAULT_PORT = 28080;
    uint16_t const RPC_DEFAULT_PORT = 28081;
    uint16_t const ZMQ_RPC_DEFAULT_PORT = 28082;
    boost::uuids::uuid const NETWORK_ID = { {
        0x12 ,0x30, 0xF1, 0x71 , 0x61, 0x04 , 0x41, 0x61, 0x17, 0x31, 0x00, 0x82, 0x16, 0xA1, 0xA1, 0x11
      } }; // Bender's daydream
    std::string const GENESIS_TX = "013c01ff0001ffffffffffff03029b2e4c0281c0b02e7c53291a94d1d0cbff8883f8024f5142ee494ffbbd08807121017767aafcde9be00dcfd098715ebcf7f410daebc582fda69d24a28e9d0bc890d1";
    uint32_t const GENESIS_NONCE = 10001;
  }

  namespace stagenet
  {
    uint64_t const CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX = 24;
    uint64_t const CRYPTONOTE_PUBLIC_INTEGRATED_ADDRESS_BASE58_PREFIX = 25;
    uint64_t const CRYPTONOTE_PUBLIC_SUBADDRESS_BASE58_PREFIX = 36;
    uint16_t const P2P_DEFAULT_PORT = 38080;
    uint16_t const RPC_DEFAULT_PORT = 38081;
    uint16_t const ZMQ_RPC_DEFAULT_PORT = 38082;
    boost::uuids::uuid const NETWORK_ID = { {
        0x12 ,0x30, 0xF1, 0x71 , 0x61, 0x04 , 0x41, 0x61, 0x17, 0x31, 0x00, 0x82, 0x16, 0xA1, 0xA1, 0x12
      } }; // Bender's daydream
    std::string const GENESIS_TX = "013c01ff0001ffffffffffff0302df5d56da0c7d643ddd1ce61901c7bdc5fb1738bfe39fbe69c28a3a7032729c0f2101168d0c4ca86fb55a4cf6a36d31431be1c53a3bd7411bb24e8832410289fa6f3b";
    uint32_t const GENESIS_NONCE = 10002;
  }
}

namespace cryptonote
{
  enum network_type : uint8_t
  {
    MAINNET = 0,
    TESTNET,
    STAGENET,
    FAKECHAIN,
    UNDEFINED = 255
  };
  struct config_t
  {
    uint64_t const CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX; 0x1a3504
    uint64_t const CRYPTONOTE_PUBLIC_INTEGRATED_ADDRESS_BASE58_PREFIX; 
    uint64_t const CRYPTONOTE_PUBLIC_SUBADDRESS_BASE58_PREFIX;
    uint16_t const P2P_DEFAULT_PORT;
    uint16_t const RPC_DEFAULT_PORT;
    uint16_t const ZMQ_RPC_DEFAULT_PORT;
    boost::uuids::uuid const NETWORK_ID;
    std::string const GENESIS_TX;
    uint32_t const GENESIS_NONCE;
  };
  inline const config_t& get_config(network_type nettype)
  {
    static const config_t mainnet = {
      ::config::CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX,
      ::config::CRYPTONOTE_PUBLIC_INTEGRATED_ADDRESS_BASE58_PREFIX,
      ::config::CRYPTONOTE_PUBLIC_SUBADDRESS_BASE58_PREFIX,
      ::config::P2P_DEFAULT_PORT,
      ::config::RPC_DEFAULT_PORT,
      ::config::ZMQ_RPC_DEFAULT_PORT,
      ::config::NETWORK_ID,
      ::config::GENESIS_TX,
      ::config::GENESIS_NONCE
    };
    static const config_t testnet = {
      ::config::testnet::CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX,
      ::config::testnet::CRYPTONOTE_PUBLIC_INTEGRATED_ADDRESS_BASE58_PREFIX,
      ::config::testnet::CRYPTONOTE_PUBLIC_SUBADDRESS_BASE58_PREFIX,
      ::config::testnet::P2P_DEFAULT_PORT,
      ::config::testnet::RPC_DEFAULT_PORT,
      ::config::testnet::ZMQ_RPC_DEFAULT_PORT,
      ::config::testnet::NETWORK_ID,
      ::config::testnet::GENESIS_TX,
      ::config::testnet::GENESIS_NONCE
    };
    static const config_t stagenet = {
      ::config::stagenet::CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX,
      ::config::stagenet::CRYPTONOTE_PUBLIC_INTEGRATED_ADDRESS_BASE58_PREFIX,
      ::config::stagenet::CRYPTONOTE_PUBLIC_SUBADDRESS_BASE58_PREFIX,
      ::config::stagenet::P2P_DEFAULT_PORT,
      ::config::stagenet::RPC_DEFAULT_PORT,
      ::config::stagenet::ZMQ_RPC_DEFAULT_PORT,
      ::config::stagenet::NETWORK_ID,
      ::config::stagenet::GENESIS_TX,
      ::config::stagenet::GENESIS_NONCE
    };
    switch (nettype)
    {
      case MAINNET: return mainnet;
      case TESTNET: return testnet;
      case STAGENET: return stagenet;
      case FAKECHAIN: return mainnet;
      default: throw std::runtime_error("Invalid network type");
    }
  };
}
//TODO Add here your network seed nodes
const std::initializer_list<const char*> SEED_NODES = {
  //"your_seed_ip1.com:8080",
  //"your_seed_ip2.com:8080",
};

struct CheckpointData {
  uint32_t height;
  const char* blockId;
};

#ifdef __GNUC__
__attribute__((unused))
#endif

// You may add here other checkpoints using the following format:
// {<block height>, "<block hash>"},
const std::initializer_list<CheckpointData> CHECKPOINTS = {
  //{ 10000, "84b6345731e2702cdaadc6ce5e5238c4ca5ecf48e3447136b2ed829b8a95f3ad" },
};
} // CryptoNote

#define ALLOW_DEBUG_COMMANDS
