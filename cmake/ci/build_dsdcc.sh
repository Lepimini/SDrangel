#!/bin/sh

cd $HOME
mkdir -p external && cd external
mkdir -p f4exb && cd f4exb

git clone https://github.com/f4exb/dsdcc.git

cd dsdcc
git reset --hard  "v1.9.3"
mkdir -p build && cd build
cmake ..
sudo make install
sudo ldconfig
