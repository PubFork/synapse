//Copyright (c) 2015 Emil Dotchevski and Reverge Studios, Inc.

//Distributed under the Boost Software License, Version 1.0. (See accompanying
//file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef UUID_D355B31075FB11E684FA1794B53EDEC4
#define UUID_D355B31075FB11E684FA1794B53EDEC4

#include <boost/synapse/dep/smart_ptr.hpp>
#include <boost/synapse/dep/functional.hpp>

namespace
boost
    {
    namespace
    synapse
        {
        struct thread_local_queue;
        shared_ptr<thread_local_queue> create_thread_local_queue();
        int poll( thread_local_queue & );
        void post( thread_local_queue &, function<void()> const & );
        }
    }

#endif
