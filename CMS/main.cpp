#include <iostream>
#include "Blockchain.h"
#include <bits/stdc++.h>

int main() {
    Blockchain bChain = Blockchain();

    std::cout << "Mining Block 1" << std::endl;
    bChain.AddBlock(Block(1,"Block 1 Data"));
    std::cout << "Mining Block 2" << std::endl;
    bChain.AddBlock(Block(2,"Block 2 Data"));
    std::cout << "Mining Block 3" << std::endl;
    bChain.AddBlock(Block(3,"Block 3 Data"));
    return 0;
}