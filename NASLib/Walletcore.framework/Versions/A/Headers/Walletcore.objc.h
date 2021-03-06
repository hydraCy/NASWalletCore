// Objective-C API for talking to WalletCore/walletcore Go package.
//   gobind -lang=objc WalletCore/walletcore
//
// File is generated by gobind. Do not edit.

#ifndef __Walletcore_H__
#define __Walletcore_H__

@import Foundation;
#include "Universe.objc.h"


@class WalletcorePayload;
@class WalletcoreResponse;
@class WalletcoreSignedData;

@interface WalletcorePayload : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
/**
 * nas: contract
nas: contract source code.
 */
- (NSString*)nasSource;
- (void)setNASSource:(NSString*)v;
/**
 * nas: contract source type, support javascript and typescript
 */
- (NSString*)nasSourceType;
- (void)setNASSourceType:(NSString*)v;
/**
 * nas: call contract function name
 */
- (NSString*)nasFunction;
- (void)setNASFunction:(NSString*)v;
/**
 * nas: the params of contract.
 */
- (NSString*)nasArgs;
- (void)setNASArgs:(NSString*)v;
/**
 * nas: binary
 */
- (NSString*)nasBinary;
- (void)setNASBinary:(NSString*)v;
/**
 * payLoadType
 */
- (NSString*)nasType;
- (void)setNASType:(NSString*)v;
/**
 * eth: binary
 */
- (NSString*)ethContract;
- (void)setETHContract:(NSString*)v;
@end

@interface WalletcoreResponse : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
/**
 * *
	errorCode
 */
- (long)errorCode;
- (void)setErrorCode:(long)v;
/**
 * *
	errorMsg
 */
- (NSString*)errorMsg;
- (void)setErrorMsg:(NSString*)v;
/**
 * *
	wallet address
 */
- (NSString*)address;
- (void)setAddress:(NSString*)v;
/**
 * *
	Transaction password
 */
- (NSString*)passphrase;
- (void)setPassphrase:(NSString*)v;
/**
 * *
	Encoded keyjson
 */
- (NSString*)keyJson;
- (void)setKeyJson:(NSString*)v;
/**
 * *
	raw transaction string
 */
- (NSString*)rawTransaction;
- (void)setRawTransaction:(NSString*)v;
/**
 * *
	plain private key string
 */
- (NSString*)plainPrivateKey;
- (void)setPlainPrivateKey:(NSString*)v;
/**
 * *
	mnemonic
 */
- (NSString*)mnemonic;
- (void)setMnemonic:(NSString*)v;
@end

@interface WalletcoreSignedData : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
/**
 * *
	errorCode
	1.=0 正常
	2.≠0 展示ErrorMsg错误信息
 */
- (long)errorCode;
- (void)setErrorCode:(long)v;
/**
 * *
	errorMsg
 */
- (NSString*)errorMsg;
- (void)setErrorMsg:(NSString*)v;
/**
 * *
	原始加密数据
 */
- (NSString*)rawData;
- (void)setRawData:(NSString*)v;
/**
 * *
	签名后的Signature
 */
- (NSString*)signature;
- (void)setSignature:(NSString*)v;
@end

/**
 * Coin Types
 */
FOUNDATION_EXPORT NSString* const WalletcoreETH;
/**
 * Coin Types
 */
FOUNDATION_EXPORT NSString* const WalletcoreNAS;
/**
 * NAS Payload Types
 */
FOUNDATION_EXPORT NSString* const WalletcoreTxPayloadBinaryType;
/**
 * Coin Types
 */
FOUNDATION_EXPORT NSString* const WalletcoreTxPayloadCallType;
/**
 * Coin Types
 */
FOUNDATION_EXPORT NSString* const WalletcoreTxPayloadDeployType;

/**
 * *
get the plain privateKey from the given keyJson and passphrase
 */
FOUNDATION_EXPORT WalletcoreResponse* WalletcoreGetPlainPrivateKeyFromKeyJson(NSString* coinType, NSString* keyJson, NSString* passphrase);

/**
 * *
get plainPrivateKey from the given Mnemonic and path
if do not have the mnemonic, you can use "" to get a new mnemonic
 */
FOUNDATION_EXPORT WalletcoreResponse* WalletcoreGetPlainPrivateKeyFromMnemonic(NSString* mnemonic, NSString* path);

/**
 * *
Generate the raw transaction
 */
FOUNDATION_EXPORT WalletcoreResponse* WalletcoreGetRawTransaction(NSString* coinType, NSString* chainID, NSString* fromAddr, NSString* passphrase, NSString* keyJson, NSString* toAddr, NSString* amount, NSString* nonce, WalletcorePayload* payload, NSString* gasPrice, NSString* gasLimit);

/**
 * *
Import wallet from the given keyJson and passphrase
 */
FOUNDATION_EXPORT WalletcoreResponse* WalletcoreImportWalletFromKeyJson(NSString* coinType, NSString* keyJson, NSString* passphrase);

/**
 * *
import wallet from the given Mnemonic and path
if do not have the mnemonic, you can use "" to get a new mnemonic
 */
FOUNDATION_EXPORT WalletcoreResponse* WalletcoreImportWalletFromMnemonic(NSString* coinType, NSString* mnemonic, NSString* path, NSString* passphrase);

/**
 * *
Import wallet from the given plain privateKey and passphrase
 */
FOUNDATION_EXPORT WalletcoreResponse* WalletcoreImportWalletFromPrivateKey(NSString* coinType, NSString* privateKey, NSString* passphrase);

/**
 * *
Generate the wallet from the given passphrase
 */
FOUNDATION_EXPORT WalletcoreResponse* WalletcoreNewWallet(NSString* coinType, NSString* passphrase);

/**
 * *
reset the passphrase base of the old passphrase
 */
FOUNDATION_EXPORT WalletcoreResponse* WalletcoreResetPassPhrase(NSString* coinType, NSString* keyJson, NSString* passphrase, NSString* newPassPhrase);

/**
 * *
SignData, sign giving data use privatekey
 */
FOUNDATION_EXPORT WalletcoreSignedData* WalletcoreSignData(NSString* coinType, NSString* keyJson, NSString* passphrase, NSString* data);

/**
 * *
verify the passphrase of the given keyjson
 */
FOUNDATION_EXPORT WalletcoreResponse* WalletcoreVerifyPassPhraseOfKeyJson(NSString* coinType, NSString* keyJson, NSString* passphrase);

#endif
