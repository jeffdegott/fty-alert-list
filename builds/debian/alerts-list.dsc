Format:         1.0
Source:         alerts-list
Version:        0.6.0-1
Binary:         libalerts-list0, alerts-list-dev
Architecture:   any all
Maintainer:     John Doe <John.Doe@example.com>
Standards-Version: 3.9.5
Build-Depends: bison, debhelper (>= 8),
    pkg-config,
    automake,
    autoconf,
    libtool,
    libzmq4-dev,
    libczmq-dev,
    libmlm-dev,
    libbiosproto-dev,
    dh-autoreconf

Package-List:
 libalerts-list0 deb net optional arch=any
 alerts-list-dev deb libdevel optional arch=any

