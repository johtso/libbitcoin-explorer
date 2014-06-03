/**
 * Copyright (c) 2011-2014 sx developers (see AUTHORS)
 *
 * This file is part of sx.
 *
 * sx is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License with
 * additional permissions to the one published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version. For more information see LICENSE.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#include <bitcoin/bitcoin.hpp>
#include <sx/command/scripthash.hpp>
#include <sx/utility/console.hpp>

using namespace bc;

int main()
{
    std::string hex_script = read_stream(std::cin);
    script_type bip16_script = parse_script(decode_hex(hex_script));
    payment_address payaddr;
    set_script(payaddr, bip16_script);
    std::cout << payaddr.encoded() << std::endl;
    return 0;
}
