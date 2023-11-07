#!/bin/bash

function compile() 
{

source ~/.bashrc && source ~/.profile
export ARCH=arm64
export KBUILD_BUILD_HOST="linuxmint"
export KBUILD_BUILD_USER="radinka"
git clone --depth=1 https://github.com/kdrag0n/proton-clang "${HOME}/clang-proton"

rm -rf AnyKernel
make O=out ARCH=arm64 rosemary_defconfig

PATH="${HOME}/clang-proton/bin:${PATH}" \
make -j$(nproc --all) O=out \
                      ARCH=arm64 \
                      CC="clang" \
                      CROSS_COMPILE=aarch64-linux-gnu- \
                      CROSS_COMPILE_ARM32=arm-linux-gnueabi- 
}

function zupload()
{
git clone --depth=1 https://github.com/clyfly/AnyKernel3.git -b master AnyKernel
cp out/arch/arm64/boot/Image.gz AnyKernel
cd AnyKernel
zip -r9 rad[-perf-Svendor].zip AnyKernel
}

compile
zupload