/*
* Copyright (c) 2013 Rony Shapiro <ronys@users.sourceforge.net>.
* All rights reserved. Use of the code is allowed under the
* Artistic License 2.0 terms, as specified in the LICENSE file
* distributed with this code, or available from
* http://www.opensource.org/licenses/artistic-license-2.0.php
*/
// Interface for PBKDF2 (RFC2898 Section 5.2)
// Based on LibTomCrypt by
// Tom St Denis, tomstdenis@iahu.ca, http://libtomcrypt.org

// SHA-1 is supported because that's what we have test vectors for
// (RFC-6070).

#ifndef __PBKDF2_H
#define __PBKDF2_H
class Hash;
/**
   @param password          The input password (or key)
   @param password_len      The length of the password (octets)
   @param salt              The salt (or nonce)
   @param salt_len          The length of the salt (octets)
   @param iteration_count   # of iterations desired for LTC_PKCS #5 v2 [read specs for more]
   @param out               [out] The destination for this algorithm
   @param outlen            [in/out] The max size and resulting size of the algorithm output
*/
void pbkdf2(const unsigned char *password, unsigned long password_len, 
            const unsigned char *salt,     unsigned long salt_len,
            int iteration_count,
            unsigned char *out,            unsigned long *outlen);
#endif /* __PBKDF2_H */