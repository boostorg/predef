#!/bin/sh

target_dir=${PWD}

cd `dirname $0`

rm -rf ${target_dir}/libs/predef/doc
find doc -type d -exec mkdir -p ${target_dir}/libs/predef/{} ';'
find doc -type f -exec ln {} ${target_dir}/libs/predef/{} ';'

rm -rf ${target_dir}/libs/predef/test
find test -type d -exec mkdir -p ${target_dir}/libs/predef/{} ';'
find test -type f -exec ln {} ${target_dir}/libs/predef/{} ';'

cd include/boost

rm -rf ${target_dir}/boost/predef
find predef -type d -exec mkdir -p ${target_dir}/boost/{} ';'
find predef -type f -exec ln {} ${target_dir}/boost/{} ';'

rm -f ${target_dir}/boost/predef.h
ln predef.h ${target_dir}/boost/predef.h
