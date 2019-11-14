//
// Created by user on 14/11/19.
//

#ifndef CMS_BLOCK_H
#define CMS_BLOCK_H
#include <cstdint>
#include <iostream>

using namespace std;
class Block {
public:
    Block(uint32_t nIndexIn, const string &sDataIn);

    string sPrevHash;

    Block(string data,uint32_t nIndexIn, const string &sDataIn);

    string GetHash();

    void MineBlock(uint32_t nDifficulty);

private:
    uint32_t _nIndex;
    int64_t _nNonce;
    string _sData;
    string _sHash;
    time_t _tTime;

    string _CalculateHash() const;
};
#endif //CMS_BLOCK_H
