#ifndef TRIAL_URL_SYNTAX_PORT_HPP
#define TRIAL_URL_SYNTAX_PORT_HPP

///////////////////////////////////////////////////////////////////////////////
//
// Copyright (C) 2015 Bjorn Reese <breese@users.sourceforge.net>
//
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)
//
///////////////////////////////////////////////////////////////////////////////

#include <boost/utility/string_ref.hpp>

namespace trial
{
namespace url
{
namespace syntax
{

template <typename CharT>
class port
{
public:
    typedef CharT value_type;
    typedef boost::basic_string_ref<value_type> view_type;

    static std::size_t match(const view_type&);
    template <typename T> static T decode(const view_type&);
};

} // namespace syntax
} // namespace url
} // namespace trial

#include <trial/url/syntax/port.ipp>

#endif // TRIAL_URL_SYNTAX_PORT_HPP
