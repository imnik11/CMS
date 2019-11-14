//
// Created by user on 14/11/19.
//

#ifndef CMS_BLOCKCHAIN_H
#define CMS_BLOCKCHAIN_H

#include <cstdint>
#include <vector>
#include "Block.h"

using namespace std;
class Blockchain {
public:
    Blockchain();

    void AddBlock(Block bNew);

private:
    uint32_t _nDifficulty;
    vector<Block> _vChain;

    Block _GetLastBlock() const;
};

#endif //CMS_BLOCKCHAIN_H
