Synapse is a non-intrusive {CPP} signal programming library. Features:

* Register connections and emit signals from any C or {CPP} object of any type whatsoever.

* If two contexts share access to a C or {CPP} object, they can use that object as a randezvouz point, and communicate with each other through Synapse signals.

* A system of meta signals provides interoperability with other signal programming libraries and callback APIs.

* In a multi-thread environment signals can be emitted asynchronously and scheduled for synchronous execution when polled in other threads.

Copyright (c) 2015-2018 Emil Dotchevski. Distributed under the [Boost Software License, Version 1.0](http://www.boost.org/LICENSE_1_0.txt).

Please post questions and feedback on the Boost Developers Mailing List (Synapse is not part of Boost).

Official documentation: https://zajo.github.io/boost-synapse/