/* LibTomCrypt, modular cryptographic library -- Tom St Denis
 *
 * LibTomCrypt is a library that provides various cryptographic
 * algorithms in a highly modular and flexible manner.
 *
 * The library is free for all purposes without any express
 * guarantee it works.
 */
#include "tomcrypt_private.h"

/**
  @file f8_decrypt.c
  F8 implementation, decrypt data, Tom St Denis
*/

#ifdef LTC_F8_MODE

/**
   F8 decrypt
   @param ct      Ciphertext
   @param pt      [out] Plaintext
   @param len     Length of ciphertext (octets)
   @param f8      F8 state
   @return CRYPT_OK if successful
*/
int f8_decrypt(const unsigned char *ct, unsigned char *pt, unsigned long len, symmetric_F8 *f8)
{
   LTC_ARGCHK(pt != NULL);
   LTC_ARGCHK(ct != NULL);
   LTC_ARGCHK(f8 != NULL);
   return f8_encrypt(ct, pt, len, f8);
}


#endif



/* ref:         HEAD -> develop */
/* git commit:  e8afa13d5c19d2757ff56537d34802c1dad2c507 */
/* commit time: 2019-04-10 17:05:59 +0200 */
