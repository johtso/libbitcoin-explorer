/*
 * Copyright (c) 2011-2014 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin-explorer.
 *
 * libbitcoin-explorer is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Affero General Public License with
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

#include "command.hpp"

BX_USING_NAMESPACES()

BOOST_AUTO_TEST_SUITE(offline)
BOOST_AUTO_TEST_SUITE(cert_public__invoke)

// Because zcert doesn't support cert streaming, and we can't add arbitrary
// virutal methods to generated command headers, we have a test limitation.

BOOST_AUTO_TEST_CASE(cert_public__invoke__invalid_path__okay_output)
{
    BX_DECLARE_COMMAND(cert_public);
    BX_REQUIRE_FAILURE(command.invoke(output, error));
    const auto message = format(BX_CERT_PUBLIC_INVALID) % "\"\"";
    BX_REQUIRE_ERROR(message.str() + "\n");
}

BOOST_AUTO_TEST_SUITE_END()
BOOST_AUTO_TEST_SUITE_END()
