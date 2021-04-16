#!/bin/sh

SCRIPT_DIR=$(cd $(dirname $0); pwd)
OUTDIR=$SCRIPT_DIR/../build

mkdir -p $OUTDIR
cmake -B $OUTDIR -S $SCRIPT_DIR -DJANSSON_BUILD_DOCS=OFF
cmake --build $OUTDIR
