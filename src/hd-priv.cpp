#include <bitcoin/bitcoin.hpp>
#include <wallet/wallet.hpp>
#include "util.hpp"
using namespace bc;
using namespace libwallet;

int main(int argc, char** argv)
{
    bool is_hard = false;
    uint32_t index = 0;
    if (!read_hd_command_args(argc, argv, is_hard, index))
        return -1;
    // Arguments now parsed. Read key from STDIN.
    return 0;
}
