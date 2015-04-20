/*
 * Copyright (c) 2014-2015 Kartik Kumar, Dinamica Srl
 * Copyright (c) 2014-2015 Marko Jankovic, DFKI GmbH
 * Copyright (c) 2014-2015 Natalia Ortiz, University of Southampton
 * Copyright (c) 2014-2015 Juan Romero, University of Strathclyde
 * Distributed under the MIT License.
 * See accompanying file LICENSE.md or copy at http://opensource.org/licenses/MIT
 */

#include <catch.hpp>

#include "Spot/dummy.hpp"

namespace spot
{
namespace tests
{

TEST_CASE( "Test dummy function", "[dummy]" )
{
    REQUIRE( executeDummy( ) );
}

} // namespace tests
} // namespace spot
