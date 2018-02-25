#ifndef _HSK_ERRORS_H
#define _HSK_ERRORS_H

// Inherit all ares codes.
#define HSK_ENODATA 1
#define HSK_EFORMERR 2
#define HSK_ESERVFAIL 3
#define HSK_ENOTFOUND 4
#define HSK_ENOTIMP 5
#define HSK_EREFUSED 6
#define HSK_EBADQUERY 7
#define HSK_EBADNAME 8
#define HSK_EBADFAMILY 9
#define HSK_EBADRESP 10
#define HSK_ECONNREFUSED 11
#define HSK_ETIMEOUT 12
#define HSK_EOF 13
#define HSK_EFILE 14
#define HSK_ENOMEM 15
#define HSK_EDESTRUCTION 16
#define HSK_EBADSTR 17
#define HSK_EBADFLAGS 18
#define HSK_ENONAME 19
#define HSK_EBADHINTS 20
#define HSK_ENOTINITIALIZED 21
#define HSK_ELOADIPHLPAPI 22
#define HSK_EADDRGETNETWORKPARAMS 23
#define HSK_ECANCELLED 24

// Generic
#define HSK_SUCCESS 0
#define HSK_EOK 0
#define HSK_EFAILURE 25
#define HSK_EBADARGS 26
#define HSK_EENCODING 27

// Proofs
#define HSK_EPROOFOK 0
#define HSK_EHASHMISMATCH 28
#define HSK_EMALFORMEDNODE 29
#define HSK_EINVALIDNODE 30
#define HSK_EEARLYEND 31
#define HSK_ENORESULT 32
#define HSK_EUNKNOWNERROR 33
#define HSK_EUNEXPECTEDNODE 34
#define HSK_ERECORDMISMATCH 35

// Cuckoo
#define HSK_EPOWOK 0
#define HSK_EPOWPROOFSIZE 36
#define HSK_EPOWTOOBIG 37
#define HSK_EPOWTOOSMALL 38
#define HSK_EPOWNONMATCHING 39
#define HSK_EPOWBRANCH 40
#define HSK_EPOWDEADEND 41
#define HSK_EPOWSHORTCYCLE 42

// POW
#define HSK_NEGTARGET 43
#define HSK_HIGHHASH 44

#define HSK_ETIMETOONEW 100
#define HSK_EDUPLICATE 101
#define HSK_EDUPLICATEORPHAN 102
#define HSK_ETIMETOOOLD 103
#define HSK_EBADDIFFBITS 104
#endif
