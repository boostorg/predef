# Copyright Boris Kolpackov 2019
# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE_1_0.txt or copy at
# http://www.boost.org/LICENSE_1_0.txt

./: include/ test/ manifest

# Don't install tests.
#
test/: install = false
