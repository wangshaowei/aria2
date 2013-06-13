#!/bin/bash
if [ ! -e ./configure ];then
    autoreconf -i
fi

./configure --without-gnutls --with-openssl
make

