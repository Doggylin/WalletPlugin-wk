// Objective-C API for talking to github.com/WaykiChain/wicc-wallet-utils-go Go package.
//   gobind -lang=objc github.com/WaykiChain/wicc-wallet-utils-go
//
// File is generated by gobind. Do not edit.

#ifndef __Wiccwallet_H__
#define __Wiccwallet_H__

@import Foundation;
#include "Universe.objc.h"


@class WiccwalletCallContractTxParam;
@class WiccwalletCommonTxParam;
@class WiccwalletDelegateTxParam;
@class WiccwalletMnemonic;
@class WiccwalletOperVoteFund;
@class WiccwalletOperVoteFunds;
@class WiccwalletRegisterAccountTxParam;
@class WiccwalletRegisterContractTxParam;
@class WiccwalletSignMessageParam;

/**
 * CallContractTxParam param of the call contract tx
 */
@interface WiccwalletCallContractTxParam : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
- (int64_t)validHeight;
- (void)setValidHeight:(int64_t)v;
- (NSString*)srcRegId;
- (void)setSrcRegId:(NSString*)v;
- (NSString*)appId;
- (void)setAppId:(NSString*)v;
- (int64_t)fees;
- (void)setFees:(int64_t)v;
- (int64_t)values;
- (void)setValues:(int64_t)v;
- (NSString*)contractHex;
- (void)setContractHex:(NSString*)v;
@end

@interface WiccwalletCommonTxParam : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
- (int64_t)validHeight;
- (void)setValidHeight:(int64_t)v;
- (NSString*)srcRegId;
- (void)setSrcRegId:(NSString*)v;
- (NSString*)destAddr;
- (void)setDestAddr:(NSString*)v;
- (int64_t)values;
- (void)setValues:(int64_t)v;
- (int64_t)fees;
- (void)setFees:(int64_t)v;
@end

/**
 * DelegateTxParam param of the delegate tx
 */
@interface WiccwalletDelegateTxParam : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
- (int64_t)validHeight;
- (void)setValidHeight:(int64_t)v;
- (NSString*)srcRegId;
- (void)setSrcRegId:(NSString*)v;
- (int64_t)fees;
- (void)setFees:(int64_t)v;
- (WiccwalletOperVoteFunds*)votes;
- (void)setVotes:(WiccwalletOperVoteFunds*)v;
@end

@interface WiccwalletMnemonic : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)initWithDefaultOption;
- (instancetype)initWithLanguage:(NSString*)language;
- (long)entropySize;
- (void)setEntropySize:(long)v;
- (NSString*)password;
- (void)setPassword:(NSString*)v;
/**
 * New mnemonic follow the wordlists
 */
- (NSString*)generateMnemonic:(NSError**)error;
/**
 * Generate seed from mnemonic and pass( optional )
 */
- (NSData*)generateSeed:(NSString*)mnemonic error:(NSError**)error;
// skipped method Mnemonic.ListWord with unsupported parameter or return types

@end

/**
 * OperVoteFund operation of vote fund
 */
@interface WiccwalletOperVoteFund : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
- (NSData*)pubKey;
- (void)setPubKey:(NSData*)v;
- (int64_t)voteValue;
- (void)setVoteValue:(int64_t)v;
@end

/**
 * OperVoteFunds array of OperVoteFund
 */
@interface WiccwalletOperVoteFunds : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
/**
 * NewOperVoteFunds create new OperVoteFunds
 */
- (instancetype)init;
/**
 * Add element to OperVoteFund
pubKey is binary bytes
voteValue add fund if >= 0, minus fund if < 0
 */
- (void)add:(WiccwalletOperVoteFund*)fund;
/**
 * Get element of OperVoteFund by index
 */
- (WiccwalletOperVoteFund*)get:(long)index;
/**
 * Len get the length of OperVoteFunds
 */
- (long)len:(long)index;
@end

/**
 * RegisterAccountTxParam register account tx param
 */
@interface WiccwalletRegisterAccountTxParam : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
- (int64_t)validHeight;
- (void)setValidHeight:(int64_t)v;
- (int64_t)fees;
- (void)setFees:(int64_t)v;
@end

/**
 * RegisterContractTxParam param of the register contract tx
 */
@interface WiccwalletRegisterContractTxParam : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
- (int64_t)validHeight;
- (void)setValidHeight:(int64_t)v;
- (NSString*)srcRegId;
- (void)setSrcRegId:(NSString*)v;
- (int64_t)fees;
- (void)setFees:(int64_t)v;
- (NSData*)script;
- (void)setScript:(NSData*)v;
- (NSString*)description;
- (void)setDescription:(NSString*)v;
@end

@interface WiccwalletSignMessageParam : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
- (NSString*)publicKey;
- (void)setPublicKey:(NSString*)v;
- (NSString*)signMessage;
- (void)setSignMessage:(NSString*)v;
@end

FOUNDATION_EXPORT const int64_t WiccwalletCONTRACT_SCRIPT_DESC_MAX_SIZE;
FOUNDATION_EXPORT const int64_t WiccwalletCONTRACT_SCRIPT_MAX_SIZE;
/**
 * List Mnemonic language support
 */
FOUNDATION_EXPORT NSString* const WiccwalletENGLISH;
/**
 * List Mnemonic language support
 */
FOUNDATION_EXPORT NSString* const WiccwalletFRENCH;
FOUNDATION_EXPORT const int64_t WiccwalletINITIAL_COIN;
/**
 * List Mnemonic language support
 */
FOUNDATION_EXPORT NSString* const WiccwalletITALIAN;
/**
 * List Mnemonic language support
 */
FOUNDATION_EXPORT NSString* const WiccwalletJAPANESE;
/**
 * List Mnemonic language support
 */
FOUNDATION_EXPORT NSString* const WiccwalletKOREAN;
FOUNDATION_EXPORT const int64_t WiccwalletMAX_MONEY;
FOUNDATION_EXPORT const int64_t WiccwalletMIN_TX_FEE;
FOUNDATION_EXPORT const int64_t WiccwalletMONEY_PER_COIN;
/**
 * List Mnemonic language support
 */
FOUNDATION_EXPORT NSString* const WiccwalletSPANISH;
/**
 * const for transactions
 */
FOUNDATION_EXPORT const int64_t WiccwalletTX_VERSION;
/**
 * network type
 */
FOUNDATION_EXPORT const long WiccwalletWAYKI_MAINTNET;
FOUNDATION_EXPORT const long WiccwalletWAYKI_TESTNET;

@interface Wiccwallet : NSObject
/**
 * errors
 */
+ (NSError*) erR_EMPTY_VOTES;
+ (void) setERR_EMPTY_VOTES:(NSError*)v;

/**
 * errors
 */
+ (NSError*) erR_FEE_SMALLER_MIN;
+ (void) setERR_FEE_SMALLER_MIN:(NSError*)v;

/**
 * errors
 */
+ (NSError*) erR_INVALID_APP_ID;
+ (void) setERR_INVALID_APP_ID:(NSError*)v;

/**
 * errors
 */
+ (NSError*) erR_INVALID_CONTRACT_HEX;
+ (void) setERR_INVALID_CONTRACT_HEX:(NSError*)v;

/**
 * errors
 */
+ (NSError*) erR_INVALID_DEST_ADDR;
+ (void) setERR_INVALID_DEST_ADDR:(NSError*)v;

/**
 * errors
 */
+ (NSError*) erR_INVALID_MNEMONIC;
+ (void) setERR_INVALID_MNEMONIC:(NSError*)v;

/**
 * errors
 */
+ (NSError*) erR_INVALID_NETWORK;
+ (void) setERR_INVALID_NETWORK:(NSError*)v;

/**
 * errors
 */
+ (NSError*) erR_INVALID_PRIVATE_KEY;
+ (void) setERR_INVALID_PRIVATE_KEY:(NSError*)v;

/**
 * errors
 */
+ (NSError*) erR_INVALID_SCRIPT;
+ (void) setERR_INVALID_SCRIPT:(NSError*)v;

/**
 * errors
 */
+ (NSError*) erR_INVALID_SCRIPT_DESC;
+ (void) setERR_INVALID_SCRIPT_DESC:(NSError*)v;

/**
 * errors
 */
+ (NSError*) erR_INVALID_SRC_REG_ID;
+ (void) setERR_INVALID_SRC_REG_ID:(NSError*)v;

/**
 * errors
 */
+ (NSError*) erR_INVALID_VOTE_PUBKEY;
+ (void) setERR_INVALID_VOTE_PUBKEY:(NSError*)v;

/**
 * errors
 */
+ (NSError*) erR_NEGATIVE_VALID_HEIGHT;
+ (void) setERR_NEGATIVE_VALID_HEIGHT:(NSError*)v;

/**
 * errors
 */
+ (NSError*) erR_RANGE_FEE;
+ (void) setERR_RANGE_FEE:(NSError*)v;

/**
 * errors
 */
+ (NSError*) erR_RANGE_VALUES;
+ (void) setERR_RANGE_VALUES:(NSError*)v;

/**
 * errors
 */
+ (NSError*) erR_RANGE_VOTE_VALUE;
+ (void) setERR_RANGE_VOTE_VALUE:(NSError*)v;

/**
 * errors
 */
+ (NSError*) erR_SIGNATURE_ERROR;
+ (void) setERR_SIGNATURE_ERROR:(NSError*)v;

@end

FOUNDATION_EXPORT BOOL WiccwalletCheckAddress(NSString* address, long netType, BOOL* ret0_, NSError** error);

FOUNDATION_EXPORT BOOL WiccwalletCheckPrivateKey(NSString* privateKey, long netType, BOOL* ret0_, NSError** error);

/**
 * Generate Mnemonics string, saprated by space, default language is EN(english)
 */
FOUNDATION_EXPORT NSString* WiccwalletGenerateMnemonics(void);

/**
 * 助记词转换地址
netType: WAYKI_TESTNET or WAYKI_MAINTNET
 */
FOUNDATION_EXPORT NSString* WiccwalletGetAddressFromMnemonic(NSString* wordsStr, long netType, NSError** error);

/**
 * GetAddressFromPrivateKey get address from private key
netType: WAYKI_TESTNET or WAYKI_MAINTNET
 */
FOUNDATION_EXPORT NSString* WiccwalletGetAddressFromPrivateKey(NSString* privateKey, long netType, NSError** error);

/**
 * 助记词转私钥
netType: WAYKI_TESTNET or WAYKI_MAINTNET
 */
FOUNDATION_EXPORT NSString* WiccwalletGetPrivateKeyFromMnemonic(NSString* wordsStr, long netType, NSError** error);

FOUNDATION_EXPORT WiccwalletMnemonic* WiccwalletNewMnemonicWithDefaultOption(void);

FOUNDATION_EXPORT WiccwalletMnemonic* WiccwalletNewMnemonicWithLanguage(NSString* language);

/**
 * NewOperVoteFunds create new OperVoteFunds
 */
FOUNDATION_EXPORT WiccwalletOperVoteFunds* WiccwalletNewOperVoteFunds(void);

/**
 * SignCallContractTx sign for call contract tx
returns the signature hex string and nil error, or returns empty string and the error if it has error
 */
FOUNDATION_EXPORT NSString* WiccwalletSignCallContractTx(NSString* privateKey, WiccwalletCallContractTxParam* param, NSError** error);

/**
 * SignCommonTx sign for common tx
returns the signature hex string and nil error, or returns empty string and the error if it has error
 */
FOUNDATION_EXPORT NSString* WiccwalletSignCommonTx(NSString* privateKey, WiccwalletCommonTxParam* param, NSError** error);

/**
 * SignDelegateTx sign for delegate tx
returns the signature hex string and nil error, or returns empty string and the error if it has error
 */
FOUNDATION_EXPORT NSString* WiccwalletSignDelegateTx(NSString* privateKey, WiccwalletDelegateTxParam* param, NSError** error);

FOUNDATION_EXPORT WiccwalletSignMessageParam* WiccwalletSignMessage(NSString* privateKey, NSString* message, NSError** error);

/**
 * SignRegisterAccountTx sign for register account tx
returns the signature hex string and nil error, or returns empty string and the error if it has error
 */
FOUNDATION_EXPORT NSString* WiccwalletSignRegisterAccountTx(NSString* privateKey, WiccwalletRegisterAccountTxParam* param, NSError** error);

/**
 * SignRegisterContractTx sign for call register contract tx
returns the signature hex string and nil error, or returns empty string and the error if it has error
 */
FOUNDATION_EXPORT NSString* WiccwalletSignRegisterContractTx(NSString* privateKey, WiccwalletRegisterContractTxParam* param, NSError** error);

#endif
