#!/bin/bash
SFWRC="/home/punchy/dotfiles/vim/.vimrc-SFW"
cp ~/.vimrc $SFWRC
# remove plugins if they exist between call plug#begin/end
sed -i "/call plug#begin/,/call plug#end/d" $SFWRC
# remove plugin comment line
sed -i "/vim plug/d" $SFWRC
# remove any traces of nvim
sed -i "/if has('nvim')/,/endif/d" $SFWRC
# remove i3 specific configs
sed -i "/let \$i3/d" $SFWRC
